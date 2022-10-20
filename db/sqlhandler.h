#ifndef SQLHANDLER_H
#define SQLHANDLER_H
#include <QtSql/QSqlDatabase>
#include <QSqlError>

class SqlHandler
{
public:
    SqlHandler();

    bool createConnection(QString username, QString password);
    QString lastError();

private:
    QSqlDatabase db;
    QString hostName = "/var/run/postgresql";
    QString dbName = "TS";
};

#endif // SQLHANDLER_H
