#include "mainwindow.h"

#include <QApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "QLineEdit"
#include <QDebug>
#include <dataentry.h>


void addValues(int id,QString Name,int Age,QString Qualifications,int Contact );



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("bigblue");
//    db.setDatabaseName("flightdb");
//    db.setUserName("acarlson");
//    db.setPassword("1uTbSbAs");
//    bool ok = db.open();

//    QSqlDatabase db;
//    db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("localhost");
//    db.setDatabaseName("employerinfo");
//    db.setUserName("root");
//    db.setPassword("");





   return a.exec();
}
