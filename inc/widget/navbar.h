#pragma once
#include "widget/button.h"

#include <QWidget>
#include <QVBoxLayout>

class NavBar : public QWidget {
    Q_OBJECT

public:
    NavBar(QWidget *parent = nullptr);
    ~NavBar() override {
    }

Q_SIGNALS:
    void sigNavBtnClicked(int);
    
private:
    void createUi();
    void connectSig();
    QVBoxLayout *createNavBtns();

private:
    widget::HorIconTextVectorButton *m_pProjectLogo = nullptr;
};