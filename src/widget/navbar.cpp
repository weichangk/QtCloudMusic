#include "widget/navbar.h"
#include "core/font.h"

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

    QFont iconFont = core::Font::getIconFont(core::Font::IconFontEnum::IconFont);

    auto layout = new QVBoxLayout(this);
    layout->setAlignment(Qt::AlignCenter);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    m_pProjectLogo = new widget::HorIconTextVectorButton(this);
    m_pProjectLogo->setObjectName("ProjectLogo");
    m_pProjectLogo->setFixedHeight(72);
    m_pProjectLogo->setIconTextSpacing(12);
    m_pProjectLogo->setIconSize(32);
    m_pProjectLogo->setIconFont(iconFont);
    m_pProjectLogo->setIcon(QChar(0xe601));
    m_pProjectLogo->setText("网易云音乐");
    layout->addWidget(m_pProjectLogo, 0, Qt::AlignHCenter);

    layout->addStretch();
}

void NavBar::connectSig() {
}