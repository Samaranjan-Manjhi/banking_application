/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *profile;
    QPushButton *details;
    QPushButton *deposit;
    QPushButton *fundtransfer;
    QPushButton *card;
    QPushButton *service;
    QPushButton *activity;
    QPushButton *logout;
    QTableView *dataview;

    void setupUi(QWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(822, 579);
        label = new QLabel(Dashboard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 761, 531));
        label->setPixmap(QPixmap(QString::fromUtf8(":/photo/images.jpeg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Dashboard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 0, 411, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Rasa"));
        font.setPointSize(23);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        profile = new QPushButton(Dashboard);
        profile->setObjectName(QString::fromUtf8("profile"));
        profile->setGeometry(QRect(20, 60, 71, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rasa"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setWeight(50);
        profile->setFont(font1);
        details = new QPushButton(Dashboard);
        details->setObjectName(QString::fromUtf8("details"));
        details->setGeometry(QRect(100, 60, 71, 25));
        details->setFont(font1);
        deposit = new QPushButton(Dashboard);
        deposit->setObjectName(QString::fromUtf8("deposit"));
        deposit->setGeometry(QRect(180, 60, 81, 25));
        deposit->setFont(font1);
        fundtransfer = new QPushButton(Dashboard);
        fundtransfer->setObjectName(QString::fromUtf8("fundtransfer"));
        fundtransfer->setGeometry(QRect(270, 60, 131, 25));
        fundtransfer->setFont(font1);
        card = new QPushButton(Dashboard);
        card->setObjectName(QString::fromUtf8("card"));
        card->setGeometry(QRect(410, 60, 61, 25));
        card->setFont(font1);
        service = new QPushButton(Dashboard);
        service->setObjectName(QString::fromUtf8("service"));
        service->setGeometry(QRect(480, 60, 81, 25));
        service->setFont(font1);
        activity = new QPushButton(Dashboard);
        activity->setObjectName(QString::fromUtf8("activity"));
        activity->setGeometry(QRect(570, 60, 81, 25));
        activity->setFont(font1);
        logout = new QPushButton(Dashboard);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(660, 60, 81, 25));
        logout->setFont(font1);
        dataview = new QTableView(Dashboard);
        dataview->setObjectName(QString::fromUtf8("dataview"));
        dataview->setGeometry(QRect(20, 100, 721, 411));
        dataview->setStyleSheet(QString::fromUtf8("QTableView#tableView {\n"
"	 /*background-color: transparent; \n"
"    border: none;*/\n"
"}"));

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QWidget *Dashboard)
    {
        Dashboard->setWindowTitle(QApplication::translate("Dashboard", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("Dashboard", "Welcome Back to Your Account", nullptr));
        profile->setText(QApplication::translate("Dashboard", "Profile", nullptr));
        details->setText(QApplication::translate("Dashboard", "Details", nullptr));
        deposit->setText(QApplication::translate("Dashboard", "Deposit", nullptr));
        fundtransfer->setText(QApplication::translate("Dashboard", "Fund Transfer", nullptr));
        card->setText(QApplication::translate("Dashboard", "Card", nullptr));
        service->setText(QApplication::translate("Dashboard", "Service", nullptr));
        activity->setText(QApplication::translate("Dashboard", "Activity", nullptr));
        logout->setText(QApplication::translate("Dashboard", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
