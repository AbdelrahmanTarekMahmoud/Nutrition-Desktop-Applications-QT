
#include "loadingscreen.h"
#include "mainwindow.h"
#include "appscreen.h"
#include "tcpnetworkmanager.h"
#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Instantiate and show the loading screen
    LoadingScreen loadingScreen;
    loadingScreen.show();

    // Connect to server
    TcpNetworkManager::getInstance().connectToServer("127.0.0.1", 12345);

    // Connect loadingFinished signal to show MainWindow
    QObject::connect(&loadingScreen, &LoadingScreen::loadingFinished, [&]() {
        MainWindow *mainWindow = new MainWindow(nullptr);
        mainWindow->show();

        // Connect loginSuccessful signal to show AppScreen
        QObject::connect(mainWindow, &MainWindow::loginSuccessful, [&]() {
            AppScreen *appScreen = new AppScreen(nullptr);
            appScreen->show();
        });
    });

    return a.exec();
}

