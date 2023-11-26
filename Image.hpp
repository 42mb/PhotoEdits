#ifndef PHOTOEDITS_IMAGE_HPP
#define PHOTOEDITS_IMAGE_HPP
#include <QImage>
#include <utility>
#include <QCheckBox>
#include "windoo.hpp"


class Image {

private:
    struct {
        int Red{};
        int Green{};
        int Blue{};
    }colorChannelSlider;


    QImage m_img{};
    QImage m_imgOriginal{};

    bool colorChannelMixerActive {true};
    bool loadComplete{false};

    friend windoo;

public:
  Image()= default;
  Image(const Image&) = delete;                     //copy constructor
  Image(Image &&) = delete;                         //move constructor
  Image& operator=(const Image&) = delete;          //copy assignment
  Image& operator=(const Image&&) = delete;         //move assigment
  ~Image()= default;

    [[nodiscard]] bool isLoaded() const {
        return loadComplete;
    }
    void setAsLoaded() {
        loadComplete = true;
    }
    void checkBoxColorChannelMixer(bool checkBox) {
        colorChannelMixerActive = checkBox;
    }
   void editColorChannelSliderRed(int redValue) {
        colorChannelSlider.Red = redValue;
    }
   void editColorChannelSliderGreen(int greenValue) {
        colorChannelSlider.Green= greenValue;
    }
   void editColorChannelSliderBlue(int blueValue) {
        colorChannelSlider.Blue= blueValue;
    }
   void setGreyscale();

   void initImage(QImage);

   static int colorBoundChecker(int);

  ////////////////////////////////////
  //functions to run in pixelpipeline:
   void colorChannelMixer();

  //END functions to run in pixelpipeline
  ////////////////////////////////////
   void runPixelpipeline();

};


#endif //PHOTOEDITS_IMAGE_HPP
