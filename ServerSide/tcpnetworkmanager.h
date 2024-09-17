#ifndef TCPNETWORKMANAGER_H
#define TCPNETWORKMANAGER_H

#include "inetworkmanager.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QHash>

class TcpNetworkManager : public INetworkManager {
    Q_OBJECT

public:
    static TcpNetworkManager& getInstance() {
        static TcpNetworkManager instance;
        return instance;
    }

    bool startServer() override;
    void sendMessageToClient(int clientId, const QByteArray &message) override;

private slots:
    void onNewConnection();
    void onReadyRead();
    void onClientDisconnected();

private:
    TcpNetworkManager();
    QTcpServer server;
    QHash<int, QTcpSocket*> clients;

    int getNextClientId();

    // Prevent copying and assignment
    TcpNetworkManager(const TcpNetworkManager&) = delete;
    TcpNetworkManager& operator=(const TcpNetworkManager&) = delete;

    int nextClientId;
};

#endif // TCPNETWORKMANAGER_H
