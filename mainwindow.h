#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "db/sqlhandler.h"
#include <QMainWindow>
#include <QSharedPointer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();

    bool isConnectToDB();


private:
    Ui::MainWindow *ui;
    QSharedPointer<SqlHandler> sqlhandler = QSharedPointer<SqlHandler>(new SqlHandler());
    void showMainMenu();

};
#endif // MAINWINDOW_H
