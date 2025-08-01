/********************************************************************************
** Form generated from reading UI file 'dialogbinary.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBINARY_H
#define UI_DIALOGBINARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "binarywidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogBinary
{
public:
    QVBoxLayout *verticalLayout;
    BinaryWidget *widget;

    void setupUi(QDialog *DialogBinary)
    {
        if (DialogBinary->objectName().isEmpty())
            DialogBinary->setObjectName(QString::fromUtf8("DialogBinary"));
        DialogBinary->resize(815, 486);
        DialogBinary->setWindowTitle(QString::fromUtf8("Binary"));
        verticalLayout = new QVBoxLayout(DialogBinary);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new BinaryWidget(DialogBinary);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout->addWidget(widget);


        retranslateUi(DialogBinary);

        QMetaObject::connectSlotsByName(DialogBinary);
    } // setupUi

    void retranslateUi(QDialog *DialogBinary)
    {
        (void)DialogBinary;
    } // retranslateUi

};

namespace Ui {
    class DialogBinary: public Ui_DialogBinary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBINARY_H
