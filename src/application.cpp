#include "inc/application.h"

Application::Application(int argc, char *argv[]) :
    QApplication(argc, argv) {
    initUi();
}

void Application::initUi() {
#if QT_VERSION < 0x060000
    setAttribute(Qt::AA_UseHighDpiPixmaps, true);
#endif

    m_pMainWindows = new MainWindows();
    m_pMainWindows->show();
}

int main(int argc, char *argv[]) {
    Application app(argc, argv);
    return app.exec();
}
