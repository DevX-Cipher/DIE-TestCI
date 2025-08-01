/********************************************************************************
** Form generated from reading UI file 'dialognfdscan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNFDSCAN_H
#define UI_DIALOGNFDSCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "nfdwidgetadvanced.h"

QT_BEGIN_NAMESPACE

class Ui_DialogNFDScan
{
public:
    QVBoxLayout *verticalLayout;
    NFDWidgetAdvanced *widgetResult;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogNFDScan)
    {
        if (DialogNFDScan->objectName().isEmpty())
            DialogNFDScan->setObjectName("DialogNFDScan");
        DialogNFDScan->setWindowModality(Qt::ApplicationModal);
        DialogNFDScan->resize(557, 315);
        DialogNFDScan->setModal(true);
        verticalLayout = new QVBoxLayout(DialogNFDScan);
        verticalLayout->setObjectName("verticalLayout");
        widgetResult = new NFDWidgetAdvanced(DialogNFDScan);
        widgetResult->setObjectName("widgetResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetResult->sizePolicy().hasHeightForWidth());
        widgetResult->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetResult);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogNFDScan);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogNFDScan);

        QMetaObject::connectSlotsByName(DialogNFDScan);
    } // setupUi

    void retranslateUi(QDialog *DialogNFDScan)
    {
        DialogNFDScan->setWindowTitle(QCoreApplication::translate("DialogNFDScan", "Scan", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogNFDScan", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogNFDScan: public Ui_DialogNFDScan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNFDSCAN_H
