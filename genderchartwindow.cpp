#include "genderchartwindow.h"
#include <QVBoxLayout>
#include <QDebug>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

GenderChartWindow::GenderChartWindow(QWidget *parent)
    : QWidget(parent), chartView(new QChartView(this)), maleCount(0), femaleCount(0) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(chartView);
    setLayout(layout);
}

void GenderChartWindow::setData(int maleCount, int femaleCount) {
    this->maleCount = maleCount;
    this->femaleCount = femaleCount;
}

void GenderChartWindow::createChart() {
    QPieSeries *series = new QPieSeries();

    // Check if there's any data to display
    if (maleCount == 0 && femaleCount == 0) {
        series->append("No data available", 1);
    } else {
        series->append(QString("Male (%1)").arg(maleCount), maleCount);
        series->append(QString("Female (%1)").arg(femaleCount), femaleCount);

        // Optionally, highlight the largest slice
        QPieSlice *largestSlice = nullptr;
        for (auto slice : series->slices()) {
            if (!largestSlice || slice->value() > largestSlice->value()) {
                largestSlice = slice;
            }
            slice->setLabelVisible();
        }
        if (largestSlice) {
            largestSlice->setExploded();
            //largestSlice->setLabelVisible();
        }

    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Gender Distribution");

    chartView->setChart(chart);
}
