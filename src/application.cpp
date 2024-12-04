#include "inc/application.h"
#include "core/theme.h"
#include "core/font.h"

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
    core::Theme::setStyleToApp(":/qss");
    core::Font::setFont(core::Font::ROBOTO_REGULAR);
    core::Font::setIconFont(core::Font::IconFont);
    return app.exec();
}
