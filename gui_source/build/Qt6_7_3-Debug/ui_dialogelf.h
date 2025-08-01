/********************************************************************************
** Form generated from reading UI file 'dialogelf.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGELF_H
#define UI_DIALOGELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "elfwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogELF
{
public:
    QVBoxLayout *verticalLayout;
    ELFWidget *widget;

    void setupUi(QDialog *DialogELF)
    {
        if (DialogELF->objectName().isEmpty())
            DialogELF->setObjectName("DialogELF");
        DialogELF->resize(1177, 443);
        DialogELF->setWindowTitle(QString::fromUtf8("ELF"));
        verticalLayout = new QVBoxLayout(DialogELF);
        verticalLayout->setObjectName("verticalLayout");
        widget = new ELFWidget(DialogELF);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);


        retranslateUi(DialogELF);

        QMetaObject::connectSlotsByName(DialogELF);
    } // setupUi

    void retranslateUi(QDialog *DialogELF)
    {
        (void)DialogELF;
    } // retranslateUi

};

namespace Ui {
    class DialogELF: public Ui_DialogELF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGELF_H
