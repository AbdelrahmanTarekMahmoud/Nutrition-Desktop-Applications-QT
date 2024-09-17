#ifndef INETWORKMANAGER_H
#define INETWORKMANAGER_H

#include <QObject>


class INetworkManager : public QObject {
    Q_OBJECT

public:

    virtual bool startServer() = 0;


    virtual void sendMessageToClient(int clientId, const QByteArray &message) = 0;

signals:

    void clientConnected(int clientId);


    void clientDisconnected(int clientId);


    void messageReceived(int clientId, const QByteArray &message);
};

#endif // INETWORKMANAGER_H
