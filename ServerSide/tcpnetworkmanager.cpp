#include "tcpnetworkmanager.h"


TcpNetworkManager::TcpNetworkManager() : nextClientId(1) {
    connect(&server, &QTcpServer::newConnection, this, &TcpNetworkManager::onNewConnection);
}


bool TcpNetworkManager::startServer() {
    if (!server.listen(QHostAddress::Any, 12345)) {
        qCritical() << "Server could not start!";
        return false;
    } else {
        return true;
    }
}


void TcpNetworkManager::sendMessageToClient(int clientId, const QByteArray &message) {
    if (clients.contains(clientId)) {
        clients[clientId]->write(message);
    } else {
        qWarning() << "Client with ID" << clientId << "not found!";
    }
}


void TcpNetworkManager::onNewConnection() {
    QTcpSocket *clientSocket = server.nextPendingConnection();
    int clientId = getNextClientId();
    clients[clientId] = clientSocket;

    connect(clientSocket, &QTcpSocket::readyRead, this, &TcpNetworkManager::onReadyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &TcpNetworkManager::onClientDisconnected);
        qDebug() << "New client connected with ID:" << clientId;
    emit clientConnected(clientId);
}


void TcpNetworkManager::onReadyRead() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    int clientId = clients.key(clientSocket, -1);

    if (clientId != -1) {
        QByteArray message = clientSocket->readAll();
        emit messageReceived(clientId, message);
    }
}


void TcpNetworkManager::onClientDisconnected() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    int clientId = clients.key(clientSocket, -1);

    if (clientId != -1) {
        clients.remove(clientId);
        emit clientDisconnected(clientId);

    }
}


int TcpNetworkManager::getNextClientId() {
    return nextClientId++;
}
