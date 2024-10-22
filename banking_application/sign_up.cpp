#include "sign_up.h"
#include "ui_sign_up.h"
#include "scammerbank.h"
#include <QPropertyAnimation>
#include "sign_in.h"
#include <QLineEdit>
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QComboBox>
#include <QPushButton>
#include <QMessageBox>
#include <QDateEdit>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QFile>

Sign_up::Sign_up(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sign_up)
{
    ui->setupUi(this);

    // Create and configure the label
    QLabel *scrollLabel = new QLabel("WELCOME TO SCAMMER BANK", this);
    scrollLabel->setStyleSheet("font-size: 24px; font-weight: bold; color: black;");
    scrollLabel->setFont(QFont("Rasa", 24));
    scrollLabel->adjustSize();
    setFixedSize(764, 539);

    // Position the label
    scrollLabel->setGeometry(this->width(), this->height() - 30, scrollLabel->width(), scrollLabel->height());
    scrollLabel->show();

    // Animation for scrolling
    QPropertyAnimation *animation = new QPropertyAnimation(scrollLabel, "pos");
    animation->setDuration(10000); // Duration for one complete scroll
    animation->setStartValue(QPoint(this->width(), scrollLabel->y()));
    animation->setEndValue(QPoint(-scrollLabel->width(), scrollLabel->y()));
    animation->setLoopCount(-1); // Loop indefinitely
    animation->start();

    // Placeholder setup
    ui->fullname->setPlaceholderText("Enter Your Full Name");
    QFont font("Rasa", 15);
    ui->fullname->setFont(font);
    ui->phoneno->setPlaceholderText("Enter Phone No.");
    ui->username->setPlaceholderText("Enter User Name");
    ui->password->setPlaceholderText("Enter Password");
    ui->email->setPlaceholderText("Enter E-mail ID");
    ui->postalcode->setPlaceholderText("Enter Code");
    ui->address->setPlaceholderText("Enter Your Full Address");
}

Sign_up::~Sign_up()
{
    delete ui;
}

void Sign_up::on_signin_clicked()
{
    Sign_IN *signInPage = new Sign_IN(this); // Set parent to manage memory
    signInPage->show();
}

void Sign_up::on_formsumit_clicked()
{
    QString dbName = "/tmp/banking_application1.db";
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(dbName);

        // Attempt to open the database
        if (!db.open()) {
            QMessageBox::critical(this, "Database Error", "Failed to open the database.");
            return;
        }

        // Check if the accounts table exists and create it if not
        QSqlQuery query;
        query.exec("CREATE TABLE IF NOT EXISTS accounts ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "account_type TEXT, "
                    "branch TEXT, "
                    "salutation TEXT, "
                    "name TEXT, "
                    "phone_code TEXT, "
                    "phone_no TEXT, "
                    "marital_status TEXT, "
                    "dob DATE, "
                    "sex TEXT, "
                    "username TEXT, "
                    "email_id TEXT, "
                    "password TEXT, "
                    "address TEXT, "
                    "city TEXT, "
                    "postal_code TEXT, "
                    "country TEXT, "
                    "qualification TEXT, "
                    "occupation TEXT, "
                    "id_card TEXT)");

        if (query.lastError().isValid()) {
            QMessageBox::critical(this, "Database Error", "Failed to create table: " + query.lastError().text());
            db.close();
            return;
        }

        // Prepare the insertion data
        QString accountType = ui->AccType->currentText();
        QString branch = ui->Brnch->currentText();
        QString salute = ui->Saluate->currentText();
        QString full_name = ui->fullname->text();
        QString phone_code = ui->CC->currentText();
        QString phone_no = ui->phoneno->text();
        QString life = ui->Life->currentText();
        QString dob = ui->dateEdit->date().toString("dd-MM-yy");
        QString gender = ui->Gender->currentText();
        QString user_name = ui->username->text();
        QString email = ui->email->text();
        QString passwrd = ui->password->text();
        QString add = ui->address->text();
        QString town = ui->towncity->currentText();
        QString postalcd = ui->postalcode->text();
        QString country_name = ui->Countryname->currentText();
        QString edu = ui->education->currentText();
        QString wrk = ui->work->currentText();
        QString id_card = ui->idcard->currentText();

        // Prepare and execute the SQL insertion query
        query.prepare("INSERT INTO accounts (account_type, branch, salutation, name, phone_code, phone_no, "
                      "marital_status, dob, sex, username, email_id, password, address, city, postal_code, "
                      "country, qualification, occupation, id_card) "
                      "VALUES (:accountType, :branch, :salute, :full_name, :phone_code, :phone_no, "
                      ":life, :dob, :gender, :user_name, :email, :passwrd, :add, :town, :postalcd, "
                      ":country_name, :edu, :wrk, :id_card)");

        query.bindValue(":accountType", accountType);
        query.bindValue(":branch", branch);
        query.bindValue(":salute", salute);
        query.bindValue(":full_name", full_name);
        query.bindValue(":phone_code", phone_code);
        query.bindValue(":phone_no", phone_no);
        query.bindValue(":life", life);
        query.bindValue(":dob", dob);
        query.bindValue(":gender", gender);
        query.bindValue(":user_name", user_name);
        query.bindValue(":email", email);
        query.bindValue(":passwrd", passwrd);
        query.bindValue(":add", add);
        query.bindValue(":town", town);
        query.bindValue(":postalcd", postalcd);
        query.bindValue(":country_name", country_name);
        query.bindValue(":edu", edu);
        query.bindValue(":wrk", wrk);
        query.bindValue(":id_card", id_card);

        // Execute the query and handle errors
        if (!query.exec()) {
            QMessageBox::warning(this, "Insert Error", query.lastError().text());
        } else {
            QMessageBox::information(this, "Success", "Data saved successfully!");
        }

        // Close the database
        db.close();

        // Clear all fields after insertion
        ui->AccType->setCurrentIndex(0); // Reset to default
        ui->Brnch->setCurrentIndex(0);
        ui->Saluate->setCurrentIndex(0);
        ui->fullname->clear();
        ui->CC->setCurrentIndex(0);
        ui->phoneno->clear();
        ui->Life->setCurrentIndex(0);
        ui->dateEdit->setDate(QDate::currentDate()); // Reset to today's date
        ui->Gender->setCurrentIndex(0);
        ui->username->clear();
        ui->email->clear();
        ui->password->clear();
        ui->address->clear();
        ui->towncity->setCurrentIndex(0);
        ui->postalcode->clear();
        ui->Countryname->setCurrentIndex(0);
        ui->education->setCurrentIndex(0);
        ui->work->setCurrentIndex(0);
        ui->idcard->setCurrentIndex(0);
}
