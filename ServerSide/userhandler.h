#ifndef USERHANDLER_H
#define USERHANDLER_H

#include <QObject>
#include <QString>


class UserHandler : public QObject {
    Q_OBJECT

public:

    void handleUserData(const QByteArray &data);

signals:

    void userDataReceived(const QString &name, int age, const QString &gender, double height, double weight, const QString &bloodPressure, const QString &goal, int sleepHours);
};

#endif // USERHANDLER_H
