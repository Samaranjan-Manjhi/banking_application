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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_up
{
public:
    QLabel *label;
    QLabel *label_2;
    QGroupBox *regform;
    QLabel *accounttype;
    QComboBox *AccType;
    QLabel *branch;
    QComboBox *Brnch;
    QLabel *fistname;
    QLabel *middlename;
    QLabel *lastname;
    QLabel *sal;
    QLabel *name;
    QLabel *phone;
    QLabel *emailid;
    QComboBox *Saluate;
    QComboBox *CC;
    QLabel *dob;
    QDateEdit *dateEdit;
    QLabel *gender;
    QComboBox *Gender;
    QLabel *life;
    QComboBox *Life;
    QLabel *resAdd;
    QLabel *city;
    QComboBox *towncity;
    QComboBox *Countryname;
    QLabel *postalcode_2;
    QLabel *country;
    QLineEdit *postalcode;
    QLineEdit *fullname;
    QLineEdit *phoneno;
    QLineEdit *email;
    QLineEdit *address;
    QLabel *qualification;
    QComboBox *education;
    QLabel *idcard_2;
    QComboBox *idcard;
    QLabel *occupation;
    QComboBox *work;
    QLabel *password_2;
    QLineEdit *password;
    QLabel *note;
    QLabel *username_2;
    QLineEdit *username;
    QPushButton *signin;
    QPushButton *formsumit;

    void setupUi(QWidget *Sign_up)
    {
        if (Sign_up->objectName().isEmpty())
            Sign_up->setObjectName(QString::fromUtf8("Sign_up"));
        Sign_up->resize(774, 606);
        label = new QLabel(Sign_up);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 771, 601));
        label->setPixmap(QPixmap(QString::fromUtf8("images.jpeg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Sign_up);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, -10, 471, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Rasa"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        regform = new QGroupBox(Sign_up);
        regform->setObjectName(QString::fromUtf8("regform"));
        regform->setGeometry(QRect(10, 20, 741, 461));
        regform->setStyleSheet(QString::fromUtf8("QGroupBox#regform {\n"
"    background-color: rgba(255, 255, 255, 0);\n"
"    border: none; \n"
"}\n"
"\n"
"QGroupBox#regform::title {\n"
"    background-color: transparent; \n"
"}"));
        accounttype = new QLabel(regform);
        accounttype->setObjectName(QString::fromUtf8("accounttype"));
        accounttype->setGeometry(QRect(20, 30, 111, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rasa"));
        font1.setPointSize(15);
        accounttype->setFont(font1);
        AccType = new QComboBox(regform);
        AccType->addItem(QString());
        AccType->addItem(QString());
        AccType->addItem(QString());
        AccType->setObjectName(QString::fromUtf8("AccType"));
        AccType->setGeometry(QRect(130, 30, 121, 31));
        branch = new QLabel(regform);
        branch->setObjectName(QString::fromUtf8("branch"));
        branch->setGeometry(QRect(480, 30, 71, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Rasa"));
        font2.setPointSize(16);
        branch->setFont(font2);
        Brnch = new QComboBox(regform);
        Brnch->addItem(QString());
        Brnch->addItem(QString());
        Brnch->addItem(QString());
        Brnch->addItem(QString());
        Brnch->addItem(QString());
        Brnch->setObjectName(QString::fromUtf8("Brnch"));
        Brnch->setGeometry(QRect(550, 30, 171, 31));
        fistname = new QLabel(regform);
        fistname->setObjectName(QString::fromUtf8("fistname"));
        fistname->setGeometry(QRect(280, 70, 81, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Rasa"));
        font3.setPointSize(13);
        fistname->setFont(font3);
        middlename = new QLabel(regform);
        middlename->setObjectName(QString::fromUtf8("middlename"));
        middlename->setGeometry(QRect(390, 70, 101, 21));
        middlename->setFont(font3);
        lastname = new QLabel(regform);
        lastname->setObjectName(QString::fromUtf8("lastname"));
        lastname->setGeometry(QRect(520, 70, 81, 21));
        lastname->setFont(font3);
        sal = new QLabel(regform);
        sal->setObjectName(QString::fromUtf8("sal"));
        sal->setGeometry(QRect(140, 70, 81, 21));
        sal->setFont(font3);
        name = new QLabel(regform);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(20, 90, 51, 31));
        name->setFont(font2);
        phone = new QLabel(regform);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(20, 140, 61, 31));
        phone->setFont(font2);
        emailid = new QLabel(regform);
        emailid->setObjectName(QString::fromUtf8("emailid"));
        emailid->setGeometry(QRect(20, 240, 71, 31));
        emailid->setFont(font2);
        Saluate = new QComboBox(regform);
        Saluate->addItem(QString());
        Saluate->addItem(QString());
        Saluate->addItem(QString());
        Saluate->addItem(QString());
        Saluate->setObjectName(QString::fromUtf8("Saluate"));
        Saluate->setGeometry(QRect(130, 90, 121, 31));
        CC = new QComboBox(regform);
        CC->addItem(QString());
        CC->addItem(QString());
        CC->setObjectName(QString::fromUtf8("CC"));
        CC->setGeometry(QRect(130, 140, 121, 31));
        dob = new QLabel(regform);
        dob->setObjectName(QString::fromUtf8("dob"));
        dob->setGeometry(QRect(20, 190, 91, 31));
        dob->setFont(font2);
        dateEdit = new QDateEdit(regform);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(130, 190, 91, 31));
        gender = new QLabel(regform);
        gender->setObjectName(QString::fromUtf8("gender"));
        gender->setGeometry(QRect(230, 190, 41, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Rasa"));
        font4.setPointSize(17);
        gender->setFont(font4);
        Gender = new QComboBox(regform);
        Gender->addItem(QString());
        Gender->addItem(QString());
        Gender->addItem(QString());
        Gender->addItem(QString());
        Gender->addItem(QString());
        Gender->setObjectName(QString::fromUtf8("Gender"));
        Gender->setGeometry(QRect(270, 190, 161, 31));
        life = new QLabel(regform);
        life->setObjectName(QString::fromUtf8("life"));
        life->setGeometry(QRect(440, 140, 111, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Rasa"));
        font5.setPointSize(14);
        life->setFont(font5);
        Life = new QComboBox(regform);
        Life->addItem(QString());
        Life->addItem(QString());
        Life->addItem(QString());
        Life->addItem(QString());
        Life->addItem(QString());
        Life->addItem(QString());
        Life->setObjectName(QString::fromUtf8("Life"));
        Life->setGeometry(QRect(550, 140, 171, 31));
        resAdd = new QLabel(regform);
        resAdd->setObjectName(QString::fromUtf8("resAdd"));
        resAdd->setGeometry(QRect(20, 290, 111, 31));
        resAdd->setFont(font2);
        city = new QLabel(regform);
        city->setObjectName(QString::fromUtf8("city"));
        city->setGeometry(QRect(20, 340, 101, 31));
        city->setFont(font2);
        towncity = new QComboBox(regform);
        towncity->addItem(QString());
        towncity->addItem(QString());
        towncity->addItem(QString());
        towncity->addItem(QString());
        towncity->addItem(QString());
        towncity->setObjectName(QString::fromUtf8("towncity"));
        towncity->setGeometry(QRect(130, 340, 121, 31));
        Countryname = new QComboBox(regform);
        Countryname->addItem(QString());
        Countryname->addItem(QString());
        Countryname->addItem(QString());
        Countryname->addItem(QString());
        Countryname->setObjectName(QString::fromUtf8("Countryname"));
        Countryname->setGeometry(QRect(600, 340, 121, 31));
        postalcode_2 = new QLabel(regform);
        postalcode_2->setObjectName(QString::fromUtf8("postalcode_2"));
        postalcode_2->setGeometry(QRect(270, 340, 101, 31));
        postalcode_2->setFont(font1);
        country = new QLabel(regform);
        country->setObjectName(QString::fromUtf8("country"));
        country->setGeometry(QRect(530, 340, 71, 31));
        country->setFont(font1);
        postalcode = new QLineEdit(regform);
        postalcode->setObjectName(QString::fromUtf8("postalcode"));
        postalcode->setGeometry(QRect(370, 340, 121, 31));
        QFont font6;
        font6.setPointSize(12);
        postalcode->setFont(font6);
        fullname = new QLineEdit(regform);
        fullname->setObjectName(QString::fromUtf8("fullname"));
        fullname->setGeometry(QRect(260, 90, 461, 31));
        QFont font7;
        font7.setPointSize(13);
        fullname->setFont(font7);
        phoneno = new QLineEdit(regform);
        phoneno->setObjectName(QString::fromUtf8("phoneno"));
        phoneno->setGeometry(QRect(260, 140, 171, 31));
        phoneno->setFont(font6);
        email = new QLineEdit(regform);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(130, 240, 301, 31));
        email->setFont(font6);
        address = new QLineEdit(regform);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(130, 290, 591, 31));
        address->setFont(font6);
        qualification = new QLabel(regform);
        qualification->setObjectName(QString::fromUtf8("qualification"));
        qualification->setGeometry(QRect(20, 390, 111, 31));
        qualification->setFont(font2);
        education = new QComboBox(regform);
        education->addItem(QString());
        education->addItem(QString());
        education->addItem(QString());
        education->addItem(QString());
        education->addItem(QString());
        education->addItem(QString());
        education->addItem(QString());
        education->addItem(QString());
        education->setObjectName(QString::fromUtf8("education"));
        education->setGeometry(QRect(130, 390, 121, 31));
        idcard_2 = new QLabel(regform);
        idcard_2->setObjectName(QString::fromUtf8("idcard_2"));
        idcard_2->setGeometry(QRect(530, 390, 71, 31));
        idcard_2->setFont(font1);
        idcard_2->setAlignment(Qt::AlignCenter);
        idcard = new QComboBox(regform);
        idcard->addItem(QString());
        idcard->addItem(QString());
        idcard->addItem(QString());
        idcard->addItem(QString());
        idcard->addItem(QString());
        idcard->addItem(QString());
        idcard->addItem(QString());
        idcard->setObjectName(QString::fromUtf8("idcard"));
        idcard->setGeometry(QRect(600, 390, 121, 31));
        occupation = new QLabel(regform);
        occupation->setObjectName(QString::fromUtf8("occupation"));
        occupation->setGeometry(QRect(270, 390, 101, 31));
        occupation->setFont(font1);
        work = new QComboBox(regform);
        work->addItem(QString());
        work->addItem(QString());
        work->addItem(QString());
        work->addItem(QString());
        work->addItem(QString());
        work->addItem(QString());
        work->addItem(QString());
        work->setObjectName(QString::fromUtf8("work"));
        work->setGeometry(QRect(370, 390, 121, 31));
        password_2 = new QLabel(regform);
        password_2->setObjectName(QString::fromUtf8("password_2"));
        password_2->setGeometry(QRect(470, 240, 91, 31));
        password_2->setFont(font1);
        password = new QLineEdit(regform);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(550, 240, 171, 31));
        password->setFont(font6);
        note = new QLabel(regform);
        note->setObjectName(QString::fromUtf8("note"));
        note->setGeometry(QRect(30, 430, 691, 20));
        note->setFont(font3);
        note->setAlignment(Qt::AlignCenter);
        username_2 = new QLabel(regform);
        username_2->setObjectName(QString::fromUtf8("username_2"));
        username_2->setGeometry(QRect(460, 190, 101, 31));
        username_2->setFont(font1);
        username = new QLineEdit(regform);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(550, 190, 171, 31));
        username->setFont(font6);
        signin = new QPushButton(Sign_up);
        signin->setObjectName(QString::fromUtf8("signin"));
        signin->setGeometry(QRect(410, 480, 89, 31));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Rasa"));
        font8.setPointSize(18);
        font8.setBold(false);
        font8.setWeight(50);
        signin->setFont(font8);
        formsumit = new QPushButton(Sign_up);
        formsumit->setObjectName(QString::fromUtf8("formsumit"));
        formsumit->setGeometry(QRect(280, 480, 89, 31));
        formsumit->setFont(font8);

        retranslateUi(Sign_up);

        QMetaObject::connectSlotsByName(Sign_up);
    } // setupUi

    void retranslateUi(QWidget *Sign_up)
    {
        Sign_up->setWindowTitle(QApplication::translate("Sign_up", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("Sign_up", "<html><head/><body><p><span style=\" color:#000000;\">Scammer Bank Registration Form</span></p></body></html>", nullptr));
        regform->setTitle(QString());
        accounttype->setText(QApplication::translate("Sign_up", "Account Type", nullptr));
        AccType->setItemText(0, QApplication::translate("Sign_up", "Please Select", nullptr));
        AccType->setItemText(1, QApplication::translate("Sign_up", "Saving", nullptr));
        AccType->setItemText(2, QApplication::translate("Sign_up", "Current", nullptr));

        branch->setText(QApplication::translate("Sign_up", "Branch", nullptr));
        Brnch->setItemText(0, QApplication::translate("Sign_up", "Please Select", nullptr));
        Brnch->setItemText(1, QApplication::translate("Sign_up", "Kandivali", nullptr));
        Brnch->setItemText(2, QApplication::translate("Sign_up", "Malad", nullptr));
        Brnch->setItemText(3, QApplication::translate("Sign_up", "Goregaon", nullptr));
        Brnch->setItemText(4, QApplication::translate("Sign_up", "Ram Mandir", nullptr));

        fistname->setText(QApplication::translate("Sign_up", "First Name", nullptr));
        middlename->setText(QApplication::translate("Sign_up", "Middle Name", nullptr));
        lastname->setText(QApplication::translate("Sign_up", "Last Name", nullptr));
        sal->setText(QApplication::translate("Sign_up", "Salutation", nullptr));
        name->setText(QApplication::translate("Sign_up", "Name", nullptr));
        phone->setText(QApplication::translate("Sign_up", "Phone", nullptr));
        emailid->setText(QApplication::translate("Sign_up", "Email Id", nullptr));
        Saluate->setItemText(0, QApplication::translate("Sign_up", "Please Select", nullptr));
        Saluate->setItemText(1, QApplication::translate("Sign_up", "Mr.", nullptr));
        Saluate->setItemText(2, QApplication::translate("Sign_up", "Ms.", nullptr));
        Saluate->setItemText(3, QApplication::translate("Sign_up", "Mrs.", nullptr));

#ifndef QT_NO_TOOLTIP
        Saluate->setToolTip(QApplication::translate("Sign_up", "<html><head/><body><p>Please Select Salutation</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        CC->setItemText(0, QApplication::translate("Sign_up", "Country Code", nullptr));
        CC->setItemText(1, QApplication::translate("Sign_up", "+91", nullptr));

#ifndef QT_NO_TOOLTIP
        CC->setToolTip(QApplication::translate("Sign_up", "<html><head/><body><p>Please Select Country Code</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        dob->setText(QApplication::translate("Sign_up", "DOB", nullptr));
        gender->setText(QApplication::translate("Sign_up", "Sex", nullptr));
        Gender->setItemText(0, QApplication::translate("Sign_up", "Please Select", nullptr));
        Gender->setItemText(1, QApplication::translate("Sign_up", "Male", nullptr));
        Gender->setItemText(2, QApplication::translate("Sign_up", "Female", nullptr));
        Gender->setItemText(3, QApplication::translate("Sign_up", "TransGender", nullptr));
        Gender->setItemText(4, QApplication::translate("Sign_up", "Other", nullptr));

        life->setText(QApplication::translate("Sign_up", "Marital Status", nullptr));
        Life->setItemText(0, QApplication::translate("Sign_up", "Please Select", nullptr));
        Life->setItemText(1, QApplication::translate("Sign_up", "Single", nullptr));
        Life->setItemText(2, QApplication::translate("Sign_up", "Married", nullptr));
        Life->setItemText(3, QApplication::translate("Sign_up", "Divorced", nullptr));
        Life->setItemText(4, QApplication::translate("Sign_up", "Widowed", nullptr));
        Life->setItemText(5, QApplication::translate("Sign_up", "Seprated", nullptr));

        resAdd->setText(QApplication::translate("Sign_up", "Res. Address", nullptr));
        city->setText(QApplication::translate("Sign_up", "City / Town", nullptr));
        towncity->setItemText(0, QApplication::translate("Sign_up", "Please Select", nullptr));
        towncity->setItemText(1, QApplication::translate("Sign_up", "Mumbai", nullptr));
        towncity->setItemText(2, QApplication::translate("Sign_up", "Ara", nullptr));
        towncity->setItemText(3, QApplication::translate("Sign_up", "Bodh Gaya", nullptr));
        towncity->setItemText(4, QApplication::translate("Sign_up", "Other", nullptr));

        Countryname->setItemText(0, QApplication::translate("Sign_up", "Please Select", nullptr));
        Countryname->setItemText(1, QApplication::translate("Sign_up", "India", nullptr));
        Countryname->setItemText(2, QApplication::translate("Sign_up", "Indonesia", nullptr));
        Countryname->setItemText(3, QApplication::translate("Sign_up", "Vaitname", nullptr));

        postalcode_2->setText(QApplication::translate("Sign_up", "Postal Code", nullptr));
        country->setText(QApplication::translate("Sign_up", "Country", nullptr));
        qualification->setText(QApplication::translate("Sign_up", "Qualification", nullptr));
        education->setItemText(0, QApplication::translate("Sign_up", "Please Select", nullptr));
        education->setItemText(1, QApplication::translate("Sign_up", "Matriculation", nullptr));
        education->setItemText(2, QApplication::translate("Sign_up", "Intermediate", nullptr));
        education->setItemText(3, QApplication::translate("Sign_up", "BE", nullptr));
        education->setItemText(4, QApplication::translate("Sign_up", "BCom", nullptr));
        education->setItemText(5, QApplication::translate("Sign_up", "ME", nullptr));
        education->setItemText(6, QApplication::translate("Sign_up", "MCom", nullptr));
        education->setItemText(7, QApplication::translate("Sign_up", "Other", nullptr));

        idcard_2->setText(QApplication::translate("Sign_up", "ID Card", nullptr));
        idcard->setItemText(0, QApplication::translate("Sign_up", "Please Select", nullptr));
        idcard->setItemText(1, QApplication::translate("Sign_up", "Aadhaar Card", nullptr));
        idcard->setItemText(2, QApplication::translate("Sign_up", "Pan Card", nullptr));
        idcard->setItemText(3, QApplication::translate("Sign_up", "Driving License", nullptr));
        idcard->setItemText(4, QApplication::translate("Sign_up", "School ID", nullptr));
        idcard->setItemText(5, QApplication::translate("Sign_up", "College ID", nullptr));
        idcard->setItemText(6, QApplication::translate("Sign_up", "Other", nullptr));

        occupation->setText(QApplication::translate("Sign_up", "Occupation", nullptr));
        work->setItemText(0, QApplication::translate("Sign_up", "Please Select", nullptr));
        work->setItemText(1, QApplication::translate("Sign_up", "Farmer", nullptr));
        work->setItemText(2, QApplication::translate("Sign_up", "Student", nullptr));
        work->setItemText(3, QApplication::translate("Sign_up", "Doctor", nullptr));
        work->setItemText(4, QApplication::translate("Sign_up", "Army", nullptr));
        work->setItemText(5, QApplication::translate("Sign_up", "Bussiness Man", nullptr));
        work->setItemText(6, QApplication::translate("Sign_up", "Other", nullptr));

        password_2->setText(QApplication::translate("Sign_up", "Password", nullptr));
        note->setText(QApplication::translate("Sign_up", "Note: All fields are required.", nullptr));
        username_2->setText(QApplication::translate("Sign_up", "User Name", nullptr));
        signin->setText(QApplication::translate("Sign_up", "SIGN IN", nullptr));
        formsumit->setText(QApplication::translate("Sign_up", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_up: public Ui_Sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
