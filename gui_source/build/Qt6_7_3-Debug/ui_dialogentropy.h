/********************************************************************************
** Form generated from reading UI file 'dialogentropy.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGENTROPY_H
#define UI_DIALOGENTROPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xentropywidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogEntropy
{
public:
    QVBoxLayout *verticalLayout;
    XEntropyWidget *widgetEntropy;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogEntropy)
    {
        if (DialogEntropy->objectName().isEmpty())
            DialogEntropy->setObjectName("DialogEntropy");
        DialogEntropy->setWindowModality(Qt::ApplicationModal);
        DialogEntropy->resize(763, 599);
        DialogEntropy->setModal(true);
        verticalLayout = new QVBoxLayout(DialogEntropy);
        verticalLayout->setObjectName("verticalLayout");
        widgetEntropy = new XEntropyWidget(DialogEntropy);
        widgetEntropy->setObjectName("widgetEntropy");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetEntropy->sizePolicy().hasHeightForWidth());
        widgetEntropy->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetEntropy);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogEntropy);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogEntropy);

        QMetaObject::connectSlotsByName(DialogEntropy);
    } // setupUi

    void retranslateUi(QDialog *DialogEntropy)
    {
        DialogEntropy->setWindowTitle(QCoreApplication::translate("DialogEntropy", "Entropy", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogEntropy", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogEntropy: public Ui_DialogEntropy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGENTROPY_H
