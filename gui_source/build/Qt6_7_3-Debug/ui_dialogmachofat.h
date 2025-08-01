/********************************************************************************
** Form generated from reading UI file 'dialogmachofat.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMACHOFAT_H
#define UI_DIALOGMACHOFAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "machofatwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogMACHOFAT
{
public:
    QVBoxLayout *verticalLayout;
    MACHOFATWidget *widget;

    void setupUi(QDialog *DialogMACHOFAT)
    {
        if (DialogMACHOFAT->objectName().isEmpty())
            DialogMACHOFAT->setObjectName("DialogMACHOFAT");
        DialogMACHOFAT->resize(844, 419);
        DialogMACHOFAT->setWindowTitle(QString::fromUtf8("MACHOFAT"));
        verticalLayout = new QVBoxLayout(DialogMACHOFAT);
        verticalLayout->setObjectName("verticalLayout");
        widget = new MACHOFATWidget(DialogMACHOFAT);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);


        retranslateUi(DialogMACHOFAT);

        QMetaObject::connectSlotsByName(DialogMACHOFAT);
    } // setupUi

    void retranslateUi(QDialog *DialogMACHOFAT)
    {
        (void)DialogMACHOFAT;
    } // retranslateUi

};

namespace Ui {
    class DialogMACHOFAT: public Ui_DialogMACHOFAT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMACHOFAT_H
