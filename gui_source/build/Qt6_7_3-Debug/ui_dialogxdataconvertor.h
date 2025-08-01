/********************************************************************************
** Form generated from reading UI file 'dialogxdataconvertor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGXDATACONVERTOR_H
#define UI_DIALOGXDATACONVERTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xdataconvertorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogXDataConvertor
{
public:
    QVBoxLayout *verticalLayout;
    XDataConvertorWidget *widgetDataConvertor;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogXDataConvertor)
    {
        if (DialogXDataConvertor->objectName().isEmpty())
            DialogXDataConvertor->setObjectName("DialogXDataConvertor");
        DialogXDataConvertor->setWindowModality(Qt::ApplicationModal);
        DialogXDataConvertor->resize(935, 462);
        DialogXDataConvertor->setModal(true);
        verticalLayout = new QVBoxLayout(DialogXDataConvertor);
        verticalLayout->setObjectName("verticalLayout");
        widgetDataConvertor = new XDataConvertorWidget(DialogXDataConvertor);
        widgetDataConvertor->setObjectName("widgetDataConvertor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetDataConvertor->sizePolicy().hasHeightForWidth());
        widgetDataConvertor->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetDataConvertor);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(DialogXDataConvertor);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogXDataConvertor);

        QMetaObject::connectSlotsByName(DialogXDataConvertor);
    } // setupUi

    void retranslateUi(QDialog *DialogXDataConvertor)
    {
        DialogXDataConvertor->setWindowTitle(QCoreApplication::translate("DialogXDataConvertor", "Data convertor", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogXDataConvertor", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogXDataConvertor: public Ui_DialogXDataConvertor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGXDATACONVERTOR_H
