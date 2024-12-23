#include "widget/navbar.h"

#include <QVBoxLayout>

NavBar::NavBar(QWidget *parent) :
    QWidget(parent) {
    createUi();
    connectSig();
}

void NavBar::createUi() {
    setObjectName("NavBar");
    setAttribute(Qt::WA_StyledBackground);
    setFixedWidth(204);
}

void NavBar::connectSig() {
}