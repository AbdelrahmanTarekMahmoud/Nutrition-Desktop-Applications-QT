#ifndef USERSERVICE_H
#define USERSERVICE_H

#include "user.h"
#include "networkmanager.h"
#include <QJsonDocument>
#include <QJsonObject>

class UserService {
public:
    static void sendUserData(const User &user) {
        // Serialize user data to JSON
        QJsonObject json;
        json["name"] = user.getName();
        json["age"] = user.getAge();
        json["gender"] = user.getGender();
        json["height"] = user.getHeight();
        json["weight"] = user.getWeight();
        json["bloodPressure"] = user.getBloodPressure();
        json["goal"] = user.getGoal();  // Include goal in JSON
        json["sleepHours"] = user.getSleepHours();

        QByteArray data = QJsonDocument(json).toJson();

        // Send user data to the server
        NetworkManager::getInstance().sendUserData(data);
    }
};

#endif // USERSERVICE_H
