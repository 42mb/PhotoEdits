#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "windoo.hpp"

int initWindow(int argc, char *argv[]) {
    QApplication a(argc, argv);
    windoo window;
    window.show();
    return QApplication::exec();
}

int main(int argc, char *argv[]) {
   initWindow(argc, argv);
   std::cout<<"we done";
}
