/********************************************************************************
** Form generated from reading UI file 'dialogremove.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREMOVE_H
#define UI_DIALOGREMOVE_H

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

class Ui_DialogRemove
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxOffset;
    QHBoxLayout *horizontalLayout_5;
    XLineEditHEX *lineEditOffset;
    QGroupBox *groupBoxSize;
    QHBoxLayout *horizontalLayout_2;
    XLineEditHEX *lineEditSize;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxHex;
    QLabel *labelStatus;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DialogRemove)
    {
        if (DialogRemove->objectName().isEmpty())
            DialogRemove->setObjectName("DialogRemove");
        DialogRemove->setWindowModality(Qt::ApplicationModal);
        DialogRemove->resize(339, 203);
        DialogRemove->setModal(true);
        verticalLayout = new QVBoxLayout(DialogRemove);
        verticalLayout->setObjectName("verticalLayout");
        groupBoxOffset = new QGroupBox(DialogRemove);
        groupBoxOffset->setObjectName("groupBoxOffset");
        horizontalLayout_5 = new QHBoxLayout(groupBoxOffset);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        lineEditOffset = new XLineEditHEX(groupBoxOffset);
        lineEditOffset->setObjectName("lineEditOffset");

        horizontalLayout_5->addWidget(lineEditOffset);


        verticalLayout->addWidget(groupBoxOffset);

        groupBoxSize = new QGroupBox(DialogRemove);
        groupBoxSize->setObjectName("groupBoxSize");
        horizontalLayout_2 = new QHBoxLayout(groupBoxSize);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        lineEditSize = new XLineEditHEX(groupBoxSize);
        lineEditSize->setObjectName("lineEditSize");

        horizontalLayout_2->addWidget(lineEditSize);


        verticalLayout->addWidget(groupBoxSize);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBoxHex = new QCheckBox(DialogRemove);
        checkBoxHex->setObjectName("checkBoxHex");

        horizontalLayout_3->addWidget(checkBoxHex);

        labelStatus = new QLabel(DialogRemove);
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

        pushButtonOK = new QPushButton(DialogRemove);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(DialogRemove);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogRemove);

        QMetaObject::connectSlotsByName(DialogRemove);
    } // setupUi

    void retranslateUi(QDialog *DialogRemove)
    {
        DialogRemove->setWindowTitle(QCoreApplication::translate("DialogRemove", "Remove", nullptr));
        groupBoxOffset->setTitle(QCoreApplication::translate("DialogRemove", "Offset", nullptr));
        groupBoxSize->setTitle(QCoreApplication::translate("DialogRemove", "Size", nullptr));
        checkBoxHex->setText(QCoreApplication::translate("DialogRemove", "Hex", nullptr));
        labelStatus->setText(QString());
        pushButtonOK->setText(QCoreApplication::translate("DialogRemove", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("DialogRemove", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRemove: public Ui_DialogRemove {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGREMOVE_H
