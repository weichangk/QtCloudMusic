#include "widget/navbar.h"
#include "core/font.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QButtonGroup>
#include <QMap>

using ENavBtns = enum {
    NavBtnRecommend = 0,
    NavBtnFeatured,
    NavBtnPodcast,
    NavBtnRoaming,
    NavBtnNews,
    NavBtnLike,
    NavBtnRecently,
    NavBtnMypodcast,
    NavBtnCollect,
    NavBtnDownload,
    NavBtnLocalmusic,
    NavBtnNetworkdisk,
};

struct SNavIconName {
    QChar icon;
    QString name;
};

NavBar::NavBar(QWidget *parent) :
    QWidget(parent) {
    createUi();
    connectSig();
}

void NavBar::createUi() {
    setObjectName("NavBar");
    setAttribute(Qt::WA_StyledBackground);
    setFixedWidth(204);

    QFont iconFont = core::Font::getIconFont(":/font/iconfont.ttf");

    m_pProjectLogo = new widget::HorIconTextVectorButton(this);
    m_pProjectLogo->setObjectName("ProjectLogo");
    m_pProjectLogo->setFixedHeight(70);
    m_pProjectLogo->setIconTextSpacing(10);
    m_pProjectLogo->setIconSize(32);
    m_pProjectLogo->setIconFont(iconFont);
    m_pProjectLogo->setIcon(QChar(0xe601));
    m_pProjectLogo->setText("网易云音乐");

    auto navlayout = createNavBtns();

    auto layout = new QVBoxLayout(this);
    layout->setAlignment(Qt::AlignCenter);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    layout->addWidget(m_pProjectLogo, 0, Qt::AlignCenter);
    layout->addLayout(navlayout);
    layout->addStretch();
}

void NavBar::connectSig() {
}

QVBoxLayout *NavBar::createNavBtns() {
    auto navlayout = new QVBoxLayout();
    navlayout->setAlignment(Qt::AlignCenter);
    navlayout->setContentsMargins(23, 20, 23, 13);
    navlayout->setSpacing(0);
    QMap<int, SNavIconName> navMap;
    navMap[ENavBtns::NavBtnRecommend] = {QChar(0xe7dc), "推荐"}; 
    navMap[ENavBtns::NavBtnFeatured] = {QChar(0xe66b), "精选"};
    navMap[ENavBtns::NavBtnPodcast] = {QChar(0xe600), "播客"};
    navMap[ENavBtns::NavBtnRoaming] = {QChar(0xe789), "漫游"};
    navMap[ENavBtns::NavBtnNews] = {QChar(0xe6a7), "动态"};
    navMap[ENavBtns::NavBtnLike] = {QChar(0xe771), "我喜欢的音乐"};
    navMap[ENavBtns::NavBtnRecently] = {QChar(0xe677), "最近播放"};
    navMap[ENavBtns::NavBtnMypodcast] = {QChar(0xe608), "我的播客"};
    navMap[ENavBtns::NavBtnCollect] = {QChar(0xe630), "我的收藏"};
    navMap[ENavBtns::NavBtnDownload] = {QChar(0xe62c), "下载管理"};
    navMap[ENavBtns::NavBtnLocalmusic] = {QChar(0xe77a), "本地音乐"};
    navMap[ENavBtns::NavBtnNetworkdisk] = {QChar(0xe7a9), "我的音乐网盘"};
    QMap<int, SNavIconName>::Iterator iter;
    QFont iconFont = core::Font::getIconFont(":/font/iconfont.ttf");
    QButtonGroup *navBtnGroup = new QButtonGroup(this);
    navBtnGroup->setExclusive(true);
    for (iter = navMap.begin(); iter != navMap.end(); ++iter) {
        auto *btn = new widget::HorIconTextVectorButton(this);
        btn->setObjectName("HorIconTextVectorButton_H36_R8_I20_T14_Bg")
            ->setIconFont(iconFont)
            ->setIcon(iter.value().icon)
            ->setText(iter.value().name);
        btn->setFixedWidth(158);
        btn->setAdjustWidth(false);
        btn->setCheckable(true);
        navBtnGroup->addButton(btn, iter.key());
        navlayout->addWidget(btn);
        navlayout->addSpacing(4);
        if (iter.key() == ENavBtns::NavBtnNews || iter.key() == ENavBtns::NavBtnNetworkdisk) {
            navlayout->addSpacing(10);
            QWidget *dividingLine = new QWidget(this);
            dividingLine->setAttribute(Qt::WA_StyledBackground);
            dividingLine->setObjectName("NavBar_DividingLine");
            dividingLine->setFixedSize(158, 1);
            navlayout->addWidget(dividingLine);
            navlayout->addSpacing(14);
        }
    }
    connect(navBtnGroup, &QButtonGroup::idClicked, this, [this](int id) {
        emit sigNavBtnClicked(id);
    });
    return navlayout;
}