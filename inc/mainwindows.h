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

private:
    QWidget *m_pMenuWidget = nullptr;
    QWidget *m_pTitleBarWidget = nullptr;
    QWidget *m_pContentWidget = nullptr;
    QWidget *m_pPlayBarWidget = nullptr;
};