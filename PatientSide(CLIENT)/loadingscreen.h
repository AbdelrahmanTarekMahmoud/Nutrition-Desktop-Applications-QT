#ifndef LOADINGSCREEN_H
#define LOADINGSCREEN_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class LoadingScreen;
}

class LoadingScreen : public QDialog
{
    Q_OBJECT

public:
    explicit LoadingScreen(QWidget *parent = nullptr);
    ~LoadingScreen();

signals:
    void loadingFinished();


private:
    Ui::LoadingScreen *ui;
    int counter;
    QTimer *timer;

    void setUp();
};

#endif // LOADINGSCREEN_H
