/********************************************************************************
** Form generated from reading UI file 'lesectionheaderwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LESECTIONHEADERWIDGET_H
#define UI_LESECTIONHEADERWIDGET_H

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

class Ui_LESectionHeaderWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxReadonly;
    QSplitter *splitter;
    QTableWidget *tableWidget_Section;
    ToolsWidget *widgetHex_Section;

    void setupUi(QWidget *LESectionHeaderWidget)
    {
        if (LESectionHeaderWidget->objectName().isEmpty())
            LESectionHeaderWidget->setObjectName("LESectionHeaderWidget");
        LESectionHeaderWidget->resize(504, 335);
        LESectionHeaderWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(LESectionHeaderWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(LESectionHeaderWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(LESectionHeaderWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        tableWidget_Section = new QTableWidget(splitter);
        tableWidget_Section->setObjectName("tableWidget_Section");
        tableWidget_Section->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_Section->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Section->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Section->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter->addWidget(tableWidget_Section);
        tableWidget_Section->horizontalHeader()->setVisible(false);
        tableWidget_Section->verticalHeader()->setVisible(false);
        tableWidget_Section->verticalHeader()->setDefaultSectionSize(21);
        widgetHex_Section = new ToolsWidget(splitter);
        widgetHex_Section->setObjectName("widgetHex_Section");
        splitter->addWidget(widgetHex_Section);

        verticalLayout->addWidget(splitter);


        retranslateUi(LESectionHeaderWidget);

        QMetaObject::connectSlotsByName(LESectionHeaderWidget);
    } // setupUi

    void retranslateUi(QWidget *LESectionHeaderWidget)
    {
        checkBoxReadonly->setText(QCoreApplication::translate("LESectionHeaderWidget", "Readonly", nullptr));
        (void)LESectionHeaderWidget;
    } // retranslateUi

};

namespace Ui {
    class LESectionHeaderWidget: public Ui_LESectionHeaderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LESECTIONHEADERWIDGET_H
