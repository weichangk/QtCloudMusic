#include "widget/titlebar.h"
#include "core/font.h"

#include <QHBoxLayout>

TitleBar::TitleBar(QWidget *parent) :
    QWidget(parent) {
    createUi();
    connectSig();
}

void TitleBar::createUi() {
    setObjectName("TitleBar");
    setAttribute(Qt::WA_StyledBackground);
    setFixedHeight(72);
    
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->setContentsMargins(36, 0, 36, 0);
    layout->setSpacing(0);

    QFont iconFont = core::Font::getIconFont(core::Font::IconFontEnum::IconFont);

    m_pCloseBtn = new widget::VectorButton(this);
    m_pCloseBtn->setObjectName("VectorButton_HW28_I20");
    m_pCloseBtn->setFont(iconFont);
    m_pCloseBtn->setText(QChar(0xe634));

    m_pMaximizeBtn = new widget::VectorButton(this);
    m_pMaximizeBtn->setObjectName("VectorButton_HW28_I20");
    m_pMaximizeBtn->setFont(iconFont);
    m_pMaximizeBtn->setText(QChar(0xe616));

    m_pMinimizeBtn = new widget::VectorButton(this);
    m_pMinimizeBtn->setObjectName("VectorButton_HW28_I20");
    m_pMinimizeBtn->setFont(iconFont);
    m_pMinimizeBtn->setText(QChar(0xe604));

    m_pShowPlayBarBtn = new widget::VectorButton(this);
    m_pShowPlayBarBtn->setObjectName("VectorButton_HW28_I20");
    m_pShowPlayBarBtn->setFont(iconFont);
    m_pShowPlayBarBtn->setText(QChar(0xe6e3));

    m_pThemeBtn = new widget::VectorButton(this);
    m_pThemeBtn->setObjectName("VectorButton_HW28_I20");
    m_pThemeBtn->setFont(iconFont);
    m_pThemeBtn->setText(QChar(0xe66e));

    m_pSettingBtn = new widget::VectorButton(this);
    m_pSettingBtn->setObjectName("VectorButton_HW28_I20");
    m_pSettingBtn->setFont(iconFont);
    m_pSettingBtn->setText(QChar(0xe632));

    m_pMessageBtn = new widget::VectorButton(this);
    m_pMessageBtn->setObjectName("VectorButton_HW28_I20");
    m_pMessageBtn->setFont(iconFont);
    m_pMessageBtn->setText(QChar(0xe668));

    m_pUserInfoBtn = new widget::VectorButton(this);
    m_pUserInfoBtn->setObjectName("VectorButton_HW28_I20");
    m_pUserInfoBtn->setFont(iconFont);
    m_pUserInfoBtn->setText(QChar(0xe631));

    layout->addStretch();
    layout->addWidget(m_pUserInfoBtn, 0, Qt::AlignVCenter);
    layout->addSpacing(2);
    layout->addWidget(m_pMessageBtn, 0, Qt::AlignVCenter);
    layout->addSpacing(2);
    layout->addWidget(m_pSettingBtn, 0, Qt::AlignVCenter);
    layout->addSpacing(2);
    layout->addWidget(m_pThemeBtn, 0, Qt::AlignVCenter);
    layout->addSpacing(2);
    layout->addWidget(m_pShowPlayBarBtn, 0, Qt::AlignVCenter);
    layout->addSpacing(2);
    layout->addWidget(m_pMinimizeBtn, 0, Qt::AlignVCenter);
    layout->addSpacing(2);
    layout->addWidget(m_pMaximizeBtn, 0, Qt::AlignVCenter);
    layout->addSpacing(2);
    layout->addWidget(m_pCloseBtn, 0, Qt::AlignVCenter);
}

void TitleBar::connectSig() {
    connect(m_pCloseBtn, &widget::VectorButton::clicked, this, &TitleBar::slotCloseBtnClicked);
    connect(m_pMaximizeBtn, &widget::VectorButton::clicked, this, &TitleBar::slotMaximizeBtnClicked);
    connect(m_pMinimizeBtn, &widget::VectorButton::clicked, this, &TitleBar::slotMinimizeBtnClicked);
    connect(m_pShowPlayBarBtn, &widget::VectorButton::clicked, this, &TitleBar::slotShowPlayBarBtnClicked);
    connect(m_pThemeBtn, &widget::VectorButton::clicked, this, &TitleBar::slotThemeBtnClicked);
    connect(m_pSettingBtn, &widget::VectorButton::clicked, this, &TitleBar::slotSettingBtnClicked);
    connect(m_pMessageBtn, &widget::VectorButton::clicked, this, &TitleBar::slotMessageBtnClicked);
    connect(m_pUserInfoBtn, &widget::VectorButton::clicked, this, &TitleBar::slotUserInfoBtnClicked);
}

void TitleBar::slotCloseBtnClicked() {
}

void TitleBar::slotMaximizeBtnClicked() {
}

void TitleBar::slotMinimizeBtnClicked() {
}

void TitleBar::slotShowPlayBarBtnClicked() {
}

void TitleBar::slotThemeBtnClicked() {
}

void TitleBar::slotSettingBtnClicked() {
}

void TitleBar::slotMessageBtnClicked() {
}

void TitleBar::slotUserInfoBtnClicked() {
}