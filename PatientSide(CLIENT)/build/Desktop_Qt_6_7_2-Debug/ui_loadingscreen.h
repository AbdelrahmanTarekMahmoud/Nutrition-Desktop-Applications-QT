/********************************************************************************
** Form generated from reading UI file 'loadingscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGSCREEN_H
#define UI_LOADINGSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoadingScreen
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *ShadowFrame;
    QLabel *AppName;
    QProgressBar *ProgressBar;
    QLabel *LoadingLabel;

    void setupUi(QDialog *LoadingScreen)
    {
        if (LoadingScreen->objectName().isEmpty())
            LoadingScreen->setObjectName("LoadingScreen");
        LoadingScreen->resize(680, 400);
        verticalLayout = new QVBoxLayout(LoadingScreen);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        ShadowFrame = new QFrame(LoadingScreen);
        ShadowFrame->setObjectName("ShadowFrame");
        ShadowFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"background-color: #83ffbd;\n"
"color : #2cde85;\n"
"border-radius : 10px;\n"
"}"));
        ShadowFrame->setFrameShape(QFrame::Shape::StyledPanel);
        ShadowFrame->setFrameShadow(QFrame::Shadow::Raised);
        AppName = new QLabel(ShadowFrame);
        AppName->setObjectName("AppName");
        AppName->setGeometry(QRect(200, 30, 250, 180));
        QFont font;
        font.setPointSize(40);
        AppName->setFont(font);
        AppName->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        AppName->setPixmap(QPixmap(QString::fromUtf8(":/Icons/Icons/BlackIcon.png")));
        AppName->setScaledContents(true);
        AppName->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ProgressBar = new QProgressBar(ShadowFrame);
        ProgressBar->setObjectName("ProgressBar");
        ProgressBar->setGeometry(QRect(60, 242, 541, 31));
        ProgressBar->setStyleSheet(QString::fromUtf8("QProgressBar\n"
"{\n"
"    border-style:none;\n"
"    border-radius : 10px;\n"
"    text-align : center;\n"
"        color: rgb(255, 255, 255);\n"
"        background-color: rgb(112, 112, 112);\n"
"}\n"
"QProgressBar::chunk\n"
"{\n"
"\n"
"        background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(52, 52, 52, 255));\n"
"border-radius : 10px;\n"
"}"));
        ProgressBar->setValue(24);
        LoadingLabel = new QLabel(ShadowFrame);
        LoadingLabel->setObjectName("LoadingLabel");
        LoadingLabel->setGeometry(QRect(70, 280, 531, 41));
        QFont font1;
        font1.setPointSize(10);
        LoadingLabel->setFont(font1);
        LoadingLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(61, 61, 61);"));
        LoadingLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(ShadowFrame);


        retranslateUi(LoadingScreen);

        QMetaObject::connectSlotsByName(LoadingScreen);
    } // setupUi

    void retranslateUi(QDialog *LoadingScreen)
    {
        LoadingScreen->setWindowTitle(QCoreApplication::translate("LoadingScreen", "Dialog", nullptr));
        AppName->setText(QString());
        LoadingLabel->setText(QCoreApplication::translate("LoadingScreen", "Loading...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingScreen: public Ui_LoadingScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGSCREEN_H
