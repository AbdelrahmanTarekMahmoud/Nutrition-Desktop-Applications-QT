//we
#include "appscreen.h"
#include "ui_appscreen.h"
#include <QGraphicsColorizeEffect>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <qicon.h>

AppScreen::AppScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AppScreen)
{
    ui->setupUi(this);
    ui->Error_Label->setHidden(true);
    ui->SucessLabel->setHidden(true);
    ui->FeedBackPushButton->setEnabled(false);

    // Connect to the server
    networkManager->connectToServer("127.0.0.1", 12345);

    // Connect the diet plan received signal to the handler slot
    connect(&TcpNetworkManager::getInstance(), &TcpNetworkManager::dietPlanReceived, this, &AppScreen::handleDietPlanReceived);
}

AppScreen::~AppScreen()
{
    delete ui;
}

void AppScreen::displayErrorMessage(const QString &message) {
    ui->Error_Label->setText(message);
    ui->Error_Label->setVisible(true);
    ui->SucessLabel->setVisible(false);
}

void AppScreen::on_SumbitButton_clicked()
{



    user.setName(ui->FullName_LineEdit->text());
    user.setAge(ui->AgeSpinBox->value());
    user.setGender(ui->GenderComboBox->currentText());
    user.setHeight(ui->HeightSpinBox->value());
    user.setWeight(ui->WeightSpinBox->value());
    user.setBloodPressure(ui->BloodPressureLineEdit->text());
    user.setGoal(ui->NutritionGoalsCombobox->currentText());
    user.setSleepHours(ui->SleepSpinBox->value());

    QString errorMessage;
    if (userValidator.validate(user, errorMessage))
    {
        QIcon newIcon(":/Icons/Icons/notification.png");
        ui->PopOutDietPlanPushButton->setIcon(newIcon);

        ui->Error_Label->setVisible(false);
        ui->SucessLabel->setVisible(true);
        ui->FeedBackPushButton->setEnabled(true);

        QGraphicsColorizeEffect *colorizeEffect = new QGraphicsColorizeEffect(this);
        colorizeEffect->setColor(Qt::gray);
        ui->SumbitButton->setGraphicsEffect(colorizeEffect);
        ui->SumbitButton->setEnabled(false);
        ui->stackedWidget->setCurrentIndex(1);
        ui->PopOutDietPlanPushButton->setChecked(true);

        // Serialize user data to JSON
        QJsonObject json;
        json["name"] = user.getName();
        json["age"] = user.getAge();
        json["gender"] = user.getGender();
        json["height"] = user.getHeight();
        json["weight"] = user.getWeight();
        json["bloodPressure"] = user.getBloodPressure();
        json["goal"] = user.getGoal();
        json["sleepHours"] = user.getSleepHours();

        QByteArray data = QJsonDocument(json).toJson();

        // Send user data to the server
        networkManager->sendUserData(data);
    }
    else
    {
        displayErrorMessage(errorMessage);
    }
}

void AppScreen::on_PopOutProfilePushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void AppScreen::on_PopOutDietPlanPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void AppScreen::handleDietPlanReceived(const QByteArray &data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject obj = doc.object();
    QJsonArray dietPlan = obj["dietPlan"].toArray();

    for (int day = 0; day < dietPlan.size(); ++day) {
        QJsonObject dayPlan = dietPlan[day].toObject();
        QJsonArray meals = dayPlan["meals"].toArray();
        QString dayText;
        for (const QJsonValue &meal : meals) {
            dayText += meal.toString() + "\n";
        }

        switch (day) {
        case 0: ui->DayOneDiet->setText(dayText); break;
        case 1: ui->DayTwoDiet->setText(dayText); break;
        case 2: ui->DayThreeDiet->setText(dayText); break;
        case 3: ui->DayFourDiet->setText(dayText); break;
        case 4: ui->DayFiveDiet->setText(dayText); break;
        case 5: ui->DaySixDiet->setText(dayText); break;
        case 6: ui->DaySevenDiet->setText(dayText); break;
        default: break;
        }
    }
}

void AppScreen::on_FeedBackPushButton_clicked()
{
    QGraphicsColorizeEffect *colorizeEffect = new QGraphicsColorizeEffect(this);
    colorizeEffect->setColor(Qt::gray); // Set the color to gray
    ui->FeedBackPushButton->setGraphicsEffect(colorizeEffect);
    ui->FeedBackPushButton->setEnabled(false);

    int feedback = ui->FeedbackSpinBox->value();
    QJsonObject json;
    json["feedback"] = feedback; // Ensure it's sent as an integer
    QByteArray data = QJsonDocument(json).toJson();
    networkManager->sendFeedback(data);

    ui->FeedbackSpinBox->setValue(0);
}
