//
// Created by archi on 10.11.23.
//

// You may need to build the project (run Qt uic code generator) to get "ui_windoo.h" resolved

#include "windoo.hpp"
#include "ui_windoo.h"


windoo::windoo(QWidget *parent) :
        QWidget(parent), ui(new Ui::windoo) {
    ui->setupUi(this);
}

windoo::~windoo() {
    delete ui;
}
