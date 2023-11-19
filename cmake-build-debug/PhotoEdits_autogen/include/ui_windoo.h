/********************************************************************************
** Form generated from reading UI file 'windoo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOO_H
#define UI_WINDOO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windoo
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *labelPic;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxChannelMixer;
    QPushButton *pushButtonChannelMixerReset;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QSlider *sliderChannelGreen;
    QLabel *label_5;
    QSlider *sliderChannelBlue;
    QSlider *sliderChannelRed;
    QPushButton *greyButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonBrowse;
    QPushButton *pushButtonSaveAs;

    void setupUi(QWidget *windoo)
    {
        if (windoo->objectName().isEmpty())
            windoo->setObjectName(QString::fromUtf8("windoo"));
        windoo->resize(847, 496);
        windoo->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 118, 123);\n"
"border-color: rgb(154, 153, 150);\n"
"color: rgb(246, 245, 244);\n"
""));
        scrollArea = new QScrollArea(windoo);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 30, 591, 401));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 589, 399));
        labelPic = new QLabel(scrollAreaWidgetContents);
        labelPic->setObjectName(QString::fromUtf8("labelPic"));
        labelPic->setGeometry(QRect(0, 0, 591, 401));
        scrollArea->setWidget(scrollAreaWidgetContents);
        groupBox = new QGroupBox(windoo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(620, 30, 181, 191));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(94, 92, 100);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 175, 108));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxChannelMixer = new QCheckBox(layoutWidget);
        checkBoxChannelMixer->setObjectName(QString::fromUtf8("checkBoxChannelMixer"));
        checkBoxChannelMixer->setAcceptDrops(false);
        checkBoxChannelMixer->setChecked(true);

        horizontalLayout_2->addWidget(checkBoxChannelMixer);

        pushButtonChannelMixerReset = new QPushButton(layoutWidget);
        pushButtonChannelMixerReset->setObjectName(QString::fromUtf8("pushButtonChannelMixerReset"));
        pushButtonChannelMixerReset->setMaximumSize(QSize(51, 16777215));
        pushButtonChannelMixerReset->setLayoutDirection(Qt::LeftToRight);
        pushButtonChannelMixerReset->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(pushButtonChannelMixerReset);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        sliderChannelGreen = new QSlider(layoutWidget);
        sliderChannelGreen->setObjectName(QString::fromUtf8("sliderChannelGreen"));
        sliderChannelGreen->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"   \n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        sliderChannelGreen->setMinimum(-255);
        sliderChannelGreen->setMaximum(255);
        sliderChannelGreen->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderChannelGreen, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        sliderChannelBlue = new QSlider(layoutWidget);
        sliderChannelBlue->setObjectName(QString::fromUtf8("sliderChannelBlue"));
        sliderChannelBlue->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"   \n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 blue);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        sliderChannelBlue->setMinimum(-255);
        sliderChannelBlue->setMaximum(255);
        sliderChannelBlue->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderChannelBlue, 2, 1, 1, 1);

        sliderChannelRed = new QSlider(layoutWidget);
        sliderChannelRed->setObjectName(QString::fromUtf8("sliderChannelRed"));
        sliderChannelRed->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"   \n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 red);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        sliderChannelRed->setMinimum(-255);
        sliderChannelRed->setMaximum(255);
        sliderChannelRed->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderChannelRed, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        greyButton = new QPushButton(groupBox);
        greyButton->setObjectName(QString::fromUtf8("greyButton"));
        greyButton->setGeometry(QRect(30, 150, 123, 27));
        greyButton->setStyleSheet(QString::fromUtf8(""));
        layoutWidget1 = new QWidget(windoo);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 450, 254, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonBrowse = new QPushButton(layoutWidget1);
        pushButtonBrowse->setObjectName(QString::fromUtf8("pushButtonBrowse"));
        pushButtonBrowse->setAutoDefault(false);

        horizontalLayout->addWidget(pushButtonBrowse);

        pushButtonSaveAs = new QPushButton(layoutWidget1);
        pushButtonSaveAs->setObjectName(QString::fromUtf8("pushButtonSaveAs"));
        pushButtonSaveAs->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButtonSaveAs);


        retranslateUi(windoo);

        QMetaObject::connectSlotsByName(windoo);
    } // setupUi

    void retranslateUi(QWidget *windoo)
    {
        windoo->setWindowTitle(QCoreApplication::translate("windoo", "photo editor Software", nullptr));
        labelPic->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("windoo", "Colors", nullptr));
        checkBoxChannelMixer->setText(QCoreApplication::translate("windoo", "ChannelMixer", nullptr));
        pushButtonChannelMixerReset->setText(QCoreApplication::translate("windoo", "reset", nullptr));
        label_6->setText(QCoreApplication::translate("windoo", "Green", nullptr));
        label_7->setText(QCoreApplication::translate("windoo", "Blue", nullptr));
        label_5->setText(QCoreApplication::translate("windoo", "Red", nullptr));
        greyButton->setText(QCoreApplication::translate("windoo", "Greyscale", nullptr));
        pushButtonBrowse->setText(QCoreApplication::translate("windoo", "Browse", nullptr));
        pushButtonSaveAs->setText(QCoreApplication::translate("windoo", "save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class windoo: public Ui_windoo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOO_H
