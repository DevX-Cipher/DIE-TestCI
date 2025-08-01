/********************************************************************************
** Form generated from reading UI file 'elfsectionheaderwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELFSECTIONHEADERWIDGET_H
#define UI_ELFSECTIONHEADERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "toolswidget.h"

QT_BEGIN_NAMESPACE

class Ui_ELFSectionHeaderWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxReadonly;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSaveHeader;
    QTableWidget *tableWidget;
    ToolsWidget *widgetHex;

    void setupUi(QWidget *ELFSectionHeaderWidget)
    {
        if (ELFSectionHeaderWidget->objectName().isEmpty())
            ELFSectionHeaderWidget->setObjectName("ELFSectionHeaderWidget");
        ELFSectionHeaderWidget->resize(588, 359);
        ELFSectionHeaderWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(ELFSectionHeaderWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(ELFSectionHeaderWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout_2->addLayout(horizontalLayout);

        splitter = new QSplitter(ELFSectionHeaderWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonSaveHeader = new QPushButton(widget);
        pushButtonSaveHeader->setObjectName("pushButtonSaveHeader");

        horizontalLayout_2->addWidget(pushButtonSaveHeader);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout->addWidget(tableWidget);

        splitter->addWidget(widget);
        widgetHex = new ToolsWidget(splitter);
        widgetHex->setObjectName("widgetHex");
        splitter->addWidget(widgetHex);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(ELFSectionHeaderWidget);

        QMetaObject::connectSlotsByName(ELFSectionHeaderWidget);
    } // setupUi

    void retranslateUi(QWidget *ELFSectionHeaderWidget)
    {
        checkBoxReadonly->setText(QCoreApplication::translate("ELFSectionHeaderWidget", "Readonly", nullptr));
        pushButtonSaveHeader->setText(QCoreApplication::translate("ELFSectionHeaderWidget", "Save", nullptr));
        (void)ELFSectionHeaderWidget;
    } // retranslateUi

};

namespace Ui {
    class ELFSectionHeaderWidget: public Ui_ELFSectionHeaderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELFSECTIONHEADERWIDGET_H
