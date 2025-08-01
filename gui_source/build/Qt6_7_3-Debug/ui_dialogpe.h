/********************************************************************************
** Form generated from reading UI file 'dialogpe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPE_H
#define UI_DIALOGPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "pewidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogPE
{
public:
    QVBoxLayout *verticalLayout;
    PEWidget *widget;

    void setupUi(QDialog *DialogPE)
    {
        if (DialogPE->objectName().isEmpty())
            DialogPE->setObjectName("DialogPE");
        DialogPE->resize(1348, 485);
        DialogPE->setWindowTitle(QString::fromUtf8("PE"));
        verticalLayout = new QVBoxLayout(DialogPE);
        verticalLayout->setObjectName("verticalLayout");
        widget = new PEWidget(DialogPE);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);


        retranslateUi(DialogPE);

        QMetaObject::connectSlotsByName(DialogPE);
    } // setupUi

    void retranslateUi(QDialog *DialogPE)
    {
        (void)DialogPE;
    } // retranslateUi

};

namespace Ui {
    class DialogPE: public Ui_DialogPE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPE_H
