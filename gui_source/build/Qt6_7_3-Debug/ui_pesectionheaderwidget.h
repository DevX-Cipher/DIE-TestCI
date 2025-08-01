/********************************************************************************
** Form generated from reading UI file 'pesectionheaderwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PESECTIONHEADERWIDGET_H
#define UI_PESECTIONHEADERWIDGET_H

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

class Ui_PESectionHeaderWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxReadonly;
    QSplitter *splitter;
    QTableWidget *tableWidget;
    ToolsWidget *widgetHex;

    void setupUi(QWidget *PESectionHeaderWidget)
    {
        if (PESectionHeaderWidget->objectName().isEmpty())
            PESectionHeaderWidget->setObjectName("PESectionHeaderWidget");
        PESectionHeaderWidget->setWindowModality(Qt::ApplicationModal);
        PESectionHeaderWidget->resize(729, 415);
        PESectionHeaderWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(PESectionHeaderWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(PESectionHeaderWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(PESectionHeaderWidget);
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
        widgetHex->setMaximumSize(QSize(16777215, 200));
        splitter->addWidget(widgetHex);

        verticalLayout->addWidget(splitter);


        retranslateUi(PESectionHeaderWidget);

        QMetaObject::connectSlotsByName(PESectionHeaderWidget);
    } // setupUi

    void retranslateUi(QWidget *PESectionHeaderWidget)
    {
        checkBoxReadonly->setText(QCoreApplication::translate("PESectionHeaderWidget", "Readonly", nullptr));
        (void)PESectionHeaderWidget;
    } // retranslateUi

};

namespace Ui {
    class PESectionHeaderWidget: public Ui_PESectionHeaderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PESECTIONHEADERWIDGET_H
