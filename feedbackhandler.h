#ifndef FEEDBACKHANDLER_H
#define FEEDBACKHANDLER_H

#include <QObject>
#include <QString>


class FeedbackHandler : public QObject {
    Q_OBJECT

public:

    void handleFeedbackData(const QByteArray &data);

signals:

    void feedbackReceived(int feedback);
};

#endif // FEEDBACKHANDLER_H
