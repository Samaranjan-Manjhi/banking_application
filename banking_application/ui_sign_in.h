/********************************************************************************
** Form generated from reading UI file 'sign_in.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_IN_H
#define UI_SIGN_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_IN
{
public:
    QLabel *label;
    QLabel *label_2;
    QGroupBox *signinpage;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *usernamein;
    QLineEdit *emailin;
    QLineEdit *passwordin;
    QPushButton *login;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *insignup;

    void setupUi(QWidget *Sign_IN)
    {
        if (Sign_IN->objectName().isEmpty())
            Sign_IN->setObjectName(QString::fromUtf8("Sign_IN"));
        Sign_IN->resize(819, 611);
        label = new QLabel(Sign_IN);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 811, 601));
        label->setPixmap(QPixmap(QString::fromUtf8(":/photo/images.jpeg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Sign_IN);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 20, 411, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Rasa"));
        font.setPointSize(23);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        signinpage = new QGroupBox(Sign_IN);
        signinpage->setObjectName(QString::fromUtf8("signinpage"));
        signinpage->setGeometry(QRect(410, 90, 331, 371));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sarai"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        signinpage->setFont(font1);
        signinpage->setStyleSheet(QString::fromUtf8("QGroupBox#signinpage {\n"
"    background-color: rgba(255, 255, 255, 0);\n"
"    border: none; \n"
"}\n"
"\n"
"QGroupBox#signinpage::title {\n"
"    /*background-color: transparent; */\n"
"}"));
        label_3 = new QLabel(signinpage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 40, 121, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Rasa"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        label_3->setFont(font2);
        label_4 = new QLabel(signinpage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 120, 121, 21));
        label_4->setFont(font2);
        label_5 = new QLabel(signinpage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 200, 121, 21));
        label_5->setFont(font2);
        usernamein = new QLineEdit(signinpage);
        usernamein->setObjectName(QString::fromUtf8("usernamein"));
        usernamein->setGeometry(QRect(30, 70, 291, 31));
        emailin = new QLineEdit(signinpage);
        emailin->setObjectName(QString::fromUtf8("emailin"));
        emailin->setGeometry(QRect(30, 150, 291, 31));
        passwordin = new QLineEdit(signinpage);
        passwordin->setObjectName(QString::fromUtf8("passwordin"));
        passwordin->setGeometry(QRect(30, 230, 291, 31));
        login = new QPushButton(signinpage);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(30, 310, 291, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Rasa"));
        font3.setPointSize(19);
        login->setFont(font3);
        label_6 = new QLabel(Sign_IN);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 130, 341, 371));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/photo/Untitled.jpeg")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(Sign_IN);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(450, 470, 181, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Rasa"));
        font4.setPointSize(14);
        label_7->setFont(font4);
        insignup = new QPushButton(Sign_IN);
        insignup->setObjectName(QString::fromUtf8("insignup"));
        insignup->setGeometry(QRect(620, 470, 111, 31));
        insignup->setFont(font3);
        insignup->setStyleSheet(QString::fromUtf8("QPushButton#insignup {\n"
"    background-color: transparent; \n"
"    color: #0C0909; \n"
"    border: none; \n"
"}\n"
"\n"
"QPushButton#insignup:hover {\n"
"    background-color: transparent; \n"
"    color: rgb(255, 0, 0); \n"
"    border: none; \n"
"}"));

        retranslateUi(Sign_IN);

        QMetaObject::connectSlotsByName(Sign_IN);
    } // setupUi

    void retranslateUi(QWidget *Sign_IN)
    {
        Sign_IN->setWindowTitle(QApplication::translate("Sign_IN", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("Sign_IN", "Welcome Back to Your Account", nullptr));
        signinpage->setTitle(QString());
        label_3->setText(QApplication::translate("Sign_IN", "User Name", nullptr));
        label_4->setText(QApplication::translate("Sign_IN", "E-mail", nullptr));
        label_5->setText(QApplication::translate("Sign_IN", "Password", nullptr));
        login->setText(QApplication::translate("Sign_IN", "Log In", nullptr));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("Sign_IN", "Don't have an account ?", nullptr));
        insignup->setText(QApplication::translate("Sign_IN", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_IN: public Ui_Sign_IN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_H
