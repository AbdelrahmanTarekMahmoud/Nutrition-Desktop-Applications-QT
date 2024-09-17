/********************************************************************************
** Form generated from reading UI file 'appscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPSCREEN_H
#define UI_APPSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppScreen
{
public:
    QWidget *centralwidget;
    QWidget *PopOutWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *Logo;
    QVBoxLayout *verticalLayout_2;
    QPushButton *PopOutProfilePushButton;
    QPushButton *PopOutDietPlanPushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_19;
    QSpacerItem *verticalSpacer_20;
    QPushButton *PopOutSignOutPushButton;
    QSpacerItem *verticalSpacer_3;
    QStackedWidget *stackedWidget;
    QWidget *ProfileInfo;
    QPushButton *SumbitButton;
    QLabel *ProfileWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout;
    QLabel *FullNameLabel;
    QLineEdit *FullName_LineEdit;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_5;
    QLabel *AgeLabel;
    QSpinBox *AgeSpinBox;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_8;
    QLabel *GenderLabel;
    QComboBox *GenderComboBox;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *HeightLabel;
    QSpinBox *HeightSpinBox;
    QVBoxLayout *verticalLayout_10;
    QLabel *WeightLabel;
    QSpinBox *WeightSpinBox;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_11;
    QComboBox *NutritionGoalsCombobox;
    QVBoxLayout *verticalLayout_12;
    QLabel *HeightDoubleSpinBox_2;
    QSpinBox *SleepSpinBox;
    QVBoxLayout *verticalLayout_11;
    QLabel *BloodPressureLabel;
    QLineEdit *BloodPressureLineEdit;
    QLabel *Error_Label;
    QLabel *SucessLabel;
    QWidget *DietPlusFeedBack;
    QLabel *DayOneLabel;
    QLabel *DayTwoLabel;
    QLabel *DayThreeLabel;
    QLabel *DayFourLabel;
    QLabel *DayFiveLabel;
    QLabel *DaySixLabel;
    QLabel *DaySevenLabel;
    QLabel *DayOneDiet;
    QLabel *DayTwoDiet;
    QLabel *DayThreeDiet;
    QLabel *DayFourDiet;
    QLabel *DayFiveDiet;
    QLabel *DaySixDiet;
    QLabel *DaySevenDiet;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *FeedbackSpinBox;
    QPushButton *FeedBackPushButton;
    QWidget *ThankYou;

    void setupUi(QMainWindow *AppScreen)
    {
        if (AppScreen->objectName().isEmpty())
            AppScreen->setObjectName("AppScreen");
        AppScreen->resize(780, 629);
        AppScreen->setMinimumSize(QSize(0, 629));
        AppScreen->setMaximumSize(QSize(972, 629));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Icons/PopinIcon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AppScreen->setWindowIcon(icon);
        centralwidget = new QWidget(AppScreen);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(0, 0));
        centralwidget->setMaximumSize(QSize(972, 16777215));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));
        PopOutWidget = new QWidget(centralwidget);
        PopOutWidget->setObjectName("PopOutWidget");
        PopOutWidget->setGeometry(QRect(0, 0, 201, 631));
        PopOutWidget->setMinimumSize(QSize(201, 631));
        PopOutWidget->setMaximumSize(QSize(201, 631));
        PopOutWidget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(38, 162, 105);\n"
"}\n"
"QPushButton\n"
"{\n"
" height : 50px;\n"
"  color : white;\n"
"  text-align : left;\n"
"  border : none;\n"
"  border-top-left-radius : 10px;\n"
"  border-bottom-left-radius : 10px;\n"
"\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"	background-color: white;\n"
"    color : black;\n"
"    font-weight: bold;\n"
"    \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"    color : black;\n"
"    \n"
"}"));
        gridLayout_2 = new QGridLayout(PopOutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(40);
        gridLayout_2->setContentsMargins(18, 40, 0, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(50);
        verticalLayout_6->setObjectName("verticalLayout_6");
        Logo = new QLabel(PopOutWidget);
        Logo->setObjectName("Logo");
        Logo->setMinimumSize(QSize(161, 161));
        Logo->setMaximumSize(QSize(161, 161));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/Icons/Icons/WhiteIcon.png")));
        Logo->setScaledContents(true);

        verticalLayout_6->addWidget(Logo);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        PopOutProfilePushButton = new QPushButton(PopOutWidget);
        PopOutProfilePushButton->setObjectName("PopOutProfilePushButton");
        PopOutProfilePushButton->setStyleSheet(QString::fromUtf8("border : none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Icons/UserBefore.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon1.addFile(QString::fromUtf8(":/Icons/Icons/UserAfter.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        PopOutProfilePushButton->setIcon(icon1);
        PopOutProfilePushButton->setIconSize(QSize(20, 20));
        PopOutProfilePushButton->setCheckable(true);
        PopOutProfilePushButton->setChecked(true);
        PopOutProfilePushButton->setAutoExclusive(true);

        verticalLayout_2->addWidget(PopOutProfilePushButton);

        PopOutDietPlanPushButton = new QPushButton(PopOutWidget);
        PopOutDietPlanPushButton->setObjectName("PopOutDietPlanPushButton");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Icons/cowbell(1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon2.addFile(QString::fromUtf8(":/Icons/Icons/cowbell.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        PopOutDietPlanPushButton->setIcon(icon2);
        PopOutDietPlanPushButton->setIconSize(QSize(20, 20));
        PopOutDietPlanPushButton->setCheckable(true);
        PopOutDietPlanPushButton->setAutoExclusive(true);

        verticalLayout_2->addWidget(PopOutDietPlanPushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_19);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_20);

        PopOutSignOutPushButton = new QPushButton(PopOutWidget);
        PopOutSignOutPushButton->setObjectName("PopOutSignOutPushButton");
        PopOutSignOutPushButton->setStyleSheet(QString::fromUtf8(" QPushButton\n"
"{height : 30px;\n"
"  color : white;\n"
"  text-align : left;\n"
"  border : none;\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"	background-color: white;\n"
"    color : black;\n"
"    font-weight: bold;\n"
"    \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"    color : black;\n"
"    \n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Icons/7124045_logout_icon(1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon3.addFile(QString::fromUtf8(":/Icons/Icons/7124045_logout_icon(2).png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        PopOutSignOutPushButton->setIcon(icon3);
        PopOutSignOutPushButton->setIconSize(QSize(30, 30));
        PopOutSignOutPushButton->setCheckable(true);
        PopOutSignOutPushButton->setAutoExclusive(true);

        verticalLayout_2->addWidget(PopOutSignOutPushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(verticalLayout_6);


        gridLayout_2->addLayout(verticalLayout_7, 0, 0, 2, 2);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(210, 0, 561, 621));
        stackedWidget->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color : black;\n"
"}"));
        ProfileInfo = new QWidget();
        ProfileInfo->setObjectName("ProfileInfo");
        SumbitButton = new QPushButton(ProfileInfo);
        SumbitButton->setObjectName("SumbitButton");
        SumbitButton->setGeometry(QRect(150, 520, 201, 31));
        SumbitButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color: rgb(0, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
" \n"
"	color: rgb(119, 118, 123);\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"\n"
""));
        SumbitButton->setCheckable(true);
        ProfileWidget = new QLabel(ProfileInfo);
        ProfileWidget->setObjectName("ProfileWidget");
        ProfileWidget->setGeometry(QRect(80, 0, 371, 71));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        ProfileWidget->setFont(font);
        ProfileWidget->setStyleSheet(QString::fromUtf8("color : black;"));
        layoutWidget = new QWidget(ProfileInfo);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 90, 371, 382));
        verticalLayout_18 = new QVBoxLayout(layoutWidget);
        verticalLayout_18->setSpacing(8);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        FullNameLabel = new QLabel(layoutWidget);
        FullNameLabel->setObjectName("FullNameLabel");
        FullNameLabel->setStyleSheet(QString::fromUtf8("color : black;"));

        verticalLayout->addWidget(FullNameLabel);

        FullName_LineEdit = new QLineEdit(layoutWidget);
        FullName_LineEdit->setObjectName("FullName_LineEdit");
        FullName_LineEdit->setMinimumSize(QSize(291, 41));
        FullName_LineEdit->setMaximumSize(QSize(291, 41));
        FullName_LineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding : 7px;\n"
"color : black;"));

        verticalLayout->addWidget(FullName_LineEdit);


        verticalLayout_18->addLayout(verticalLayout);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        AgeLabel = new QLabel(layoutWidget);
        AgeLabel->setObjectName("AgeLabel");
        AgeLabel->setStyleSheet(QString::fromUtf8("color : black;"));

        verticalLayout_5->addWidget(AgeLabel);

        AgeSpinBox = new QSpinBox(layoutWidget);
        AgeSpinBox->setObjectName("AgeSpinBox");
        AgeSpinBox->setStyleSheet(QString::fromUtf8("color : black;"));

        verticalLayout_5->addWidget(AgeSpinBox);


        verticalLayout_17->addLayout(verticalLayout_5);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        GenderLabel = new QLabel(layoutWidget);
        GenderLabel->setObjectName("GenderLabel");
        GenderLabel->setStyleSheet(QString::fromUtf8("color : black;"));

        verticalLayout_8->addWidget(GenderLabel);

        GenderComboBox = new QComboBox(layoutWidget);
        GenderComboBox->addItem(QString());
        GenderComboBox->addItem(QString());
        GenderComboBox->setObjectName("GenderComboBox");
        GenderComboBox->setStyleSheet(QString::fromUtf8("color : black;\n"
""));

        verticalLayout_8->addWidget(GenderComboBox);


        verticalLayout_16->addLayout(verticalLayout_8);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        HeightLabel = new QLabel(layoutWidget);
        HeightLabel->setObjectName("HeightLabel");
        HeightLabel->setStyleSheet(QString::fromUtf8("color : black;"));

        verticalLayout_9->addWidget(HeightLabel);

        HeightSpinBox = new QSpinBox(layoutWidget);
        HeightSpinBox->setObjectName("HeightSpinBox");
        HeightSpinBox->setStyleSheet(QString::fromUtf8("color : black;"));
        HeightSpinBox->setMaximum(250);

        verticalLayout_9->addWidget(HeightSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        WeightLabel = new QLabel(layoutWidget);
        WeightLabel->setObjectName("WeightLabel");
        WeightLabel->setStyleSheet(QString::fromUtf8("color : black;"));

        verticalLayout_10->addWidget(WeightLabel);

        WeightSpinBox = new QSpinBox(layoutWidget);
        WeightSpinBox->setObjectName("WeightSpinBox");
        WeightSpinBox->setStyleSheet(QString::fromUtf8("color : black;"));
        WeightSpinBox->setMaximum(200);

        verticalLayout_10->addWidget(WeightSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_10);


        verticalLayout_15->addLayout(horizontalLayout_2);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("color : black;"));

        verticalLayout_13->addWidget(label_11);

        NutritionGoalsCombobox = new QComboBox(layoutWidget);
        NutritionGoalsCombobox->addItem(QString());
        NutritionGoalsCombobox->addItem(QString());
        NutritionGoalsCombobox->addItem(QString());
        NutritionGoalsCombobox->setObjectName("NutritionGoalsCombobox");
        NutritionGoalsCombobox->setStyleSheet(QString::fromUtf8("color : black;\n"
""));

        verticalLayout_13->addWidget(NutritionGoalsCombobox);


        horizontalLayout->addLayout(verticalLayout_13);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        HeightDoubleSpinBox_2 = new QLabel(layoutWidget);
        HeightDoubleSpinBox_2->setObjectName("HeightDoubleSpinBox_2");
        HeightDoubleSpinBox_2->setStyleSheet(QString::fromUtf8("color : black;"));

        verticalLayout_12->addWidget(HeightDoubleSpinBox_2);

        SleepSpinBox = new QSpinBox(layoutWidget);
        SleepSpinBox->setObjectName("SleepSpinBox");
        SleepSpinBox->setStyleSheet(QString::fromUtf8("color : black;"));
        SleepSpinBox->setMaximum(15);

        verticalLayout_12->addWidget(SleepSpinBox);


        horizontalLayout->addLayout(verticalLayout_12);


        verticalLayout_14->addLayout(horizontalLayout);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        BloodPressureLabel = new QLabel(layoutWidget);
        BloodPressureLabel->setObjectName("BloodPressureLabel");
        BloodPressureLabel->setStyleSheet(QString::fromUtf8("color : black;"));

        verticalLayout_11->addWidget(BloodPressureLabel);

        BloodPressureLineEdit = new QLineEdit(layoutWidget);
        BloodPressureLineEdit->setObjectName("BloodPressureLineEdit");
        BloodPressureLineEdit->setMinimumSize(QSize(291, 41));
        BloodPressureLineEdit->setMaximumSize(QSize(291, 41));
        BloodPressureLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding : 7px;\n"
"color : black;"));

        verticalLayout_11->addWidget(BloodPressureLineEdit);


        verticalLayout_14->addLayout(verticalLayout_11);


        verticalLayout_15->addLayout(verticalLayout_14);


        verticalLayout_16->addLayout(verticalLayout_15);


        verticalLayout_17->addLayout(verticalLayout_16);


        verticalLayout_18->addLayout(verticalLayout_17);

        Error_Label = new QLabel(ProfileInfo);
        Error_Label->setObjectName("Error_Label");
        Error_Label->setEnabled(false);
        Error_Label->setGeometry(QRect(60, 560, 381, 31));
        Error_Label->setMinimumSize(QSize(381, 31));
        Error_Label->setMaximumSize(QSize(381, 31));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        Error_Label->setFont(font1);
        Error_Label->setStyleSheet(QString::fromUtf8("color : white;\n"
"background-color: rgb(255, 0, 0);\n"
"padding : 5px;\n"
""));
        Error_Label->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        SucessLabel = new QLabel(ProfileInfo);
        SucessLabel->setObjectName("SucessLabel");
        SucessLabel->setGeometry(QRect(40, 490, 451, 20));
        QFont font2;
        font2.setBold(true);
        SucessLabel->setFont(font2);
        SucessLabel->setStyleSheet(QString::fromUtf8("color : black;"));
        stackedWidget->addWidget(ProfileInfo);
        DietPlusFeedBack = new QWidget();
        DietPlusFeedBack->setObjectName("DietPlusFeedBack");
        DayOneLabel = new QLabel(DietPlusFeedBack);
        DayOneLabel->setObjectName("DayOneLabel");
        DayOneLabel->setGeometry(QRect(1, 1, 54, 18));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        DayOneLabel->setFont(font3);
        DayTwoLabel = new QLabel(DietPlusFeedBack);
        DayTwoLabel->setObjectName("DayTwoLabel");
        DayTwoLabel->setGeometry(QRect(1, 81, 50, 18));
        DayTwoLabel->setFont(font3);
        DayThreeLabel = new QLabel(DietPlusFeedBack);
        DayThreeLabel->setObjectName("DayThreeLabel");
        DayThreeLabel->setGeometry(QRect(1, 161, 54, 18));
        DayThreeLabel->setFont(font3);
        DayFourLabel = new QLabel(DietPlusFeedBack);
        DayFourLabel->setObjectName("DayFourLabel");
        DayFourLabel->setGeometry(QRect(1, 241, 50, 18));
        DayFourLabel->setFont(font3);
        DayFiveLabel = new QLabel(DietPlusFeedBack);
        DayFiveLabel->setObjectName("DayFiveLabel");
        DayFiveLabel->setGeometry(QRect(2, 322, 54, 18));
        DayFiveLabel->setFont(font3);
        DaySixLabel = new QLabel(DietPlusFeedBack);
        DaySixLabel->setObjectName("DaySixLabel");
        DaySixLabel->setGeometry(QRect(3, 406, 50, 18));
        DaySixLabel->setFont(font3);
        DaySevenLabel = new QLabel(DietPlusFeedBack);
        DaySevenLabel->setObjectName("DaySevenLabel");
        DaySevenLabel->setGeometry(QRect(3, 489, 50, 18));
        DaySevenLabel->setFont(font3);
        DayOneDiet = new QLabel(DietPlusFeedBack);
        DayOneDiet->setObjectName("DayOneDiet");
        DayOneDiet->setGeometry(QRect(1, 25, 511, 51));
        DayOneDiet->setMinimumSize(QSize(0, 0));
        DayOneDiet->setMaximumSize(QSize(511, 51));
        QFont font4;
        font4.setPointSize(8);
        DayOneDiet->setFont(font4);
        DayOneDiet->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 228, 92);"));
        DayOneDiet->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);
        DayTwoDiet = new QLabel(DietPlusFeedBack);
        DayTwoDiet->setObjectName("DayTwoDiet");
        DayTwoDiet->setGeometry(QRect(1, 105, 511, 51));
        DayTwoDiet->setMinimumSize(QSize(511, 51));
        DayTwoDiet->setMaximumSize(QSize(511, 51));
        DayTwoDiet->setFont(font4);
        DayTwoDiet->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 228, 92);"));
        DayThreeDiet = new QLabel(DietPlusFeedBack);
        DayThreeDiet->setObjectName("DayThreeDiet");
        DayThreeDiet->setGeometry(QRect(1, 185, 511, 51));
        DayThreeDiet->setMinimumSize(QSize(511, 51));
        DayThreeDiet->setMaximumSize(QSize(511, 51));
        DayThreeDiet->setFont(font4);
        DayThreeDiet->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 228, 92);"));
        DayFourDiet = new QLabel(DietPlusFeedBack);
        DayFourDiet->setObjectName("DayFourDiet");
        DayFourDiet->setGeometry(QRect(1, 265, 511, 51));
        DayFourDiet->setMinimumSize(QSize(511, 51));
        DayFourDiet->setMaximumSize(QSize(511, 51));
        DayFourDiet->setFont(font4);
        DayFourDiet->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 228, 92);"));
        DayFiveDiet = new QLabel(DietPlusFeedBack);
        DayFiveDiet->setObjectName("DayFiveDiet");
        DayFiveDiet->setGeometry(QRect(2, 346, 511, 51));
        DayFiveDiet->setMinimumSize(QSize(511, 51));
        DayFiveDiet->setMaximumSize(QSize(511, 51));
        DayFiveDiet->setFont(font4);
        DayFiveDiet->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 228, 92);"));
        DaySixDiet = new QLabel(DietPlusFeedBack);
        DaySixDiet->setObjectName("DaySixDiet");
        DaySixDiet->setGeometry(QRect(3, 430, 511, 51));
        DaySixDiet->setMinimumSize(QSize(511, 51));
        DaySixDiet->setMaximumSize(QSize(511, 51));
        DaySixDiet->setFont(font4);
        DaySixDiet->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 228, 92);"));
        DaySevenDiet = new QLabel(DietPlusFeedBack);
        DaySevenDiet->setObjectName("DaySevenDiet");
        DaySevenDiet->setGeometry(QRect(3, 513, 511, 51));
        DaySevenDiet->setMinimumSize(QSize(511, 51));
        DaySevenDiet->setMaximumSize(QSize(511, 51));
        DaySevenDiet->setFont(font4);
        DaySevenDiet->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 228, 92);"));
        layoutWidget_2 = new QWidget(DietPlusFeedBack);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 580, 321, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color : black;"));

        horizontalLayout_3->addWidget(label);

        FeedbackSpinBox = new QSpinBox(layoutWidget_2);
        FeedbackSpinBox->setObjectName("FeedbackSpinBox");
        QFont font5;
        font5.setBold(true);
        font5.setStrikeOut(false);
        FeedbackSpinBox->setFont(font5);
        FeedbackSpinBox->setStyleSheet(QString::fromUtf8("color : black;\n"
""));
        FeedbackSpinBox->setMaximum(10);

        horizontalLayout_3->addWidget(FeedbackSpinBox);

        FeedBackPushButton = new QPushButton(DietPlusFeedBack);
        FeedBackPushButton->setObjectName("FeedBackPushButton");
        FeedBackPushButton->setGeometry(QRect(350, 580, 201, 31));
        FeedBackPushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:10px;\n"
"background-color: rgb(0, 0, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
" \n"
"	color: rgb(119, 118, 123);\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"\n"
""));
        FeedBackPushButton->setCheckable(true);
        stackedWidget->addWidget(DietPlusFeedBack);
        ThankYou = new QWidget();
        ThankYou->setObjectName("ThankYou");
        stackedWidget->addWidget(ThankYou);
        AppScreen->setCentralWidget(centralwidget);

        retranslateUi(AppScreen);
        QObject::connect(PopOutSignOutPushButton, &QPushButton::clicked, AppScreen, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(AppScreen);
    } // setupUi

    void retranslateUi(QMainWindow *AppScreen)
    {
        AppScreen->setWindowTitle(QCoreApplication::translate("AppScreen", "SmartNutri", nullptr));
        Logo->setText(QString());
        PopOutProfilePushButton->setText(QCoreApplication::translate("AppScreen", "Profile", nullptr));
        PopOutDietPlanPushButton->setText(QCoreApplication::translate("AppScreen", "DietPlan", nullptr));
        PopOutSignOutPushButton->setText(QCoreApplication::translate("AppScreen", "Exit App", nullptr));
        SumbitButton->setText(QCoreApplication::translate("AppScreen", "Sumbit", nullptr));
        ProfileWidget->setText(QCoreApplication::translate("AppScreen", "Please Enter Your Full Profile", nullptr));
        FullNameLabel->setText(QCoreApplication::translate("AppScreen", "Full Name", nullptr));
        FullName_LineEdit->setPlaceholderText(QCoreApplication::translate("AppScreen", "Fullname", nullptr));
        AgeLabel->setText(QCoreApplication::translate("AppScreen", "Age", nullptr));
        GenderLabel->setText(QCoreApplication::translate("AppScreen", "Gender", nullptr));
        GenderComboBox->setItemText(0, QCoreApplication::translate("AppScreen", "Male", nullptr));
        GenderComboBox->setItemText(1, QCoreApplication::translate("AppScreen", "Female", nullptr));

        HeightLabel->setText(QCoreApplication::translate("AppScreen", "Height (in cm)", nullptr));
        WeightLabel->setText(QCoreApplication::translate("AppScreen", "Weight (in kg)", nullptr));
        label_11->setText(QCoreApplication::translate("AppScreen", "Nutritional Goals:", nullptr));
        NutritionGoalsCombobox->setItemText(0, QCoreApplication::translate("AppScreen", "Weight loss", nullptr));
        NutritionGoalsCombobox->setItemText(1, QCoreApplication::translate("AppScreen", "Weight gain", nullptr));
        NutritionGoalsCombobox->setItemText(2, QCoreApplication::translate("AppScreen", "Muscle building", nullptr));

        HeightDoubleSpinBox_2->setText(QCoreApplication::translate("AppScreen", "Sleep Hours", nullptr));
        BloodPressureLabel->setText(QCoreApplication::translate("AppScreen", "Blood Pressure", nullptr));
        BloodPressureLineEdit->setPlaceholderText(QCoreApplication::translate("AppScreen", "\"e.g\" 120/80", nullptr));
        Error_Label->setText(QCoreApplication::translate("AppScreen", "Please Fill All the Fields", nullptr));
        SucessLabel->setText(QCoreApplication::translate("AppScreen", "Thanks For Sumbiting Please Check The \"DietPlan\" In Side Bar", nullptr));
        DayOneLabel->setText(QCoreApplication::translate("AppScreen", "Day 1 : ", nullptr));
        DayTwoLabel->setText(QCoreApplication::translate("AppScreen", "Day 2 :", nullptr));
        DayThreeLabel->setText(QCoreApplication::translate("AppScreen", "Day 3 : ", nullptr));
        DayFourLabel->setText(QCoreApplication::translate("AppScreen", "Day 4 :", nullptr));
        DayFiveLabel->setText(QCoreApplication::translate("AppScreen", "Day 5 : ", nullptr));
        DaySixLabel->setText(QCoreApplication::translate("AppScreen", "Day 6 :", nullptr));
        DaySevenLabel->setText(QCoreApplication::translate("AppScreen", "Day 7 :", nullptr));
        DayOneDiet->setText(QString());
        DayTwoDiet->setText(QString());
        DayThreeDiet->setText(QString());
        DayFourDiet->setText(QString());
        DayFiveDiet->setText(QString());
        DaySixDiet->setText(QString());
        DaySevenDiet->setText(QString());
        label->setText(QCoreApplication::translate("AppScreen", "Please Enter Your FeedBack", nullptr));
        FeedBackPushButton->setText(QCoreApplication::translate("AppScreen", "Sumbit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppScreen: public Ui_AppScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPSCREEN_H
