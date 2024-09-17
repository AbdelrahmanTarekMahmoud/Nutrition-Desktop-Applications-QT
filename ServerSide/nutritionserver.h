//we
#ifndef NUTRITIONSERVER_H
#define NUTRITIONSERVER_H

#include <QObject>
#include "inetworkmanager.h"
#include "foodcategories.h"
#include "dietplangenerator.h"
#include "userhandler.h"
#include "feedbackhandler.h"


class NutritionServer : public QObject {
    Q_OBJECT

public:

    NutritionServer(INetworkManager *networkManager, QObject *parent = nullptr);


    bool startServer();

signals:

    void userDataReceived(const QString &name, int age, const QString &gender, double height, double weight, const QString &bloodPressure, const QString &goal, int sleepHours);


    void feedbackReceived(int feedback);

    void resetFeedback();


private slots:

    void onMessageReceived(int clientId, const QByteArray &message);

private:
    INetworkManager *networkManager;
    FoodCategories foodCategories;
    DietPlanGenerator dietPlanGenerator;
    UserHandler userHandler;
    FeedbackHandler feedbackHandler;


    void sendDietPlan(int clientId);
};

#endif // NUTRITIONSERVER_H
