#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "appscreen.h"
#include "user.h"
#include "uservalidator.h"
#include "inetworkmanager.h"
#include "tcpnetworkmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void loginSuccessful();

private slots:
    void on_SignIn_PushButton_clicked();

private:
    Ui::MainWindow *ui;
    //User user;
    //UserValidator userValidator;
    //INetworkManager *networkManager = &TcpNetworkManager::getInstance();

    void ApplyExternalFontsFromResources();
    QString readFileContent(const QString &filePath);
    bool validateCredentials(const QString &username, const QString &password);
};

#endif // MAINWINDOW_H
