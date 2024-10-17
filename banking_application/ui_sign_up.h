/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_up
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Sign_up)
    {
        if (Sign_up->objectName().isEmpty())
            Sign_up->setObjectName(QString::fromUtf8("Sign_up"));
        Sign_up->resize(774, 606);
        label = new QLabel(Sign_up);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 751, 581));
        label->setPixmap(QPixmap(QString::fromUtf8("images.jpeg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Sign_up);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 0, 481, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(Sign_up);

        QMetaObject::connectSlotsByName(Sign_up);
    } // setupUi

    void retranslateUi(QWidget *Sign_up)
    {
        Sign_up->setWindowTitle(QApplication::translate("Sign_up", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("Sign_up", "<html><head/><body><p><span style=\" color:#eeeeec;\">Scammer Bank Registration Form</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_up: public Ui_Sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
