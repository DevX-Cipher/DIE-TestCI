/********************************************************************************
** Form generated from reading UI file 'searchsignatureswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSIGNATURESWIDGET_H
#define UI_SEARCHSIGNATURESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_SearchSignaturesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxType;
    QComboBox *comboBoxMode;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonSearch;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxEndianness;
    QComboBox *comboBoxFile;
    QLabel *labelInfo;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButtonPatch;
    XTableView *tableViewResult;

    void setupUi(QWidget *SearchSignaturesWidget)
    {
        if (SearchSignaturesWidget->objectName().isEmpty())
            SearchSignaturesWidget->setObjectName("SearchSignaturesWidget");
        SearchSignaturesWidget->resize(682, 382);
        SearchSignaturesWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(SearchSignaturesWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboBoxType = new QComboBox(SearchSignaturesWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(comboBoxType);

        comboBoxMode = new QComboBox(SearchSignaturesWidget);
        comboBoxMode->setObjectName("comboBoxMode");
        comboBoxMode->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(comboBoxMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        toolButtonSave = new QToolButton(SearchSignaturesWidget);
        toolButtonSave->setObjectName("toolButtonSave");

        horizontalLayout_2->addWidget(toolButtonSave);

        toolButtonSearch = new QToolButton(SearchSignaturesWidget);
        toolButtonSearch->setObjectName("toolButtonSearch");

        horizontalLayout_2->addWidget(toolButtonSearch);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxEndianness = new QComboBox(SearchSignaturesWidget);
        comboBoxEndianness->setObjectName("comboBoxEndianness");

        horizontalLayout->addWidget(comboBoxEndianness);

        comboBoxFile = new QComboBox(SearchSignaturesWidget);
        comboBoxFile->setObjectName("comboBoxFile");
        comboBoxFile->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxFile);

        labelInfo = new QLabel(SearchSignaturesWidget);
        labelInfo->setObjectName("labelInfo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelInfo->sizePolicy().hasHeightForWidth());
        labelInfo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(labelInfo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        toolButtonPatch = new QToolButton(SearchSignaturesWidget);
        toolButtonPatch->setObjectName("toolButtonPatch");

        horizontalLayout->addWidget(toolButtonPatch);


        verticalLayout->addLayout(horizontalLayout);

        tableViewResult = new XTableView(SearchSignaturesWidget);
        tableViewResult->setObjectName("tableViewResult");
        tableViewResult->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);
        tableViewResult->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableViewResult->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableViewResult->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableViewResult->setSortingEnabled(true);
        tableViewResult->horizontalHeader()->setStretchLastSection(true);
        tableViewResult->verticalHeader()->setMinimumSectionSize(20);
        tableViewResult->verticalHeader()->setDefaultSectionSize(21);
        tableViewResult->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tableViewResult);


        retranslateUi(SearchSignaturesWidget);

        QMetaObject::connectSlotsByName(SearchSignaturesWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchSignaturesWidget)
    {
        toolButtonSave->setText(QCoreApplication::translate("SearchSignaturesWidget", "Save", nullptr));
        toolButtonSearch->setText(QCoreApplication::translate("SearchSignaturesWidget", "Search", nullptr));
        labelInfo->setText(QString());
        toolButtonPatch->setText(QCoreApplication::translate("SearchSignaturesWidget", "Patch", nullptr));
        (void)SearchSignaturesWidget;
    } // retranslateUi

};

namespace Ui {
    class SearchSignaturesWidget: public Ui_SearchSignaturesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSIGNATURESWIDGET_H
