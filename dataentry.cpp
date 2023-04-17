#include "dataentry.h"
#include "ui_dataentry.h"
#include "qwidget.h"
#include <QDebug>
#include <QLineEdit>
#include <QSqlQuery>






void addValues(int id,QString Name,int Age,QString Qualifications,int Contact ){




    QSqlQuery qry;



    qry.prepare("INSERT INTO testtable("
                "ID,"
                "Name,"
                "Age,"
                "Qualifications,"
                "Contact,"
                "VALUES (?,?,?,?,?)");




  qry.addBindValue(id);
  qry.addBindValue(Name);
  qry.addBindValue(Age);
  qry.addBindValue(Qualifications);
  qry.addBindValue(Contact);

  if (!qry.exec()){
      qDebug()<< "Error adding values to db";

  }
}

DataEntry::DataEntry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataEntry)
{
    ui->setupUi(this);
}

DataEntry::~DataEntry()
{
    delete ui;
}

void DataEntry::on_pushButton_3_clicked()
{

}


void DataEntry::on_btnSave_clicked()
{




    int id = ui->SEmpID->text().toInt();
    QString Name = ui->SEmpName->text();
    int Age = ui->SEmpAge->text().toInt();
    QString Qualifications = ui->SEmpQualification->text();
    int Contact = ui->SEmpContact->text().toInt();


 addValues(id,Name,Age,Qualifications,Contact);






}

