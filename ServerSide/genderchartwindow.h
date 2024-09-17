#ifndef GENDERCHARTWINDOW_H
#define GENDERCHARTWINDOW_H

#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>

class GenderChartWindow : public QWidget {
    Q_OBJECT

public:
    explicit GenderChartWindow(QWidget *parent = nullptr);
    void setData(int maleCount, int femaleCount);
    void createChart();

private:
    QChartView *chartView;
    int maleCount;
    int femaleCount;
};

#endif // GENDERCHARTWINDOW_H
