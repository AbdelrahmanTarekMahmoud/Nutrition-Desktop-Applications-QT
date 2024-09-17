#ifndef ICHARTWINDOW_H
#define ICHARTWINDOW_H

#include <QWidget>

class   IChartWindow : public QWidget {
    Q_OBJECT
public:
    explicit IChartWindow(QWidget *parent = nullptr) : QWidget(parent) {}
    virtual void createChart() = 0;
    virtual ~IChartWindow() {}  // Add virtual destructor
};

#endif // ICHARTWINDOW_H
