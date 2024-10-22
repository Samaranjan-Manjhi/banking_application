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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(822, 579);
        label = new QLabel(Dashboard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 761, 561));
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
        pushButton = new QPushButton(Dashboard);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 60, 61, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rasa"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(Dashboard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 60, 101, 25));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(Dashboard);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 60, 81, 25));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(Dashboard);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(280, 60, 131, 25));
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(Dashboard);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(420, 60, 61, 25));
        pushButton_5->setFont(font1);
        pushButton_6 = new QPushButton(Dashboard);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(490, 60, 81, 25));
        pushButton_6->setFont(font1);
        pushButton_7 = new QPushButton(Dashboard);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(580, 60, 81, 25));
        pushButton_7->setFont(font1);
        pushButton_8 = new QPushButton(Dashboard);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(670, 60, 81, 25));
        pushButton_8->setFont(font1);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QWidget *Dashboard)
    {
        Dashboard->setWindowTitle(QApplication::translate("Dashboard", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("Dashboard", "Welcome Back to Your Account", nullptr));
        pushButton->setText(QApplication::translate("Dashboard", "Profile", nullptr));
        pushButton_2->setText(QApplication::translate("Dashboard", "Dashboard", nullptr));
        pushButton_3->setText(QApplication::translate("Dashboard", "Deposit", nullptr));
        pushButton_4->setText(QApplication::translate("Dashboard", "Fund Transfer", nullptr));
        pushButton_5->setText(QApplication::translate("Dashboard", "Card", nullptr));
        pushButton_6->setText(QApplication::translate("Dashboard", "Service", nullptr));
        pushButton_7->setText(QApplication::translate("Dashboard", "Activity", nullptr));
        pushButton_8->setText(QApplication::translate("Dashboard", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
