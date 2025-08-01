/********************************************************************************
** Form generated from reading UI file 'dialogdatainspector.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDATAINSPECTOR_H
#define UI_DIALOGDATAINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include "xlineedithex.h"

QT_BEGIN_NAMESPACE

class Ui_DialogDataInspector
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxEndianness;
    XLineEditHEX *lineEditOffset;
    XLineEditHEX *lineEditSize;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBoxReadonly;
    QTableWidget *tableWidgetDataInspector;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogDataInspector)
    {
        if (DialogDataInspector->objectName().isEmpty())
            DialogDataInspector->setObjectName("DialogDataInspector");
        DialogDataInspector->setWindowModality(Qt::NonModal);
        DialogDataInspector->resize(538, 489);
        DialogDataInspector->setModal(false);
        verticalLayout = new QVBoxLayout(DialogDataInspector);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboBoxEndianness = new QComboBox(DialogDataInspector);
        comboBoxEndianness->setObjectName("comboBoxEndianness");

        horizontalLayout_2->addWidget(comboBoxEndianness);

        lineEditOffset = new XLineEditHEX(DialogDataInspector);
        lineEditOffset->setObjectName("lineEditOffset");
        lineEditOffset->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(lineEditOffset);

        lineEditSize = new XLineEditHEX(DialogDataInspector);
        lineEditSize->setObjectName("lineEditSize");
        lineEditSize->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(lineEditSize);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        checkBoxReadonly = new QCheckBox(DialogDataInspector);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout_2->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidgetDataInspector = new QTableWidget(DialogDataInspector);
        tableWidgetDataInspector->setObjectName("tableWidgetDataInspector");
        tableWidgetDataInspector->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetDataInspector->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetDataInspector->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetDataInspector->horizontalHeader()->setStretchLastSection(true);
        tableWidgetDataInspector->verticalHeader()->setVisible(false);
        tableWidgetDataInspector->verticalHeader()->setMinimumSectionSize(20);
        tableWidgetDataInspector->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(tableWidgetDataInspector);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogDataInspector);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogDataInspector);

        QMetaObject::connectSlotsByName(DialogDataInspector);
    } // setupUi

    void retranslateUi(QDialog *DialogDataInspector)
    {
        DialogDataInspector->setWindowTitle(QCoreApplication::translate("DialogDataInspector", "Inspector", nullptr));
        checkBoxReadonly->setText(QCoreApplication::translate("DialogDataInspector", "Readonly", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogDataInspector", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDataInspector: public Ui_DialogDataInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDATAINSPECTOR_H
