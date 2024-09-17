#ifndef TCPNETWORKMANAGER_H
#define TCPNETWORKMANAGER_H

#include <QObject>
#include <QTcpSocket>
#include "inetworkmanager.h"

class TcpNetworkManager : public QObject, public INetworkManager {
    Q_OBJECT

public:
    static TcpNetworkManager& getInstance() {
        static TcpNetworkManager instance;
        return instance;
    }

    void connectToServer(const QString &host, quint16 port) override;
    void sendUserData(const QByteArray &data) override;
    void sendFeedback(const QByteArray &data) override;
    void receiveData() override;

signals:
    void dietPlanReceived(const QByteArray &data);

private slots:
    void onConnected();
    void onReadyRead();

private:
    TcpNetworkManager();
    QTcpSocket tcpSocket;

    // Prevent copying and assignment
    TcpNetworkManager(const TcpNetworkManager&) = delete;
    TcpNetworkManager& operator=(const TcpNetworkManager&) = delete;
};

#endif // TCPNETWORKMANAGER_H
