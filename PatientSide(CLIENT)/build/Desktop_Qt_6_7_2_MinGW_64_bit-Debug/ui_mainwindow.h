/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *Welcome_Label;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *Error_Label;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *Username_LineEdit;
    QLineEdit *Password_LineEdit;
    QPushButton *SignIn_PushButton;
    QLabel *Error_Label_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(809, 620);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 155, 93);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(35, 178, 106, 255), stop:1 rgba(120, 191, 155, 255));\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(461, 551));
        widget->setMaximumSize(QSize(461, 551));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border-radius: 12px;        /* Radius to make the borders rounded */\n"
"    background-color: rgb(0, 0, 0);\n"
"}\n"
""));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(-10, 30, 497, 423));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, 5, -1);
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Welcome_Label = new QLabel(layoutWidget);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setMinimumSize(QSize(271, 171));
        Welcome_Label->setMaximumSize(QSize(271, 171));
        Welcome_Label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color : #83ffbd;\n"
"}"));
        Welcome_Label->setPixmap(QPixmap(QString::fromUtf8(":/Icons/Icons/WhiteIcon.png")));
        Welcome_Label->setScaledContents(true);

        horizontalLayout->addWidget(Welcome_Label);

        horizontalSpacer_2 = new QSpacerItem(108, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(60, 30, -1, -1);
        Error_Label = new QLabel(layoutWidget);
        Error_Label->setObjectName("Error_Label");
        Error_Label->setMinimumSize(QSize(381, 31));
        Error_Label->setMaximumSize(QSize(381, 31));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        Error_Label->setFont(font);
        Error_Label->setStyleSheet(QString::fromUtf8("color : white;\n"
"background-color: rgb(255, 0, 0);\n"
"padding : 5px;\n"
""));

        verticalLayout_3->addWidget(Error_Label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(40, -1, -1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 10);
        Username_LineEdit = new QLineEdit(layoutWidget);
        Username_LineEdit->setObjectName("Username_LineEdit");
        Username_LineEdit->setMinimumSize(QSize(291, 41));
        Username_LineEdit->setMaximumSize(QSize(291, 41));
        Username_LineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding : 7px;\n"
"color : black;"));

        verticalLayout->addWidget(Username_LineEdit);

        Password_LineEdit = new QLineEdit(layoutWidget);
        Password_LineEdit->setObjectName("Password_LineEdit");
        Password_LineEdit->setMinimumSize(QSize(291, 41));
        Password_LineEdit->setMaximumSize(QSize(291, 41));
        Password_LineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding : 7px;\n"
"color : black;"));
        Password_LineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(Password_LineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        SignIn_PushButton = new QPushButton(layoutWidget);
        SignIn_PushButton->setObjectName("SignIn_PushButton");
        SignIn_PushButton->setMinimumSize(QSize(291, 41));
        SignIn_PushButton->setMaximumSize(QSize(291, 41));
        SignIn_PushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #83ffbd;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(46, 194, 126);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(33, 116, 77);\n"
"}\n"
""));

        verticalLayout_2->addWidget(SignIn_PushButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        Error_Label_2 = new QLabel(widget);
        Error_Label_2->setObjectName("Error_Label_2");
        Error_Label_2->setGeometry(QRect(260, 550, 381, 31));
        Error_Label_2->setMinimumSize(QSize(381, 31));
        Error_Label_2->setMaximumSize(QSize(381, 31));
        Error_Label_2->setFont(font);
        Error_Label_2->setStyleSheet(QString::fromUtf8("color : white;\n"
"background-color: rgb(255, 0, 0);\n"
"padding : 5px;\n"
""));

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 809, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login ", nullptr));
        Welcome_Label->setText(QString());
        Error_Label->setText(QCoreApplication::translate("MainWindow", "Incorrect Username or Password.", nullptr));
        Username_LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        Password_LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        SignIn_PushButton->setText(QCoreApplication::translate("MainWindow", "LOG IN", nullptr));
        Error_Label_2->setText(QCoreApplication::translate("MainWindow", "Incorrect Username or Password.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
