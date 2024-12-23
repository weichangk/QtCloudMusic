#pragma once
#include "widget/titlebar.h"
#include "widget/navbar.h"

#include <QWidget>

class MainWindows : public QWidget {
    Q_OBJECT
public:
    explicit MainWindows(QWidget *parent = nullptr);
    ~MainWindows() override {
    };

private:
    void createUI();
    void connectSig();

private:
    TitleBar *m_pTitleBarWidget = nullptr;
    NavBar *m_pNavBarWidget = nullptr;
    QWidget *m_pContentWidget = nullptr;
    QWidget *m_pPlayBarWidget = nullptr;
};