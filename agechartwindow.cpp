#include "agechartwindow.h"
#include <QChart>
#include <QVBoxLayout>

AgeChartWindow::AgeChartWindow(QWidget *parent) : QWidget(parent), chartView(new QChartView(this)) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(chartView);
    setLayout(layout);
}

void AgeChartWindow::setData(const QVector<int> &data) {
    ageData = data;
}

void AgeChartWindow::createChart() {

    QBarSet *set0 = new QBarSet("Age Groups");

    QMap<QString, int> ageGroups;
    ageGroups["15-20"] = 0;
    ageGroups["20-40"] = 0;
    ageGroups["40-60"] = 0;
    ageGroups["60-80"] = 0;
    ageGroups["80-100"] = 0;

    for (int age : ageData) {
        if (age >= 15 && age < 20) {
            ageGroups["15-20"]++;
        } else if (age >= 20 && age < 40) {
            ageGroups["20-40"]++;
        } else if (age >= 40 && age < 60) {
            ageGroups["40-60"]++;
        } else if (age >= 60 && age < 80) {
            ageGroups["60-80"]++;
        } else if (age >= 80 && age < 100) {
            ageGroups["80-100"]++;
        }
    }

    *set0 << ageGroups["15-20"] << ageGroups["20-40"] << ageGroups["40-60"]
          << ageGroups["60-80"] << ageGroups["80-100"];

    QBarSeries *series = new QBarSeries();
    series->append(set0);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Age Distribution");

    QStringList categories;
    categories << "15-20" << "20-40" << "40-60" << "60-80" << "80-100";

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, *std::max_element(ageGroups.begin(), ageGroups.end()) + 1);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chartView->setChart(chart);
}
