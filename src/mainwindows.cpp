#include "inc/mainwindows.h"
#include "helloworld.h"

MainWindows::MainWindows(QWidget *parent) :
    QWidget(parent) {
    createUI();
    connectSig();
}

void MainWindows::createUI() {
    setMinimumSize(1056, 752);
    setWindowFlags(Qt::FramelessWindowHint);

    musicmaterial::HelloWorld hello;
}

void MainWindows::connectSig() {
}