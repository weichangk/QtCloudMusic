#pragma once
#include "widget/button.h"

#include <QWidget>

class NavBar : public QWidget {
    Q_OBJECT

public:
    NavBar(QWidget *parent = nullptr);
    ~NavBar() override {
    }

private:
    void createUi();
    void connectSig();

private:
    widget::HorIconTextVectorButton *m_pProjectLogo = nullptr;
};