#include "userhandler.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QTextStream>
#include <QDateTime>


void UserHandler::handleUserData(const QByteArray &data) {
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject obj = doc.object();

    QString name = obj["name"].toString();
    int age = obj["age"].toInt();
    QString gender = obj["gender"].toString();
    double weight = obj["weight"].toDouble();
    double height = obj["height"].toDouble();
    QString bloodPressure = obj["bloodPressure"].toString();
    QString goal = obj["goal"].toString();
    int sleepHours = obj["sleepHours"].toInt();

    // Log received info
    QFile logFile("received_info.log");
    if (logFile.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&logFile);
        out << QDateTime::currentDateTime().toString() << ": " << name << ", " << age << ", " << gender << ", " << weight << ", " << height << ", " << bloodPressure << ", " << goal << ", " << sleepHours << "\n";
        logFile.close();
    }

    // Emit the signal with user data
    emit userDataReceived(name, age, gender, height, weight, bloodPressure, goal, sleepHours);
}
