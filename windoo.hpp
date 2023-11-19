#ifndef PHOTOEDITS_WINDOO_HPP
#define PHOTOEDITS_WINDOO_HPP

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class windoo; }
QT_END_NAMESPACE

class windoo : public QWidget {
Q_OBJECT

public:
    explicit windoo(QWidget *parent = nullptr);
    void doEdits();


    ~windoo() override;
private slots:

    [[maybe_unused]] void on_pushButtonBrowse_clicked();

    [[maybe_unused]] void on_greyButton_clicked();

    [[maybe_unused]] void on_checkBoxChannelMixer_clicked();
    [[maybe_unused]] void on_pushButtonChannelMixerReset_clicked();

    [[maybe_unused]] void on_sliderChannelRed_valueChanged(int value);
    [[maybe_unused]] void on_sliderChannelGreen_valueChanged(int value);
    [[maybe_unused]] void on_sliderChannelBlue_valueChanged(int value);

    [[maybe_unused]] [[maybe_unused]] void on_pushButtonSaveAs_clicked();

private:
    Ui::windoo *ui;

};


#endif //PHOTOEDITS_WINDOO_HPP
