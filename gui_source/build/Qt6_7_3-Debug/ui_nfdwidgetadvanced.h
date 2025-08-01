/********************************************************************************
** Form generated from reading UI file 'nfdwidgetadvanced.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NFDWIDGETADVANCED_H
#define UI_NFDWIDGETADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xcomboboxex.h"
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_NFDWidgetAdvanced
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxType;
    XComboBoxEx *comboBoxFlags;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonScan;
    QTreeView *treeViewScan;
    QGroupBox *groupBoxHeuristic;
    QVBoxLayout *verticalLayout;
    XTableView *tableViewHeur;

    void setupUi(QWidget *NFDWidgetAdvanced)
    {
        if (NFDWidgetAdvanced->objectName().isEmpty())
            NFDWidgetAdvanced->setObjectName("NFDWidgetAdvanced");
        NFDWidgetAdvanced->resize(858, 479);
        NFDWidgetAdvanced->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_3 = new QVBoxLayout(NFDWidgetAdvanced);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxType = new QComboBox(NFDWidgetAdvanced);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        comboBoxFlags = new XComboBoxEx(NFDWidgetAdvanced);
        comboBoxFlags->setObjectName("comboBoxFlags");
        comboBoxFlags->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(comboBoxFlags);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonSave = new QToolButton(NFDWidgetAdvanced);
        toolButtonSave->setObjectName("toolButtonSave");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonSave->sizePolicy().hasHeightForWidth());
        toolButtonSave->setSizePolicy(sizePolicy);
        toolButtonSave->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSave);

        toolButtonScan = new QToolButton(NFDWidgetAdvanced);
        toolButtonScan->setObjectName("toolButtonScan");
        sizePolicy.setHeightForWidth(toolButtonScan->sizePolicy().hasHeightForWidth());
        toolButtonScan->setSizePolicy(sizePolicy);
        toolButtonScan->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonScan);


        verticalLayout_3->addLayout(horizontalLayout);

        treeViewScan = new QTreeView(NFDWidgetAdvanced);
        treeViewScan->setObjectName("treeViewScan");
        treeViewScan->header()->setVisible(false);

        verticalLayout_3->addWidget(treeViewScan);

        groupBoxHeuristic = new QGroupBox(NFDWidgetAdvanced);
        groupBoxHeuristic->setObjectName("groupBoxHeuristic");
        verticalLayout = new QVBoxLayout(groupBoxHeuristic);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableViewHeur = new XTableView(groupBoxHeuristic);
        tableViewHeur->setObjectName("tableViewHeur");
        tableViewHeur->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);
        tableViewHeur->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableViewHeur->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableViewHeur->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableViewHeur->verticalHeader()->setVisible(false);
        tableViewHeur->verticalHeader()->setMinimumSectionSize(20);
        tableViewHeur->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(tableViewHeur);


        verticalLayout_3->addWidget(groupBoxHeuristic);


        retranslateUi(NFDWidgetAdvanced);

        QMetaObject::connectSlotsByName(NFDWidgetAdvanced);
    } // setupUi

    void retranslateUi(QWidget *NFDWidgetAdvanced)
    {
        toolButtonSave->setText(QCoreApplication::translate("NFDWidgetAdvanced", "Save", nullptr));
        toolButtonScan->setText(QCoreApplication::translate("NFDWidgetAdvanced", "Scan", nullptr));
        groupBoxHeuristic->setTitle(QCoreApplication::translate("NFDWidgetAdvanced", "Heuristic", nullptr));
        (void)NFDWidgetAdvanced;
    } // retranslateUi

};

namespace Ui {
    class NFDWidgetAdvanced: public Ui_NFDWidgetAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NFDWIDGETADVANCED_H
