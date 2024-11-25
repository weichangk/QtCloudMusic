#include "inc/mainwindows.h"

MainWindows::MainWindows(QWidget *parent) :
    QWidget(parent) {
    createUI();
    connectSig();
}

void MainWindows::createUI() {
    setMinimumSize(1056, 752);
    setWindowFlags(Qt::FramelessWindowHint);
}

void MainWindows::connectSig() {
}