#include "Image.hpp"
#include <QPixmap>
#include <vector>



void Image::initImage(QImage img) {
    m_img = std::move(img);
    m_imgOriginal = m_img;
}

[[maybe_unused]] QImage Image::getImage() const {
    return m_img;
}

[[maybe_unused]] QImage Image::getImageOriginal() const {
    return m_imgOriginal;
}

void Image::runPixelpipeline() {

    m_img = m_imgOriginal;

    ///////////////////////////////
    //add all related modules here

    if (colorChannelMixerActive) {
        colorChannelMixer();
    }

    //////////////////////////////

}


int Image::colorBoundChecker(int sum) {
           if   (sum > 255) {   return 255;
    } else if   (sum <   0) {   return 0;
    } else {                    return sum;
    }
}

void Image::colorChannelMixer() {
    //std::cout<<m_img.height()<<'\t'<<m_img.width()<<'\n';
    for(int y = 0; y < m_img.height(); ++y) {
        for(int x = 0; x < m_img.width(); ++x) {
            QColor currentColor(m_img.pixel(x,y));

           // currentColor.setRgb(colorBoundChecker(currentColor.red()    + colorChannelSlider.red()),
           //                     colorBoundChecker(currentColor.green()  + colorChannelSlider.green()),
           //                     colorBoundChecker(currentColor.blue()   + colorChannelSlider.blue())   );

            currentColor.setRed(colorBoundChecker(currentColor.red()     + colorChannelSlider.Red));
            currentColor.setGreen(colorBoundChecker(currentColor.green() + colorChannelSlider.Green));
            currentColor.setBlue(colorBoundChecker(currentColor.blue()   + colorChannelSlider.Blue));

            m_img.setPixelColor(x,y,currentColor);
        }
    }
}



void Image::setGreyscale() {

    for(int y = 0; y < m_img.height(); ++y) {
        for(int x = 0; x < m_img.width(); ++x) {
            QColor currentColor(m_img.pixel(x,y));

            int average = (currentColor.red() + currentColor.green() + currentColor.blue() ) /3;

            currentColor.setRed(average);
            currentColor.setGreen(average);
            currentColor.setBlue(average);

            m_img.setPixelColor(x,y,currentColor);

        }
    }

}
