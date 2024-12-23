#include "inc/mainwindows.h"
#include "helloworld.h"
#include "core/font.h"
#include "widget/button.h"

#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QPushButton>

MainWindows::MainWindows(QWidget *parent) :
    QWidget(parent) {
    createUI();
    connectSig();
}

void MainWindows::createUI() {
    setMinimumSize(1056, 752);
    setFixedSize(1056, 752);
    setWindowFlags(Qt::FramelessWindowHint);

    m_pPlayBarWidget = new QWidget(this);
    m_pPlayBarWidget->setFixedHeight(80);
    m_pPlayBarWidget->setStyleSheet("background-color:red");

    m_pNavBarWidget = new NavBar(this);

    m_pTitleBarWidget = new TitleBar(this);

    m_pContentWidget = new QWidget(this);
    m_pContentWidget->setStyleSheet("background-color:yellow");

    auto layout1 = new QVBoxLayout();
    layout1->setContentsMargins(0, 0, 0, 0);
    layout1->setSpacing(0);

    auto layout2 = new QHBoxLayout();
    layout2->setContentsMargins(0, 0, 0, 0);
    layout2->setSpacing(0);

    auto layout3 = new QVBoxLayout();
    layout3->setContentsMargins(0, 0, 0, 0);
    layout3->setSpacing(0);

    layout3->addWidget(m_pTitleBarWidget);
    layout3->addWidget(m_pContentWidget, 1);

    layout2->addWidget(m_pNavBarWidget);
    layout2->addLayout(layout3, 1);

    layout1->addLayout(layout2, 1);
    layout1->addWidget(m_pPlayBarWidget);

    setLayout(layout1);
}

void MainWindows::connectSig() {
}