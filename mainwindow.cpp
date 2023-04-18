#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dataentry.h"
#include "dataretrive.h"
#include <QDebug>
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


void MainWindow::on_pushButton_clicked()
{
//    QSqlDatabase db;
//    db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("127.0.0.1");
//    db.setDatabaseName("ABC");
//    db.setUserName("root");
//    db.setPassword("Niceday@97");


//    if(db.open()){

//        QMessageBox::information(this,"Connection","Database Connected successfully");

//    }

//        else {
//            QMessageBox::information(this,"Disconnection","Database disconnected");


//        }
database = QSqlDatabase::addDatabase("QPSQL");
database.setHostName("localhost");
database.setUserName("qt");
database.setPassword("11223344");
database.setDatabaseName("EmployeeDatabase");


if (database.open()){

 QMessageBox::information(this,"Connection","Connection Success!");
 //loadTable();

}

else{

 QMessageBox::information(this,"No Connection","No Connection Success!");
database.lastError().text();
}




}


void MainWindow::on_pushButton_2_clicked()
{
    DataEntry dataentry;
    dataentry.setModal(true);
    dataentry.exec();

}


void MainWindow::on_pushButton_3_clicked()
{
  dataretrive retrive;
  retrive.setModal(true);
  retrive.exec();


}

