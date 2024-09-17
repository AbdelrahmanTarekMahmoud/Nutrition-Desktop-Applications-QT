#include "feedbackhandler.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QTextStream>
#include <QDateTime>


void FeedbackHandler::handleFeedbackData(const QByteArray &data) {
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject obj = doc.object();

    // Extract feedback value
    int feedback = obj["feedback"].toInt();

    // Log feedback to a file
    QFile feedbackFile("feedback.log");
    if (feedbackFile.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&feedbackFile);
        out << QDateTime::currentDateTime().toString() << ": " << feedback << "\n";
        feedbackFile.close();
    }

    // Emit the signal with feedback data
    emit feedbackReceived(feedback);
}
