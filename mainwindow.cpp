#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    if(this->isConnectToDB()) {
        this->showMainMenu();
    }
    else {
        QMessageBox::critical(this, "Ошибка", sqlhandler.get()->lastError());
    }

}


bool MainWindow::isConnectToDB() {
    QString username = ui->loginEdit->text();
    QString password = ui->passwordEdit->text();
    return sqlhandler.get()->createConnection(username, password);
}

void MainWindow::showMainMenu() {
    QMessageBox::information(this, "OK", "Connected");
}
