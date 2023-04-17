/********************************************************************************
** Form generated from reading UI file 'dataretrive.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATARETRIVE_H
#define UI_DATARETRIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataretrive
{
public:
    QLabel *label;
    QLineEdit *EmpId;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *EmpName;
    QLineEdit *EmpAge;
    QLineEdit *EmpQuali;
    QLineEdit *EmpContact;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *dataretrive)
    {
        if (dataretrive->objectName().isEmpty())
            dataretrive->setObjectName("dataretrive");
        dataretrive->resize(753, 534);
        label = new QLabel(dataretrive);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 80, 191, 71));
        EmpId = new QLineEdit(dataretrive);
        EmpId->setObjectName("EmpId");
        EmpId->setGeometry(QRect(190, 100, 221, 41));
        pushButton = new QPushButton(dataretrive);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 60, 141, 111));
        layoutWidget = new QWidget(dataretrive);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(290, 200, 361, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        EmpName = new QLineEdit(layoutWidget);
        EmpName->setObjectName("EmpName");

        verticalLayout->addWidget(EmpName);

        EmpAge = new QLineEdit(layoutWidget);
        EmpAge->setObjectName("EmpAge");

        verticalLayout->addWidget(EmpAge);

        EmpQuali = new QLineEdit(layoutWidget);
        EmpQuali->setObjectName("EmpQuali");

        verticalLayout->addWidget(EmpQuali);

        EmpContact = new QLineEdit(layoutWidget);
        EmpContact->setObjectName("EmpContact");

        verticalLayout->addWidget(EmpContact);

        layoutWidget_2 = new QWidget(dataretrive);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(70, 210, 191, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);


        retranslateUi(dataretrive);

        QMetaObject::connectSlotsByName(dataretrive);
    } // setupUi

    void retranslateUi(QDialog *dataretrive)
    {
        dataretrive->setWindowTitle(QCoreApplication::translate("dataretrive", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dataretrive", "Enter Employee ID", nullptr));
        pushButton->setText(QCoreApplication::translate("dataretrive", "Retrive", nullptr));
        label_3->setText(QCoreApplication::translate("dataretrive", "Employee Name", nullptr));
        label_4->setText(QCoreApplication::translate("dataretrive", "Age", nullptr));
        label_5->setText(QCoreApplication::translate("dataretrive", "Qualifications", nullptr));
        label_6->setText(QCoreApplication::translate("dataretrive", "Contact Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataretrive: public Ui_dataretrive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATARETRIVE_H
