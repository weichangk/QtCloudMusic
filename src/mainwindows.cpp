#include "inc/mainwindows.h"
#include "helloworld.h"
#include "core/font.h"

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
    setWindowFlags(Qt::FramelessWindowHint);

    m_pPlayBarWidget = new QWidget(this);
    m_pPlayBarWidget->setFixedHeight(80);
    m_pPlayBarWidget->setStyleSheet("background-color:red");

    m_pMenuWidget = new QWidget(this);
    m_pMenuWidget->setFixedWidth(204);
    m_pMenuWidget->setStyleSheet("background-color:blue");

    m_pTitleBarWidget = new QWidget(this);
    m_pTitleBarWidget->setFixedHeight(72);
    m_pTitleBarWidget->setStyleSheet("background-color:green");

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

    layout2->addWidget(m_pMenuWidget);
    layout2->addLayout(layout3, 1);

    layout1->addLayout(layout2, 1);
    layout1->addWidget(m_pPlayBarWidget);

    setLayout(layout1);

    //测试最大化还原布局
    auto maxminBtn = new QPushButton(m_pTitleBarWidget);
    maxminBtn->setObjectName("TitleBar_MaxminBtn");
    maxminBtn->setFixedSize(24, 24);

    //使用矢量图标
    QFont iconFont = core::Font::getIconFont(core::Font::IconFontEnum::IconFont);
    maxminBtn->setFont(iconFont);
    maxminBtn->setText(QChar(0xe616));

    auto titleBarLayout = new QHBoxLayout(m_pTitleBarWidget);
    titleBarLayout->addStretch();
    titleBarLayout->addWidget(maxminBtn);
    connect(maxminBtn, &QPushButton::clicked, [&] {
        if (isMaximized()) {
            showNormal();
        } else {
            showMaximized();
        }
    });

}

void MainWindows::connectSig() {
}