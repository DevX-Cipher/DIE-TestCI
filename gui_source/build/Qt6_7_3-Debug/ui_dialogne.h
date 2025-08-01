/********************************************************************************
** Form generated from reading UI file 'dialogne.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNE_H
#define UI_DIALOGNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "newidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogNE
{
public:
    QVBoxLayout *verticalLayout;
    NEWidget *widget;

    void setupUi(QDialog *DialogNE)
    {
        if (DialogNE->objectName().isEmpty())
            DialogNE->setObjectName("DialogNE");
        DialogNE->resize(1314, 408);
        DialogNE->setWindowTitle(QString::fromUtf8("NE"));
        verticalLayout = new QVBoxLayout(DialogNE);
        verticalLayout->setObjectName("verticalLayout");
        widget = new NEWidget(DialogNE);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);


        retranslateUi(DialogNE);

        QMetaObject::connectSlotsByName(DialogNE);
    } // setupUi

    void retranslateUi(QDialog *DialogNE)
    {
        (void)DialogNE;
    } // retranslateUi

};

namespace Ui {
    class DialogNE: public Ui_DialogNE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNE_H
