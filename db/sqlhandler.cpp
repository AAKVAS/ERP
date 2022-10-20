#include "sqlhandler.h"

SqlHandler::SqlHandler()
{

}


bool SqlHandler::createConnection(QString username, QString password) {
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName(dbName);
    db.setHostName(hostName);
    db.setUserName(username);
    db.setPassword(password);
    return db.open();
}

QString SqlHandler::lastError(){
    return db.lastError().databaseText();
}

