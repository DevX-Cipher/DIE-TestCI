/********************************************************************************
** Form generated from reading UI file 'searchvalueswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHVALUESWIDGET_H
#define UI_SEARCHVALUESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_SearchValuesWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxType;
    QComboBox *comboBoxMapMode;
    QToolButton *toolButtonSearchString;
    QToolButton *toolButtonSearchSignature;
    QToolButton *toolButtonSearchValue;
    QLabel *labelSearchValue;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonSearch;
    XTableView *tableViewResult;

    void setupUi(QWidget *SearchValuesWidget)
    {
        if (SearchValuesWidget->objectName().isEmpty())
            SearchValuesWidget->setObjectName("SearchValuesWidget");
        SearchValuesWidget->resize(833, 382);
        SearchValuesWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(SearchValuesWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxType = new QComboBox(SearchValuesWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        comboBoxMapMode = new QComboBox(SearchValuesWidget);
        comboBoxMapMode->setObjectName("comboBoxMapMode");
        comboBoxMapMode->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxMapMode);

        toolButtonSearchString = new QToolButton(SearchValuesWidget);
        toolButtonSearchString->setObjectName("toolButtonSearchString");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonSearchString->sizePolicy().hasHeightForWidth());
        toolButtonSearchString->setSizePolicy(sizePolicy);
        toolButtonSearchString->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSearchString);

        toolButtonSearchSignature = new QToolButton(SearchValuesWidget);
        toolButtonSearchSignature->setObjectName("toolButtonSearchSignature");
        sizePolicy.setHeightForWidth(toolButtonSearchSignature->sizePolicy().hasHeightForWidth());
        toolButtonSearchSignature->setSizePolicy(sizePolicy);
        toolButtonSearchSignature->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSearchSignature);

        toolButtonSearchValue = new QToolButton(SearchValuesWidget);
        toolButtonSearchValue->setObjectName("toolButtonSearchValue");
        sizePolicy.setHeightForWidth(toolButtonSearchValue->sizePolicy().hasHeightForWidth());
        toolButtonSearchValue->setSizePolicy(sizePolicy);
        toolButtonSearchValue->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSearchValue);

        labelSearchValue = new QLabel(SearchValuesWidget);
        labelSearchValue->setObjectName("labelSearchValue");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelSearchValue->sizePolicy().hasHeightForWidth());
        labelSearchValue->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(labelSearchValue);

        toolButtonSave = new QToolButton(SearchValuesWidget);
        toolButtonSave->setObjectName("toolButtonSave");
        sizePolicy.setHeightForWidth(toolButtonSave->sizePolicy().hasHeightForWidth());
        toolButtonSave->setSizePolicy(sizePolicy);
        toolButtonSave->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSave);

        toolButtonSearch = new QToolButton(SearchValuesWidget);
        toolButtonSearch->setObjectName("toolButtonSearch");
        sizePolicy.setHeightForWidth(toolButtonSearch->sizePolicy().hasHeightForWidth());
        toolButtonSearch->setSizePolicy(sizePolicy);
        toolButtonSearch->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSearch);


        verticalLayout_2->addLayout(horizontalLayout);

        tableViewResult = new XTableView(SearchValuesWidget);
        tableViewResult->setObjectName("tableViewResult");
        tableViewResult->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewResult->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewResult->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewResult->setSortingEnabled(true);
        tableViewResult->horizontalHeader()->setStretchLastSection(true);
        tableViewResult->verticalHeader()->setVisible(false);
        tableViewResult->verticalHeader()->setMinimumSectionSize(20);
        tableViewResult->verticalHeader()->setDefaultSectionSize(21);
        tableViewResult->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(tableViewResult);


        retranslateUi(SearchValuesWidget);

        QMetaObject::connectSlotsByName(SearchValuesWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchValuesWidget)
    {
        toolButtonSearchString->setText(QCoreApplication::translate("SearchValuesWidget", "String", nullptr));
        toolButtonSearchSignature->setText(QCoreApplication::translate("SearchValuesWidget", "Signature", nullptr));
        toolButtonSearchValue->setText(QCoreApplication::translate("SearchValuesWidget", "Value", nullptr));
        labelSearchValue->setText(QString());
        toolButtonSave->setText(QCoreApplication::translate("SearchValuesWidget", "Save", nullptr));
        toolButtonSearch->setText(QCoreApplication::translate("SearchValuesWidget", "Search", nullptr));
        (void)SearchValuesWidget;
    } // retranslateUi

};

namespace Ui {
    class SearchValuesWidget: public Ui_SearchValuesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHVALUESWIDGET_H
