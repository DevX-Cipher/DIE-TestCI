/********************************************************************************
** Form generated from reading UI file 'dialogsearchvalues.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSEARCHVALUES_H
#define UI_DIALOGSEARCHVALUES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "searchvalueswidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogSearchValues
{
public:
    QVBoxLayout *verticalLayout;
    SearchValuesWidget *widgetSearchValues;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogSearchValues)
    {
        if (DialogSearchValues->objectName().isEmpty())
            DialogSearchValues->setObjectName("DialogSearchValues");
        DialogSearchValues->setWindowModality(Qt::NonModal);
        DialogSearchValues->resize(763, 599);
        DialogSearchValues->setModal(false);
        verticalLayout = new QVBoxLayout(DialogSearchValues);
        verticalLayout->setObjectName("verticalLayout");
        widgetSearchValues = new SearchValuesWidget(DialogSearchValues);
        widgetSearchValues->setObjectName("widgetSearchValues");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetSearchValues->sizePolicy().hasHeightForWidth());
        widgetSearchValues->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetSearchValues);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogSearchValues);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogSearchValues);

        QMetaObject::connectSlotsByName(DialogSearchValues);
    } // setupUi

    void retranslateUi(QDialog *DialogSearchValues)
    {
        DialogSearchValues->setWindowTitle(QCoreApplication::translate("DialogSearchValues", "Search", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogSearchValues", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSearchValues: public Ui_DialogSearchValues {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSEARCHVALUES_H
