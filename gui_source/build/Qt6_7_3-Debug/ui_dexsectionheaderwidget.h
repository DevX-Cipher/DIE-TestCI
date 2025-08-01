/********************************************************************************
** Form generated from reading UI file 'dexsectionheaderwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEXSECTIONHEADERWIDGET_H
#define UI_DEXSECTIONHEADERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "toolswidget.h"

QT_BEGIN_NAMESPACE

class Ui_DEXSectionHeaderWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxReadonly;
    QSplitter *splitter;
    QTableWidget *tableWidget;
    ToolsWidget *widgetHex;

    void setupUi(QWidget *DEXSectionHeaderWidget)
    {
        if (DEXSectionHeaderWidget->objectName().isEmpty())
            DEXSectionHeaderWidget->setObjectName("DEXSectionHeaderWidget");
        DEXSectionHeaderWidget->resize(588, 359);
        DEXSectionHeaderWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(DEXSectionHeaderWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(DEXSectionHeaderWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(DEXSectionHeaderWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        tableWidget = new QTableWidget(splitter);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter->addWidget(tableWidget);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(24);
        widgetHex = new ToolsWidget(splitter);
        widgetHex->setObjectName("widgetHex");
        widgetHex->setMaximumSize(QSize(16777215, 200));
        splitter->addWidget(widgetHex);

        verticalLayout->addWidget(splitter);


        retranslateUi(DEXSectionHeaderWidget);

        QMetaObject::connectSlotsByName(DEXSectionHeaderWidget);
    } // setupUi

    void retranslateUi(QWidget *DEXSectionHeaderWidget)
    {
        checkBoxReadonly->setText(QCoreApplication::translate("DEXSectionHeaderWidget", "Readonly", nullptr));
        (void)DEXSectionHeaderWidget;
    } // retranslateUi

};

namespace Ui {
    class DEXSectionHeaderWidget: public Ui_DEXSectionHeaderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEXSECTIONHEADERWIDGET_H
