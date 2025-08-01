/********************************************************************************
** Form generated from reading UI file 'dialognfdwidgetadvanced.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNFDWIDGETADVANCED_H
#define UI_DIALOGNFDWIDGETADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "nfdwidgetadvanced.h"

QT_BEGIN_NAMESPACE

class Ui_DialogNFDWidgetAdvanced
{
public:
    QVBoxLayout *verticalLayout;
    NFDWidgetAdvanced *widgetScan;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogNFDWidgetAdvanced)
    {
        if (DialogNFDWidgetAdvanced->objectName().isEmpty())
            DialogNFDWidgetAdvanced->setObjectName("DialogNFDWidgetAdvanced");
        DialogNFDWidgetAdvanced->setWindowModality(Qt::ApplicationModal);
        DialogNFDWidgetAdvanced->resize(429, 309);
        DialogNFDWidgetAdvanced->setWindowTitle(QString::fromUtf8("Nauz File Detector"));
        DialogNFDWidgetAdvanced->setModal(true);
        verticalLayout = new QVBoxLayout(DialogNFDWidgetAdvanced);
        verticalLayout->setObjectName("verticalLayout");
        widgetScan = new NFDWidgetAdvanced(DialogNFDWidgetAdvanced);
        widgetScan->setObjectName("widgetScan");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetScan->sizePolicy().hasHeightForWidth());
        widgetScan->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetScan);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogNFDWidgetAdvanced);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogNFDWidgetAdvanced);

        QMetaObject::connectSlotsByName(DialogNFDWidgetAdvanced);
    } // setupUi

    void retranslateUi(QDialog *DialogNFDWidgetAdvanced)
    {
        pushButtonClose->setText(QCoreApplication::translate("DialogNFDWidgetAdvanced", "Close", nullptr));
        (void)DialogNFDWidgetAdvanced;
    } // retranslateUi

};

namespace Ui {
    class DialogNFDWidgetAdvanced: public Ui_DialogNFDWidgetAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNFDWIDGETADVANCED_H
