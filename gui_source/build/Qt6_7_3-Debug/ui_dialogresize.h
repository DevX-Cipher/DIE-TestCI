/********************************************************************************
** Form generated from reading UI file 'dialogresize.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRESIZE_H
#define UI_DIALOGRESIZE_H

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

class Ui_DialogResize
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

    void setupUi(QDialog *DialogResize)
    {
        if (DialogResize->objectName().isEmpty())
            DialogResize->setObjectName("DialogResize");
        DialogResize->setWindowModality(Qt::ApplicationModal);
        DialogResize->resize(320, 155);
        DialogResize->setModal(true);
        verticalLayout = new QVBoxLayout(DialogResize);
        verticalLayout->setObjectName("verticalLayout");
        groupBoxValue = new QGroupBox(DialogResize);
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
        checkBoxHex = new QCheckBox(DialogResize);
        checkBoxHex->setObjectName("checkBoxHex");

        horizontalLayout_3->addWidget(checkBoxHex);

        labelStatus = new QLabel(DialogResize);
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

        pushButtonOK = new QPushButton(DialogResize);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(DialogResize);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogResize);

        QMetaObject::connectSlotsByName(DialogResize);
    } // setupUi

    void retranslateUi(QDialog *DialogResize)
    {
        DialogResize->setWindowTitle(QCoreApplication::translate("DialogResize", "Resize", nullptr));
        groupBoxValue->setTitle(QCoreApplication::translate("DialogResize", "Size", nullptr));
        checkBoxHex->setText(QCoreApplication::translate("DialogResize", "Hex", nullptr));
        labelStatus->setText(QString());
        pushButtonOK->setText(QCoreApplication::translate("DialogResize", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("DialogResize", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogResize: public Ui_DialogResize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRESIZE_H
