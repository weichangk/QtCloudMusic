#pragma once
#include <QWidget>
#include<QVBoxLayout>
#include<QHBoxLayout>

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
    QVBoxLayout *m_pMainLayout = nullptr;
    QHBoxLayout *m_pPlayBarOutsideLayout = nullptr;
    QVBoxLayout *m_pMenuOutsideLayout = nullptr;
    QWidget *m_pMenuWidget = nullptr;
    QWidget *m_pTitleBarWidget = nullptr;
    QWidget *m_pContentWidget = nullptr;
    QWidget *m_pPlayBarWidget = nullptr;
};