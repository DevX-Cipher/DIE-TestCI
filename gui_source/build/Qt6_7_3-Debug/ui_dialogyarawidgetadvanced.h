/********************************************************************************
** Form generated from reading UI file 'dialogyarawidgetadvanced.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGYARAWIDGETADVANCED_H
#define UI_DIALOGYARAWIDGETADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "yarawidgetadvanced.h"

QT_BEGIN_NAMESPACE

class Ui_DialogYARAWidgetAdvanced
{
public:
    QVBoxLayout *verticalLayout;
    YARAWidgetAdvanced *widgetScan;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogYARAWidgetAdvanced)
    {
        if (DialogYARAWidgetAdvanced->objectName().isEmpty())
            DialogYARAWidgetAdvanced->setObjectName("DialogYARAWidgetAdvanced");
        DialogYARAWidgetAdvanced->setWindowModality(Qt::ApplicationModal);
        DialogYARAWidgetAdvanced->resize(767, 497);
        DialogYARAWidgetAdvanced->setWindowTitle(QString::fromUtf8("Yara"));
        DialogYARAWidgetAdvanced->setModal(true);
        verticalLayout = new QVBoxLayout(DialogYARAWidgetAdvanced);
        verticalLayout->setObjectName("verticalLayout");
        widgetScan = new YARAWidgetAdvanced(DialogYARAWidgetAdvanced);
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

        pushButtonClose = new QPushButton(DialogYARAWidgetAdvanced);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogYARAWidgetAdvanced);

        QMetaObject::connectSlotsByName(DialogYARAWidgetAdvanced);
    } // setupUi

    void retranslateUi(QDialog *DialogYARAWidgetAdvanced)
    {
        pushButtonClose->setText(QCoreApplication::translate("DialogYARAWidgetAdvanced", "Close", nullptr));
        (void)DialogYARAWidgetAdvanced;
    } // retranslateUi

};

namespace Ui {
    class DialogYARAWidgetAdvanced: public Ui_DialogYARAWidgetAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGYARAWIDGETADVANCED_H
