/********************************************************************************
** Form generated from reading UI file 'scammerbank.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCAMMERBANK_H
#define UI_SCAMMERBANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScammerBank
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *signup;
    QPushButton *signin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ScammerBank)
    {
        if (ScammerBank->objectName().isEmpty())
            ScammerBank->setObjectName(QString::fromUtf8("ScammerBank"));
        ScammerBank->resize(764, 535);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ScammerBank->sizePolicy().hasHeightForWidth());
        ScammerBank->setSizePolicy(sizePolicy);
        ScammerBank->setMaximumSize(QSize(764, 535));
        centralwidget = new QWidget(ScammerBank);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMaximumSize(QSize(16777215, 16777215));
        centralwidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 879, 770));
        label->setAutoFillBackground(false);
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/pexels-brakou-1723637.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 40, 321, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Sarai"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAutoFillBackground(false);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label_2->setMargin(1);
        label_2->setOpenExternalLinks(false);
        signup = new QPushButton(centralwidget);
        signup->setObjectName(QString::fromUtf8("signup"));
        signup->setGeometry(QRect(670, 10, 71, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sarai"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        signup->setFont(font1);
        signup->setStyleSheet(QString::fromUtf8("QPushButton#signup {\n"
"    background-color: transparent; \n"
"    border-left-color: rgb(239, 135, 135);\n"
"    color: #eeeeec; \n"
"}\n"
"\n"
"QPushButton#signup:hover {\n"
"    background-color: transparent; \n"
"    border-left-color: rgb(200, 100, 100); \n"
"    color: rgb(255, 0, 0); \n"
"}"));
        signin = new QPushButton(centralwidget);
        signin->setObjectName(QString::fromUtf8("signin"));
        signin->setGeometry(QRect(600, 10, 71, 25));
        signin->setFont(font1);
        signin->setStyleSheet(QString::fromUtf8("QPushButton#signin {\n"
"    background-color: transparent; \n"
"    border-left-color: rgb(239, 135, 135);\n"
"    color: #eeeeec; \n"
"}\n"
"\n"
"QPushButton#signin:hover {\n"
"    background-color: transparent; \n"
"    border-left-color: rgb(200, 100, 100); \n"
"    color: rgb(255, 0, 0); \n"
"}"));
        ScammerBank->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ScammerBank);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 764, 22));
        ScammerBank->setMenuBar(menubar);
        statusbar = new QStatusBar(ScammerBank);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ScammerBank->setStatusBar(statusbar);

        retranslateUi(ScammerBank);

        QMetaObject::connectSlotsByName(ScammerBank);
    } // setupUi

    void retranslateUi(QMainWindow *ScammerBank)
    {
        ScammerBank->setWindowTitle(QApplication::translate("ScammerBank", "Samaranjan Project", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("ScammerBank", "<html><head/><body><p><span style=\" color:#eeeeec;\">WELCOME TO BANK</span></p></body></html>", nullptr));
        signup->setText(QApplication::translate("ScammerBank", "SIGN UP", nullptr));
        signin->setText(QApplication::translate("ScammerBank", "SIGN IN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScammerBank: public Ui_ScammerBank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCAMMERBANK_H
