#include "inc/mainwindows.h"
#include "helloworld.h"

#include<QVBoxLayout>
#include<QHBoxLayout>

MainWindows::MainWindows(QWidget *parent) :
    QWidget(parent) {
    createUI();
    connectSig();
}

void MainWindows::createUI() {
    setMinimumSize(1056, 752);
    setWindowFlags(Qt::FramelessWindowHint);

    m_pMainLayout = new QVBoxLayout();
    m_pMainLayout->setContentsMargins(0, 0, 0, 0);
    m_pMainLayout->setSpacing(0);

    m_pPlayBarOutsideLayout = new QHBoxLayout();
    m_pPlayBarOutsideLayout->setContentsMargins(0, 0, 0, 0);
    m_pPlayBarOutsideLayout->setSpacing(0);

    m_pMenuOutsideLayout = new QVBoxLayout();
    m_pMenuOutsideLayout->setContentsMargins(0, 0, 0, 0);
    m_pMenuOutsideLayout->setSpacing(0);

    m_pPlayBarWidget = new QWidget(this);
    m_pPlayBarWidget->setFixedHeight(80);
    m_pPlayBarWidget->setStyleSheet("background-color:red");

    m_pMenuWidget = new QWidget(this);
    m_pMenuWidget->setFixedWidth(204);
    m_pMenuWidget->setStyleSheet("background-color:blue");

    // auto playBarOutsideLayout = new QHBoxLayout(this);
    // playBarOutsideLayout->setContentsMargins(0, 0, 0, 0);
    // playBarOutsideLayout->setSpacing(0);

    // playBarOutsideLayout->addWidget(m_pMenuWidget);

    // m_pTitleBarWidget = new QWidget(this);
    // m_pTitleBarWidget->setFixedHeight(72);
    // m_pTitleBarWidget->setStyleSheet("background-color:green");

    // auto menuBarOutsideLayout = new QVBoxLayout(this);
    // menuBarOutsideLayout->setContentsMargins(0, 0, 0, 0);
    // menuBarOutsideLayout->setSpacing(0);

    // menuBarOutsideLayout->addWidget(m_pTitleBarWidget);
    // menuBarOutsideLayout->addStretch();

    // playBarOutsideLayout->addLayout(menuBarOutsideLayout, 1);


    m_pPlayBarOutsideLayout->addWidget(m_pMenuWidget);
    m_pPlayBarOutsideLayout->addLayout(m_pMenuOutsideLayout, 1);
    
    m_pMainLayout->addLayout(m_pPlayBarOutsideLayout, 1);
    m_pMainLayout->addWidget(m_pPlayBarWidget);

    setLayout(m_pMainLayout);
}

void MainWindows::connectSig() {
}