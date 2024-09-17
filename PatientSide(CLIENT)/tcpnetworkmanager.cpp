#include "tcpnetworkmanager.h"
#include <QHostAddress>
#include <QJsonDocument>
#include <QJsonObject>
/*
cotr : built in "connected"  emitted when a connection to the server is successfully established.
and "readyread" there is data available to read from the socket.
*/
TcpNetworkManager::TcpNetworkManager() {
    connect(&tcpSocket, &QTcpSocket::connected, this, &TcpNetworkManager::onConnected);
    connect(&tcpSocket, &QTcpSocket::readyRead, this, &TcpNetworkManager::onReadyRead);
}

/*
host address and port.
made only if the socket is not already connected.
*/
void TcpNetworkManager::connectToServer(const QString &host, quint16 port) {
    if (tcpSocket.state() == QAbstractSocket::UnconnectedState) {
        tcpSocket.connectToHost(host, port);
    }
}
/*

*/
void TcpNetworkManager::sendUserData(const QByteArray &data) {
    if (tcpSocket.state() == QAbstractSocket::ConnectedState) {
        tcpSocket.write(data);
    } else {
        qWarning() << "Not connected to server.";
    }
}

void TcpNetworkManager::sendFeedback(const QByteArray &data) {
    if (tcpSocket.state() == QAbstractSocket::ConnectedState) {
        tcpSocket.write(data);
    } else {
        qWarning() << "Not connected to server.";
    }
}


void TcpNetworkManager::receiveData() {
    if (tcpSocket.bytesAvailable() > 0) {
        QByteArray data = tcpSocket.readAll();
        emit dietPlanReceived(data);
    }
}

void TcpNetworkManager::onConnected() {
    qDebug() << "Connected to server.";
}

void TcpNetworkManager::onReadyRead() {
    receiveData();
}

