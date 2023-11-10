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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windoo
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;

    void setupUi(QWidget *windoo)
    {
        if (windoo->objectName().isEmpty())
            windoo->setObjectName(QString::fromUtf8("windoo"));
        windoo->resize(869, 633);
        pushButton = new QPushButton(windoo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 560, 87, 27));
        pushButton_2 = new QPushButton(windoo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 560, 87, 27));
        pushButton_3 = new QPushButton(windoo);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 560, 87, 27));
        scrollArea = new QScrollArea(windoo);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(70, 90, 591, 401));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 589, 399));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 591, 401));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(windoo);

        QMetaObject::connectSlotsByName(windoo);
    } // setupUi

    void retranslateUi(QWidget *windoo)
    {
        windoo->setWindowTitle(QCoreApplication::translate("windoo", "windoo", nullptr));
        pushButton->setText(QCoreApplication::translate("windoo", "load", nullptr));
        pushButton_2->setText(QCoreApplication::translate("windoo", "safe", nullptr));
        pushButton_3->setText(QCoreApplication::translate("windoo", "color", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class windoo: public Ui_windoo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOO_H
