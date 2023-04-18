#include "dataentry.h"
#include "ui_dataentry.h"
#include "qwidget.h"
#include <QDebug>
#include <QLineEdit>
#include <QSqlQuery>
#include <iostream>




using namespace std;

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

    cout << id << endl;
    cout << Name.toStdString() << endl;
    cout << Age << endl;
    cout << Qualifications.toStdString() << endl;
    cout << Contact << endl;


 addValues(id,Name,Age,Qualifications,Contact);






}

// Assuming you have already created and configured your QSqlDatabase object for connecting to the SQL database

// In your QDialog class header file:
class MyDialog : public QDialog
{
    Q_OBJECT

public:
    // ... constructor, destructor, etc.

private slots:
    void onButtonClicked(); // Slot to handle button click event

private:
    // ... other member variables
    QPushButton* m_button; // Button widget
};

// In your QDialog class implementation file:
//MyDialog::MyDialog(QWidget* parent) : QDialog(parent)
//{
//    // ... dialog setup, including creating and configuring the m_button widget

//    // Connect button's clicked signal to onButtonClicked() slot
//    connect(m_button, &QPushButton::clicked, this, &MyDialog::onButtonClicked);
//}

void MyDialog::onButtonClicked()
{
//    // Get data from dialog's UI elements, e.g. QLineEdit, QComboBox, etc.
//    QString data1 = QlineEdit->text();
//    int data2 = Qcombo->currentIndex();

//    // Prepare an SQL query to insert data into the database
//    QSqlQuery query;
//    query.prepare("INSERT INTO my_table (column1, column2) VALUES (?, ?)");
//    query.addBindValue(data1);
//    query.addBindValue(data2);

//    // Execute the query
//    if (query.exec()) {
//        // Data inserted successfully
//        qDebug() << "Data inserted into database!";
//    } else {
//        // Error occurred while inserting data
//        qDebug() << "Error inserting data into database: " << query.lastError().text();
//    }
}
