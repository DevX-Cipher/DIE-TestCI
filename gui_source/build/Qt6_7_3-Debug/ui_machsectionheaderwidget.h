/********************************************************************************
** Form generated from reading UI file 'machsectionheaderwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHSECTIONHEADERWIDGET_H
#define UI_MACHSECTIONHEADERWIDGET_H

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

class Ui_MACHSectionHeaderWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxReadonly;
    QSplitter *splitter;
    QTableWidget *tableWidget;
    ToolsWidget *widgetHex;

    void setupUi(QWidget *MACHSectionHeaderWidget)
    {
        if (MACHSectionHeaderWidget->objectName().isEmpty())
            MACHSectionHeaderWidget->setObjectName("MACHSectionHeaderWidget");
        MACHSectionHeaderWidget->resize(626, 324);
        MACHSectionHeaderWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(MACHSectionHeaderWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(MACHSectionHeaderWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(MACHSectionHeaderWidget);
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
        tableWidget->verticalHeader()->setDefaultSectionSize(21);
        widgetHex = new ToolsWidget(splitter);
        widgetHex->setObjectName("widgetHex");
        splitter->addWidget(widgetHex);

        verticalLayout->addWidget(splitter);


        retranslateUi(MACHSectionHeaderWidget);

        QMetaObject::connectSlotsByName(MACHSectionHeaderWidget);
    } // setupUi

    void retranslateUi(QWidget *MACHSectionHeaderWidget)
    {
        checkBoxReadonly->setText(QCoreApplication::translate("MACHSectionHeaderWidget", "Readonly", nullptr));
        (void)MACHSectionHeaderWidget;
    } // retranslateUi

};

namespace Ui {
    class MACHSectionHeaderWidget: public Ui_MACHSectionHeaderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHSECTIONHEADERWIDGET_H
