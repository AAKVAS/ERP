#include "sqlhandler.h"

SqlHandler::SqlHandler()
{

}


bool SqlHandler::createConnection(QString username, QString password) {
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName("TS");
    db.setHostName(hostName);
    db.setUserName(username);
    db.setPassword("89535245541");
    return db.open();
}

QString SqlHandler::lastError(){
    return db.lastError().databaseText();
}

