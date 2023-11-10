//
// Created by archi on 10.11.23.
//

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

    ~windoo() override;

private:
    Ui::windoo *ui;
};


#endif //PHOTOEDITS_WINDOO_HPP
