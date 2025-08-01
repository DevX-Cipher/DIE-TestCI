/********************************************************************************
** Form generated from reading UI file 'dialogmsdos.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMSDOS_H
#define UI_DIALOGMSDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "msdoswidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogMSDOS
{
public:
    QVBoxLayout *verticalLayout;
    MSDOSWidget *widget;

    void setupUi(QDialog *DialogMSDOS)
    {
        if (DialogMSDOS->objectName().isEmpty())
            DialogMSDOS->setObjectName("DialogMSDOS");
        DialogMSDOS->resize(1258, 429);
        DialogMSDOS->setWindowTitle(QString::fromUtf8("MSDOS"));
        verticalLayout = new QVBoxLayout(DialogMSDOS);
        verticalLayout->setObjectName("verticalLayout");
        widget = new MSDOSWidget(DialogMSDOS);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);


        retranslateUi(DialogMSDOS);

        QMetaObject::connectSlotsByName(DialogMSDOS);
    } // setupUi

    void retranslateUi(QDialog *DialogMSDOS)
    {
        (void)DialogMSDOS;
    } // retranslateUi

};

namespace Ui {
    class DialogMSDOS: public Ui_DialogMSDOS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMSDOS_H
