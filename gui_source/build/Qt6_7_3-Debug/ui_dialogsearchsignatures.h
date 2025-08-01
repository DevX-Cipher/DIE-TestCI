/********************************************************************************
** Form generated from reading UI file 'dialogsearchsignatures.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSEARCHSIGNATURES_H
#define UI_DIALOGSEARCHSIGNATURES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "searchsignatureswidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogSearchSignatures
{
public:
    QVBoxLayout *verticalLayout;
    SearchSignaturesWidget *searchSignaturesWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogSearchSignatures)
    {
        if (DialogSearchSignatures->objectName().isEmpty())
            DialogSearchSignatures->setObjectName("DialogSearchSignatures");
        DialogSearchSignatures->setWindowModality(Qt::ApplicationModal);
        DialogSearchSignatures->resize(763, 599);
        DialogSearchSignatures->setModal(true);
        verticalLayout = new QVBoxLayout(DialogSearchSignatures);
        verticalLayout->setObjectName("verticalLayout");
        searchSignaturesWidget = new SearchSignaturesWidget(DialogSearchSignatures);
        searchSignaturesWidget->setObjectName("searchSignaturesWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchSignaturesWidget->sizePolicy().hasHeightForWidth());
        searchSignaturesWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(searchSignaturesWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogSearchSignatures);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogSearchSignatures);

        QMetaObject::connectSlotsByName(DialogSearchSignatures);
    } // setupUi

    void retranslateUi(QDialog *DialogSearchSignatures)
    {
        DialogSearchSignatures->setWindowTitle(QCoreApplication::translate("DialogSearchSignatures", "Signatures", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogSearchSignatures", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSearchSignatures: public Ui_DialogSearchSignatures {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSEARCHSIGNATURES_H
