#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tcpnetworkmanager.h"
#include "agechartwindow.h"
#include "genderchartwindow.h"
#include "logfileparser.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
    ageChartWindow(new AgeChartWindow(this)),
    genderChartWindow(new GenderChartWindow(this)),
    logFileParser(new LogFileParser()) {
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0);
    server = new NutritionServer(&TcpNetworkManager::getInstance(), this);

    // Connect signals from the server to the slots in MainWindow
    connect(server, &NutritionServer::userDataReceived, this, [=](const QString &name, int age, const QString &gender, double height, double weight, const QString &bloodPressure, const QString &goal, int sleepHours) {
        setAgeLabel(age);
        setGenderLabel(gender);
        setHeight(height);
        setWeight(weight);
        setBloodPressure(bloodPressure);
        setNutritionGoals(goal);
        setSleepHours(sleepHours);
        setNameLabel(name);
        resetFeedback();
    });

    connect(server, &NutritionServer::feedbackReceived, this, &MainWindow::setFeedBackLabel);

    server->startServer();

    // Setting up layouts for chartWidget and chartWidget2
    QVBoxLayout *layout = new QVBoxLayout(ui->chartWidget);
    layout->addWidget(ageChartWindow);

    QVBoxLayout *layout2 = new QVBoxLayout(ui->chartWidget2);
    layout2->addWidget(genderChartWindow);
}

void MainWindow::resetFeedback() {
    ui->FeedBackLabel->setText("");
}


MainWindow::~MainWindow() {
    delete ui;
    delete server;
    delete ageChartWindow;
    delete genderChartWindow;
    delete logFileParser;
}

void MainWindow::setNameLabel(const QString &name) {
    ui->NameLabel->setText(name);
}

void MainWindow::setAgeLabel(int age) {
    ui->AgeLabel->setText(QString::number(age));
}

void MainWindow::setGenderLabel(const QString &gender) {
    ui->GenderLabel->setText(gender);
}

void MainWindow::setHeight(double height) {
    ui->HeightLabel->setText(QString::number(height));
}

void MainWindow::setWeight(double weight) {
    ui->WeightLabel->setText(QString::number(weight));
}

void MainWindow::setNutritionGoals(const QString &goal) {
    ui->GoalsLabel->setText(goal);
}

void MainWindow::setSleepHours(int sleepHours) {
    ui->SleepHourLabel->setText(QString::number(sleepHours));
}

void MainWindow::setBloodPressure(const QString &bloodPressure) {
    ui->BloodPressureLabel->setText(bloodPressure);
}

void MainWindow::setFeedBackLabel(int feedback) {
    ui->FeedBackLabel->setText(QString::number(feedback));
}

void MainWindow::on_GenerateChartButton_clicked() {
    logFileParser->parse("received_info.log");

    QVector<int> ageData = logFileParser->getAgeData();
    int maleCount = logFileParser->getMaleCount();
    int femaleCount = logFileParser->getFemaleCount();

    ageChartWindow->setData(ageData);
    ageChartWindow->createChart();

    genderChartWindow->setData(maleCount, femaleCount);
    genderChartWindow->createChart();
}
