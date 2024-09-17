#ifndef INETWORKMANAGER_H
#define INETWORKMANAGER_H

#include <QString>
#include <QByteArray>

class INetworkManager {
public:
    virtual ~INetworkManager() = default;
    virtual void connectToServer(const QString &host, quint16 port) = 0;
    virtual void sendUserData(const QByteArray &data) = 0;
    virtual void sendFeedback(const QByteArray &data) = 0;
    virtual void receiveData() = 0;
};

#endif // INETWORKMANAGER_H
