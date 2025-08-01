/********************************************************************************
** Form generated from reading UI file 'dialogmach.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMACH_H
#define UI_DIALOGMACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "machwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogMACH
{
public:
    QVBoxLayout *verticalLayout;
    MACHWidget *widget;

    void setupUi(QDialog *DialogMACH)
    {
        if (DialogMACH->objectName().isEmpty())
            DialogMACH->setObjectName("DialogMACH");
        DialogMACH->resize(1217, 426);
        DialogMACH->setWindowTitle(QString::fromUtf8("MACH"));
        verticalLayout = new QVBoxLayout(DialogMACH);
        verticalLayout->setObjectName("verticalLayout");
        widget = new MACHWidget(DialogMACH);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);


        retranslateUi(DialogMACH);

        QMetaObject::connectSlotsByName(DialogMACH);
    } // setupUi

    void retranslateUi(QDialog *DialogMACH)
    {
        (void)DialogMACH;
    } // retranslateUi

};

namespace Ui {
    class DialogMACH: public Ui_DialogMACH {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMACH_H
