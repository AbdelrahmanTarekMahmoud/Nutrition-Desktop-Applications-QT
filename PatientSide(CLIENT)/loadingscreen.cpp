
#include "loadingscreen.h"
#include "ui_loadingscreen.h"

LoadingScreen::LoadingScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoadingScreen),
    counter(0),
    timer(new QTimer(this))
{
    ui->setupUi(this);

    // Set window flags to make it frameless and transparent
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    setAttribute(Qt::WA_TranslucentBackground);

    connect(timer, &QTimer::timeout, this, [this]() {
        ui->ProgressBar->setValue(counter++);
        if (counter > 100) {
            timer->stop();
            emit loadingFinished();
            close();
        }
    });
    timer->start(20); // Adjust the speed of the progress bar

    show();
}

LoadingScreen::~LoadingScreen()
{
    delete ui;
}
