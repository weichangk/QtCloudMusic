#pragma once

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
};