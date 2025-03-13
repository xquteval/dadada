#include "mainwindow.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Futuristic Login Screen");
    setFixedSize(400, 300);

    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    QLabel *titleLabel = new QLabel("Welcome to the Future", this);
    titleLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(titleLabel);

    QLineEdit *usernameInput = new QLineEdit(this);
    usernameInput->setPlaceholderText("Username");
    layout->addWidget(usernameInput);

    QLineEdit *passwordInput = new QLineEdit(this);
    passwordInput->setPlaceholderText("Password");
    passwordInput->setEchoMode(QLineEdit::Password);
    layout->addWidget(passwordInput);

    QPushButton *loginButton = new QPushButton("Login", this);
    layout->addWidget(loginButton);

    connect(loginButton, &QPushButton::clicked, this, [this, usernameInput, passwordInput]() {
        QString username = usernameInput->text();
        QString password = passwordInput->text();

        if (username == "admin" && password == "password") {
            QMessageBox::information(this, "Login Successful", "Welcome!");
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
        }
    });
}