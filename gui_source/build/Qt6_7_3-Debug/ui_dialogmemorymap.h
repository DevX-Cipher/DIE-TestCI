/********************************************************************************
** Form generated from reading UI file 'dialogmemorymap.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMEMORYMAP_H
#define UI_DIALOGMEMORYMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xmemorymapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogMemoryMap
{
public:
    QVBoxLayout *verticalLayout;
    XMemoryMapWidget *widgetMemoryMap;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogMemoryMap)
    {
        if (DialogMemoryMap->objectName().isEmpty())
            DialogMemoryMap->setObjectName("DialogMemoryMap");
        DialogMemoryMap->setWindowModality(Qt::ApplicationModal);
        DialogMemoryMap->resize(763, 599);
        DialogMemoryMap->setModal(true);
        verticalLayout = new QVBoxLayout(DialogMemoryMap);
        verticalLayout->setObjectName("verticalLayout");
        widgetMemoryMap = new XMemoryMapWidget(DialogMemoryMap);
        widgetMemoryMap->setObjectName("widgetMemoryMap");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetMemoryMap->sizePolicy().hasHeightForWidth());
        widgetMemoryMap->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetMemoryMap);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogMemoryMap);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogMemoryMap);

        QMetaObject::connectSlotsByName(DialogMemoryMap);
    } // setupUi

    void retranslateUi(QDialog *DialogMemoryMap)
    {
        DialogMemoryMap->setWindowTitle(QCoreApplication::translate("DialogMemoryMap", "Memory map", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogMemoryMap", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMemoryMap: public Ui_DialogMemoryMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMEMORYMAP_H
