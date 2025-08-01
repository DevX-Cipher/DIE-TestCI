/********************************************************************************
** Form generated from reading UI file 'dialogdex.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDEX_H
#define UI_DIALOGDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "dexwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogDEX
{
public:
    QVBoxLayout *verticalLayout;
    DEXWidget *widget;

    void setupUi(QDialog *DialogDEX)
    {
        if (DialogDEX->objectName().isEmpty())
            DialogDEX->setObjectName("DialogDEX");
        DialogDEX->resize(1268, 440);
        DialogDEX->setWindowTitle(QString::fromUtf8("DEX"));
        verticalLayout = new QVBoxLayout(DialogDEX);
        verticalLayout->setObjectName("verticalLayout");
        widget = new DEXWidget(DialogDEX);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);


        retranslateUi(DialogDEX);

        QMetaObject::connectSlotsByName(DialogDEX);
    } // setupUi

    void retranslateUi(QDialog *DialogDEX)
    {
        (void)DialogDEX;
    } // retranslateUi

};

namespace Ui {
    class DialogDEX: public Ui_DialogDEX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDEX_H
