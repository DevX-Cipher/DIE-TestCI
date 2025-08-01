/********************************************************************************
** Form generated from reading UI file 'dialogxsymbols.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGXSYMBOLS_H
#define UI_DIALOGXSYMBOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xsymbolswidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogXSymbols
{
public:
    QVBoxLayout *verticalLayout;
    XSymbolsWidget *widgetSymbols;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogXSymbols)
    {
        if (DialogXSymbols->objectName().isEmpty())
            DialogXSymbols->setObjectName("DialogXSymbols");
        DialogXSymbols->setWindowModality(Qt::NonModal);
        DialogXSymbols->resize(646, 315);
        DialogXSymbols->setModal(false);
        verticalLayout = new QVBoxLayout(DialogXSymbols);
        verticalLayout->setObjectName("verticalLayout");
        widgetSymbols = new XSymbolsWidget(DialogXSymbols);
        widgetSymbols->setObjectName("widgetSymbols");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetSymbols->sizePolicy().hasHeightForWidth());
        widgetSymbols->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetSymbols);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogXSymbols);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogXSymbols);

        QMetaObject::connectSlotsByName(DialogXSymbols);
    } // setupUi

    void retranslateUi(QDialog *DialogXSymbols)
    {
        DialogXSymbols->setWindowTitle(QCoreApplication::translate("DialogXSymbols", "Symbols", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogXSymbols", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogXSymbols: public Ui_DialogXSymbols {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGXSYMBOLS_H
