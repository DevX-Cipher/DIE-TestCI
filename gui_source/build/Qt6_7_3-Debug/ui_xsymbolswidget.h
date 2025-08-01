/********************************************************************************
** Form generated from reading UI file 'xsymbolswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSYMBOLSWIDGET_H
#define UI_XSYMBOLSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_XSymbolsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxType;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonSaveSymbols;
    QToolButton *toolButtonReload;
    XTableView *tableViewSymbols;

    void setupUi(QWidget *XSymbolsWidget)
    {
        if (XSymbolsWidget->objectName().isEmpty())
            XSymbolsWidget->setObjectName("XSymbolsWidget");
        XSymbolsWidget->resize(676, 400);
        verticalLayout = new QVBoxLayout(XSymbolsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxType = new QComboBox(XSymbolsWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonSaveSymbols = new QToolButton(XSymbolsWidget);
        toolButtonSaveSymbols->setObjectName("toolButtonSaveSymbols");

        horizontalLayout->addWidget(toolButtonSaveSymbols);

        toolButtonReload = new QToolButton(XSymbolsWidget);
        toolButtonReload->setObjectName("toolButtonReload");

        horizontalLayout->addWidget(toolButtonReload);


        verticalLayout->addLayout(horizontalLayout);

        tableViewSymbols = new XTableView(XSymbolsWidget);
        tableViewSymbols->setObjectName("tableViewSymbols");
        tableViewSymbols->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);
        tableViewSymbols->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableViewSymbols->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableViewSymbols->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableViewSymbols->setSortingEnabled(true);
        tableViewSymbols->horizontalHeader()->setStretchLastSection(true);
        tableViewSymbols->verticalHeader()->setVisible(false);
        tableViewSymbols->verticalHeader()->setMinimumSectionSize(20);
        tableViewSymbols->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(tableViewSymbols);


        retranslateUi(XSymbolsWidget);

        QMetaObject::connectSlotsByName(XSymbolsWidget);
    } // setupUi

    void retranslateUi(QWidget *XSymbolsWidget)
    {
        XSymbolsWidget->setWindowTitle(QCoreApplication::translate("XSymbolsWidget", "Form", nullptr));
        toolButtonSaveSymbols->setText(QCoreApplication::translate("XSymbolsWidget", "Save", nullptr));
        toolButtonReload->setText(QCoreApplication::translate("XSymbolsWidget", "Reload", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSymbolsWidget: public Ui_XSymbolsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSYMBOLSWIDGET_H
