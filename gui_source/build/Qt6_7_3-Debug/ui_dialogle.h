/********************************************************************************
** Form generated from reading UI file 'dialogle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLE_H
#define UI_DIALOGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "lewidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogLE
{
public:
    QVBoxLayout *verticalLayout;
    LEWidget *widget;

    void setupUi(QDialog *DialogLE)
    {
        if (DialogLE->objectName().isEmpty())
            DialogLE->setObjectName("DialogLE");
        DialogLE->resize(1217, 421);
        DialogLE->setWindowTitle(QString::fromUtf8("LE"));
        verticalLayout = new QVBoxLayout(DialogLE);
        verticalLayout->setObjectName("verticalLayout");
        widget = new LEWidget(DialogLE);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);


        retranslateUi(DialogLE);

        QMetaObject::connectSlotsByName(DialogLE);
    } // setupUi

    void retranslateUi(QDialog *DialogLE)
    {
        (void)DialogLE;
    } // retranslateUi

};

namespace Ui {
    class DialogLE: public Ui_DialogLE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLE_H
