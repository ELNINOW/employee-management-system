/********************************************************************************
** Form generated from reading UI file 'dataentry.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAENTRY_H
#define UI_DATAENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataEntry
{
public:
    QPushButton *btnBack;
    QPushButton *btnQuit;
    QPushButton *btnSave;
    QPushButton *btnClear;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *SEmpID;
    QLineEdit *SEmpName;
    QLineEdit *SEmpAge;
    QLineEdit *SEmpQualification;
    QLineEdit *SEmpContact;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *DataEntry)
    {
        if (DataEntry->objectName().isEmpty())
            DataEntry->setObjectName("DataEntry");
        DataEntry->resize(932, 554);
        btnBack = new QPushButton(DataEntry);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(500, 450, 131, 41));
        btnQuit = new QPushButton(DataEntry);
        btnQuit->setObjectName("btnQuit");
        btnQuit->setGeometry(QRect(670, 450, 141, 41));
        btnSave = new QPushButton(DataEntry);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(750, 120, 151, 91));
        btnClear = new QPushButton(DataEntry);
        btnClear->setObjectName("btnClear");
        btnClear->setGeometry(QRect(750, 240, 151, 91));
        widget = new QWidget(DataEntry);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(360, 90, 361, 311));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SEmpID = new QLineEdit(widget);
        SEmpID->setObjectName("SEmpID");

        verticalLayout->addWidget(SEmpID);

        SEmpName = new QLineEdit(widget);
        SEmpName->setObjectName("SEmpName");

        verticalLayout->addWidget(SEmpName);

        SEmpAge = new QLineEdit(widget);
        SEmpAge->setObjectName("SEmpAge");

        verticalLayout->addWidget(SEmpAge);

        SEmpQualification = new QLineEdit(widget);
        SEmpQualification->setObjectName("SEmpQualification");

        verticalLayout->addWidget(SEmpQualification);

        SEmpContact = new QLineEdit(widget);
        SEmpContact->setObjectName("SEmpContact");

        verticalLayout->addWidget(SEmpContact);

        widget1 = new QWidget(DataEntry);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(140, 100, 191, 291));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);


        retranslateUi(DataEntry);

        QMetaObject::connectSlotsByName(DataEntry);
    } // setupUi

    void retranslateUi(QDialog *DataEntry)
    {
        DataEntry->setWindowTitle(QCoreApplication::translate("DataEntry", "Dialog", nullptr));
        btnBack->setText(QCoreApplication::translate("DataEntry", "Back", nullptr));
        btnQuit->setText(QCoreApplication::translate("DataEntry", "Quit", nullptr));
        btnSave->setText(QCoreApplication::translate("DataEntry", "Save Info", nullptr));
        btnClear->setText(QCoreApplication::translate("DataEntry", "Clear", nullptr));
        label->setText(QCoreApplication::translate("DataEntry", "Employee ID", nullptr));
        label_2->setText(QCoreApplication::translate("DataEntry", "Employee Name", nullptr));
        label_3->setText(QCoreApplication::translate("DataEntry", "Age", nullptr));
        label_4->setText(QCoreApplication::translate("DataEntry", "Qualifications", nullptr));
        label_5->setText(QCoreApplication::translate("DataEntry", "Contact Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataEntry: public Ui_DataEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAENTRY_H
