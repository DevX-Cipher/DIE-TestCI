/********************************************************************************
** Form generated from reading UI file 'dialogoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOPTIONS_H
#define UI_DIALOGOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "xoptionswidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogOptions
{
public:
    QVBoxLayout *verticalLayout;
    XOptionsWidget *widgetOptions;

    void setupUi(QDialog *DialogOptions)
    {
        if (DialogOptions->objectName().isEmpty())
            DialogOptions->setObjectName(QString::fromUtf8("DialogOptions"));
        DialogOptions->setWindowModality(Qt::WindowModal);
        DialogOptions->resize(509, 722);
        DialogOptions->setModal(true);
        verticalLayout = new QVBoxLayout(DialogOptions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widgetOptions = new XOptionsWidget(DialogOptions);
        widgetOptions->setObjectName(QString::fromUtf8("widgetOptions"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetOptions->sizePolicy().hasHeightForWidth());
        widgetOptions->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetOptions);


        retranslateUi(DialogOptions);

        QMetaObject::connectSlotsByName(DialogOptions);
    } // setupUi

    void retranslateUi(QDialog *DialogOptions)
    {
        DialogOptions->setWindowTitle(QCoreApplication::translate("DialogOptions", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogOptions: public Ui_DialogOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOPTIONS_H
