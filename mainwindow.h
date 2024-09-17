#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "agechartwindow.h"
#include "genderchartwindow.h"
#include "logfileparser.h"
#include "nutritionserver.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_GenerateChartButton_clicked();

public slots:
    void setNameLabel(const QString &name);
    void setAgeLabel(int age);
    void setGenderLabel(const QString &gender);
    void setHeight(double height);
    void setWeight(double weight);
    void setNutritionGoals(const QString &goal);
    void setSleepHours(int sleepHours);
    void setBloodPressure(const QString &bloodPressure);
    void setFeedBackLabel(int feedback);
    void resetFeedback();


private:
    Ui::MainWindow *ui;
    NutritionServer *server;
    AgeChartWindow *ageChartWindow;
    GenderChartWindow *genderChartWindow;
    LogFileParser *logFileParser;
};

#endif // MAINWINDOW_H
