//we
#include "nutritionserver.h"
#include <QJsonDocument>
#include <QJsonObject>


NutritionServer::NutritionServer(INetworkManager *networkManager, QObject *parent)
    : QObject(parent), networkManager(networkManager), dietPlanGenerator(foodCategories) {
   // connect(networkManager, &INetworkManager::clientConnected, this, &NutritionServer::onClientConnected);
   // connect(networkManager, &INetworkManager::clientDisconnected, this, &NutritionServer::onClientDisconnected);
    connect(networkManager, &INetworkManager::messageReceived, this, &NutritionServer::onMessageReceived);

    connect(&userHandler, &UserHandler::userDataReceived, this, &NutritionServer::userDataReceived);
    connect(&feedbackHandler, &FeedbackHandler::feedbackReceived, this, &NutritionServer::feedbackReceived);
}


bool NutritionServer::startServer() {
    return networkManager->startServer();
}








void NutritionServer::onMessageReceived(int clientId, const QByteArray &message) {
    QJsonDocument doc = QJsonDocument::fromJson(message);
    QJsonObject obj = doc.object();

    if (obj.contains("feedback")) {
        feedbackHandler.handleFeedbackData(message);
    } else {
        userHandler.handleUserData(message);
        sendDietPlan(clientId);
        emit resetFeedback();
    }
}


void NutritionServer::sendDietPlan(int clientId) {
    QJsonArray dietPlan = dietPlanGenerator.generateDietPlan();

    QJsonObject response;
    response["dietPlan"] = dietPlan;

    QByteArray responseData = QJsonDocument(response).toJson();
    networkManager->sendMessageToClient(clientId, responseData);
}
