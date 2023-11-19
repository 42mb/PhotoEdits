// You may need to build the project (run Qt uic code generator) to get "ui_windoo.h" resolved

#include "windoo.hpp"
#include "ui_windoo.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QImage>
#include <QVector>
#include <vector>
#include "Image.hpp"
#include <iostream>


//windoo = mainwindow


Image image;


windoo::windoo(QWidget *parent) :
        QWidget(parent), ui(new Ui::windoo) {
    ui->setupUi(this);


//    connect(ui->sliderChannelRed,SIGNAL(valueChanged(int)),this,SLOT(on_sliderChannelRed_valueChanged(int)));
//    connect(ui->sliderChannelGreen,SIGNAL(valueChanged(int)),this,SLOT(on_sliderChannelGreen_valueChanged(int)));
//    connect(ui->sliderChannelBlue,SIGNAL(valueChanged(int)),this,SLOT(on_sliderChannelBlue_valueChanged(int)));

}

windoo::~windoo() {
    delete ui;
}



[[maybe_unused]] void windoo::on_pushButtonBrowse_clicked() {

    QString file_name = QFileDialog::getOpenFileName(this, tr("OpenFile"), QDir::homePath(),
                                                    tr("Images (*.png *.xpm *.jpg)"));

   if(!file_name.isEmpty()) {
       QMessageBox::information(this, "...", file_name);
       QImage img(file_name);
       image.initImage(img);
       image.isLoaded = true;
       doEdits();
   }

}

[[maybe_unused]] void windoo::doEdits() {
    if (image.isLoaded) {
        image.runPixelpipeline();
        QPixmap pix = QPixmap::fromImage(image.m_img);
        ui->labelPic->setPixmap(pix.scaled(ui->labelPic->width(), ui->labelPic->height(), Qt::KeepAspectRatio));
    }
}

[[maybe_unused]] void windoo::on_checkBoxChannelMixer_clicked() {
    image.colorChannelMixerActive =   ui->checkBoxChannelMixer->checkState();
    doEdits();
}

[[maybe_unused]] void windoo::on_pushButtonChannelMixerReset_clicked() {
    image.colorChannelSlider.Red   = 0;
    image.colorChannelSlider.Green = 0;
    image.colorChannelSlider.Blue  = 0;
    ui->windoo::sliderChannelRed->setValue(0);
    ui->windoo::sliderChannelGreen->setValue(0);
    ui->windoo::sliderChannelBlue->setValue(0);
    //TODO connect slider to valuebox and add exponential graph to slider
    doEdits();
}

[[maybe_unused]] void windoo::on_sliderChannelRed_valueChanged(int value) {
    image.colorChannelSlider.Red = value;
    doEdits();
}

[[maybe_unused]] void windoo::on_sliderChannelGreen_valueChanged(int value) {
    image.colorChannelSlider.Green = value;
    doEdits();
}

[[maybe_unused]] void windoo::on_sliderChannelBlue_valueChanged(int value) {
    image.colorChannelSlider.Blue = value;
    doEdits();
}

[[maybe_unused]] void windoo::on_greyButton_clicked() {
    image.setGreyscale();
    QPixmap pix = QPixmap::fromImage(image.m_img);
    ui->labelPic->setPixmap(pix.scaled(ui->labelPic->width(), ui->labelPic->height(), Qt::KeepAspectRatio));
}


[[maybe_unused]] void windoo::on_pushButtonSaveAs_clicked() {
    //TODO maybe?? QSTRING QImageWriter::errorString() const;

    QString fileName =
            QFileDialog::getSaveFileName(this, tr("Save Image"),
                                         "untitled.png", tr("Images (*.png)"));

    if (fileName != ""){
        image.m_img.save(fileName);

        auto *Label1 = new QLabel();
        Label1->setMinimumWidth(40);
        Label1->setMinimumHeight(30);
        Label1->setText("save complete");//TODO overhaul look
        Label1->show();

    }



}
