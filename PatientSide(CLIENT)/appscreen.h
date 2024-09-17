#ifndef APPSCREEN_H
#define APPSCREEN_H

#include <QMainWindow>
#include "user.h"
#include "inetworkmanager.h"
#include "uservalidator.h"
#include "tcpnetworkmanager.h"

namespace Ui {
class AppScreen;
}

class AppScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit AppScreen(QWidget *parent = nullptr);
    ~AppScreen();

private slots:
    void on_SumbitButton_clicked();
    void on_PopOutProfilePushButton_clicked();
    void on_PopOutDietPlanPushButton_clicked();
    void handleDietPlanReceived(const QByteArray &data);
    void on_FeedBackPushButton_clicked();

private:
    Ui::AppScreen *ui;
    User user;
    UserValidator userValidator;
    INetworkManager *networkManager = &TcpNetworkManager::getInstance();
    void displayUserDetails();
    void displayErrorMessage(const QString &message);
};

#endif // APPSCREEN_H
