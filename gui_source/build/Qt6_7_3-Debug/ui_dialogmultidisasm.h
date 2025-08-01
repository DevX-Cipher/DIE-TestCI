/********************************************************************************
** Form generated from reading UI file 'dialogmultidisasm.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMULTIDISASM_H
#define UI_DIALOGMULTIDISASM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xmultidisasmwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogMultiDisasm
{
public:
    QVBoxLayout *verticalLayout;
    XMultiDisasmWidget *widgetDisasm;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogMultiDisasm)
    {
        if (DialogMultiDisasm->objectName().isEmpty())
            DialogMultiDisasm->setObjectName("DialogMultiDisasm");
        DialogMultiDisasm->setWindowModality(Qt::ApplicationModal);
        DialogMultiDisasm->resize(801, 388);
        DialogMultiDisasm->setModal(true);
        verticalLayout = new QVBoxLayout(DialogMultiDisasm);
        verticalLayout->setObjectName("verticalLayout");
        widgetDisasm = new XMultiDisasmWidget(DialogMultiDisasm);
        widgetDisasm->setObjectName("widgetDisasm");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetDisasm->sizePolicy().hasHeightForWidth());
        widgetDisasm->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetDisasm);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogMultiDisasm);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogMultiDisasm);

        QMetaObject::connectSlotsByName(DialogMultiDisasm);
    } // setupUi

    void retranslateUi(QDialog *DialogMultiDisasm)
    {
        DialogMultiDisasm->setWindowTitle(QCoreApplication::translate("DialogMultiDisasm", "Disasm", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogMultiDisasm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMultiDisasm: public Ui_DialogMultiDisasm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMULTIDISASM_H
