#ifndef PHOTOEDITS_IMAGE_HPP
#define PHOTOEDITS_IMAGE_HPP
#include <QImage>
#include <utility>
#include <QCheckBox>


class Image {

public:
    struct {
        int Red{};
        int Green{};
        int Blue{};
    }colorChannelSlider;

    QImage m_img{};
    QImage m_imgOriginal{};

    bool colorChannelMixerActive {true};
    bool isLoaded {false};

    void setGreyscale();

    void initImage(QImage);

    [[maybe_unused]] [[nodiscard]] QImage getImage() const;

    [[maybe_unused]] [[nodiscard]] QImage getImageOriginal() const;

     static int colorBoundChecker(int);

    ////////////////////////////////////
    //functions to run in pixelpipeline:
    void colorChannelMixer();

    ////////////////////////////////////
    void runPixelpipeline();



};


#endif //PHOTOEDITS_IMAGE_HPP
