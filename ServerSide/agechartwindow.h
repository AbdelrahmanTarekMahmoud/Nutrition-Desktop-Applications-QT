#ifndef AGECHARTWINDOW_H
#define AGECHARTWINDOW_H

#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QVector>

class AgeChartWindow : public QWidget {
    Q_OBJECT

public:
    explicit AgeChartWindow(QWidget *parent = nullptr);
    void createChart();
    void setData(const QVector<int> &data);

private:
    QChartView *chartView;
    QVector<int> ageData;
};

#endif // AGECHARTWINDOW_H
