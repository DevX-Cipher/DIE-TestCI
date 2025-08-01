/********************************************************************************
** Form generated from reading UI file 'dialoghash.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHASH_H
#define UI_DIALOGHASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xhashwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogHash
{
public:
    QVBoxLayout *verticalLayout;
    XHashWidget *widgetHash;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogHash)
    {
        if (DialogHash->objectName().isEmpty())
            DialogHash->setObjectName("DialogHash");
        DialogHash->setWindowModality(Qt::ApplicationModal);
        DialogHash->resize(763, 599);
        DialogHash->setModal(true);
        verticalLayout = new QVBoxLayout(DialogHash);
        verticalLayout->setObjectName("verticalLayout");
        widgetHash = new XHashWidget(DialogHash);
        widgetHash->setObjectName("widgetHash");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetHash->sizePolicy().hasHeightForWidth());
        widgetHash->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetHash);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogHash);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogHash);

        QMetaObject::connectSlotsByName(DialogHash);
    } // setupUi

    void retranslateUi(QDialog *DialogHash)
    {
        DialogHash->setWindowTitle(QCoreApplication::translate("DialogHash", "Hash", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogHash", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogHash: public Ui_DialogHash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHASH_H
