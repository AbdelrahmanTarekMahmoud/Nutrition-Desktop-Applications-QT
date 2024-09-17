#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDatabase>
#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Error_Label->hide();
    ApplyExternalFontsFromResources();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ApplyExternalFontsFromResources()
{
    int id = QFontDatabase::addApplicationFont(":/Fonts/Fonts/Poppins-ExtraBold.ttf");
    if (id != -1) {
        QString family = QFontDatabase::applicationFontFamilies(id).at(0);
        QFont customFont(family);
        customFont.setPointSize(20);  // Set the font size
        ui->Welcome_Label->setFont(customFont);

        QFont customFont2(family);
        customFont.setPointSize(12);
        ui->SignIn_PushButton->setFont(customFont2);
    } else {
        qWarning() << "Failed to load font";
    }
}

void MainWindow::on_SignIn_PushButton_clicked()
{
    QString username = ui->Username_LineEdit->text();
    QString password = ui->Password_LineEdit->text();

    if (validateCredentials(username, password)) {
        emit loginSuccessful();
        this->close();
    } else {
        ui->Error_Label->show();
    }
}

QString MainWindow::readFileContent(const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return QString();

    QTextStream in(&file);
    QString content = in.readAll();
    file.close();

    return content;
}

bool MainWindow::validateCredentials(const QString &username, const QString &password)
{
    QString fileContent = readFileContent(":/Text/TextFiles/LoginInfo.txt");
    if (fileContent.isEmpty())
        return false;

    QStringList lines = fileContent.split("\n");
    if (lines.size() < 2)
        return false;

    QString fileUsername = lines[0].section('=', 1).trimmed();
    QString filePassword = lines[1].section('=', 1).trimmed();

    fileUsername.remove('\"');
    filePassword.remove('\"');

    fileUsername = fileUsername.trimmed();
    filePassword = filePassword.trimmed();

    return (username == fileUsername && password == filePassword);
}

