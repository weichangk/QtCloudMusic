#pragma once
#include "mainwindows.h"

#include <QApplication>

class StartupController;
class Application : public QApplication {
    Q_OBJECT

public:
    Application(int argc, char *argv[]);

private:
    void initUi();

private:
    MainWindows *m_pMainWindows = nullptr;
};