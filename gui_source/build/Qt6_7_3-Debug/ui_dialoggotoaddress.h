/********************************************************************************
** Form generated from reading UI file 'dialoggotoaddress.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGOTOADDRESS_H
#define UI_DIALOGGOTOADDRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xlineedithex.h"

QT_BEGIN_NAMESPACE

class Ui_DialogGoToAddress
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxValue;
    QHBoxLayout *horizontalLayout_2;
    XLineEditHEX *lineEditValue;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxHex;
    QLabel *labelStatus;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DialogGoToAddress)
    {
        if (DialogGoToAddress->objectName().isEmpty())
            DialogGoToAddress->setObjectName("DialogGoToAddress");
        DialogGoToAddress->setWindowModality(Qt::ApplicationModal);
        DialogGoToAddress->resize(320, 155);
        DialogGoToAddress->setModal(true);
        verticalLayout = new QVBoxLayout(DialogGoToAddress);
        verticalLayout->setObjectName("verticalLayout");
        groupBoxValue = new QGroupBox(DialogGoToAddress);
        groupBoxValue->setObjectName("groupBoxValue");
        horizontalLayout_2 = new QHBoxLayout(groupBoxValue);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        lineEditValue = new XLineEditHEX(groupBoxValue);
        lineEditValue->setObjectName("lineEditValue");

        horizontalLayout_2->addWidget(lineEditValue);


        verticalLayout->addWidget(groupBoxValue);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBoxHex = new QCheckBox(DialogGoToAddress);
        checkBoxHex->setObjectName("checkBoxHex");

        horizontalLayout_3->addWidget(checkBoxHex);

        labelStatus = new QLabel(DialogGoToAddress);
        labelStatus->setObjectName("labelStatus");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelStatus->sizePolicy().hasHeightForWidth());
        labelStatus->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(labelStatus);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(DialogGoToAddress);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(DialogGoToAddress);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogGoToAddress);

        QMetaObject::connectSlotsByName(DialogGoToAddress);
    } // setupUi

    void retranslateUi(QDialog *DialogGoToAddress)
    {
        DialogGoToAddress->setWindowTitle(QCoreApplication::translate("DialogGoToAddress", "Go to address", nullptr));
        groupBoxValue->setTitle(QCoreApplication::translate("DialogGoToAddress", "Address", nullptr));
        checkBoxHex->setText(QCoreApplication::translate("DialogGoToAddress", "Hex", nullptr));
        labelStatus->setText(QString());
        pushButtonOK->setText(QCoreApplication::translate("DialogGoToAddress", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("DialogGoToAddress", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogGoToAddress: public Ui_DialogGoToAddress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGOTOADDRESS_H
