#include "sign_in.h"
#include "ui_sign_in.h"
#include "sign_up.h"
#include <QLineEdit>
#include "dashboard.h"
#include <QPropertyAnimation>
#include <QMessageBox>
#include <QSqlError>
#include <QStackedWidget>

Sign_IN::Sign_IN(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sign_IN)
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

    //Placeholder
    QFont font("Rasa", 14);
    ui->usernamein->setFont(font);
    ui->emailin->setFont(font);
    ui->passwordin->setFont(font);
    ui->usernamein->setPlaceholderText("Enter Your User Name");
    ui->emailin->setPlaceholderText("Enter Your E-mail ID");
    ui->passwordin->setPlaceholderText("Enter Your Password");
}

Sign_IN::~Sign_IN()
{
    delete ui;
}

void Sign_IN::on_insignup_clicked()
{
    Sign_up *signUpform = new Sign_up(this); // Set parent to manage memory
    signUpform->show();
}

void Sign_IN::on_login_clicked()
{/*
    QString username = ui->usernamein->text().trimmed();
    QString email = ui->emailin->text().trimmed();
    QString password = ui->passwordin->text();
    QString dbName = "/tmp/banking_application1.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);

    // Attempt to open the database
    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Failed to open the database.");
        return;
    }

    // Prepare and execute the query to check credentials
    QSqlQuery query;
    query.prepare("SELECT name FROM accounts WHERE username = :username AND email_id = :email AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":email", email);
    query.bindValue(":password", password);

    if (!query.exec()) {
        QMessageBox::warning(this, "Query Error", query.lastError().text());
        db.close();
        return;
    }
    if (query.next()) {
        QString name = query.value(0).toString(); // Get the user's name
        QMessageBox::information(this, "Welcome", "Welcome, " + name + "!");

        // Proceed to the dashboard
        Dashboard *sys = new Dashboard(this);
        sys->show();

        // Ensure the sign-in window closes or hides
        //this->hide(); // Hide instead of close if you want to manage the object
    } else {
        QMessageBox::warning(this, "Login Error", "Invalid username, email, or password.");
    }

    // Close the database
    db.close();
    */
    Dashboard *sys = new Dashboard(this);
    sys->show();
}
