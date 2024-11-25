#pragma once
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
};