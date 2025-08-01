/********************************************************************************
** Form generated from reading UI file 'searchstringswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSTRINGSWIDGET_H
#define UI_SEARCHSTRINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_SearchStringsWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxType;
    QComboBox *comboBoxMapMode;
    QCheckBox *checkBoxAnsi;
    QCheckBox *checkBoxUnicode;
    QCheckBox *checkBoxNullTerminated;
    QCheckBox *checkBoxLinks;
    QSpinBox *spinBoxMinLength;
    QCheckBox *checkBoxRegExp;
    QLineEdit *lineEditMask;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonSearch;
    XTableView *tableViewResult;

    void setupUi(QWidget *SearchStringsWidget)
    {
        if (SearchStringsWidget->objectName().isEmpty())
            SearchStringsWidget->setObjectName("SearchStringsWidget");
        SearchStringsWidget->resize(976, 451);
        SearchStringsWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_5 = new QVBoxLayout(SearchStringsWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        comboBoxType = new QComboBox(SearchStringsWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(comboBoxType);

        comboBoxMapMode = new QComboBox(SearchStringsWidget);
        comboBoxMapMode->setObjectName("comboBoxMapMode");
        comboBoxMapMode->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(comboBoxMapMode);

        checkBoxAnsi = new QCheckBox(SearchStringsWidget);
        checkBoxAnsi->setObjectName("checkBoxAnsi");
        checkBoxAnsi->setText(QString::fromUtf8("ANSI"));

        horizontalLayout_2->addWidget(checkBoxAnsi);

        checkBoxUnicode = new QCheckBox(SearchStringsWidget);
        checkBoxUnicode->setObjectName("checkBoxUnicode");
        checkBoxUnicode->setText(QString::fromUtf8("Unicode"));

        horizontalLayout_2->addWidget(checkBoxUnicode);

        checkBoxNullTerminated = new QCheckBox(SearchStringsWidget);
        checkBoxNullTerminated->setObjectName("checkBoxNullTerminated");

        horizontalLayout_2->addWidget(checkBoxNullTerminated);

        checkBoxLinks = new QCheckBox(SearchStringsWidget);
        checkBoxLinks->setObjectName("checkBoxLinks");

        horizontalLayout_2->addWidget(checkBoxLinks);

        spinBoxMinLength = new QSpinBox(SearchStringsWidget);
        spinBoxMinLength->setObjectName("spinBoxMinLength");
        spinBoxMinLength->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        spinBoxMinLength->setMinimum(1);

        horizontalLayout_2->addWidget(spinBoxMinLength);

        checkBoxRegExp = new QCheckBox(SearchStringsWidget);
        checkBoxRegExp->setObjectName("checkBoxRegExp");
        checkBoxRegExp->setText(QString::fromUtf8("RegExp"));

        horizontalLayout_2->addWidget(checkBoxRegExp);

        lineEditMask = new QLineEdit(SearchStringsWidget);
        lineEditMask->setObjectName("lineEditMask");

        horizontalLayout_2->addWidget(lineEditMask);

        toolButtonSave = new QToolButton(SearchStringsWidget);
        toolButtonSave->setObjectName("toolButtonSave");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonSave->sizePolicy().hasHeightForWidth());
        toolButtonSave->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(toolButtonSave);

        toolButtonSearch = new QToolButton(SearchStringsWidget);
        toolButtonSearch->setObjectName("toolButtonSearch");
        sizePolicy.setHeightForWidth(toolButtonSearch->sizePolicy().hasHeightForWidth());
        toolButtonSearch->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(toolButtonSearch);


        verticalLayout_5->addLayout(horizontalLayout_2);

        tableViewResult = new XTableView(SearchStringsWidget);
        tableViewResult->setObjectName("tableViewResult");
        tableViewResult->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);
        tableViewResult->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableViewResult->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableViewResult->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableViewResult->setSortingEnabled(true);
        tableViewResult->horizontalHeader()->setStretchLastSection(true);
        tableViewResult->verticalHeader()->setVisible(false);
        tableViewResult->verticalHeader()->setMinimumSectionSize(20);
        tableViewResult->verticalHeader()->setDefaultSectionSize(21);
        tableViewResult->verticalHeader()->setStretchLastSection(false);

        verticalLayout_5->addWidget(tableViewResult);


        retranslateUi(SearchStringsWidget);

        QMetaObject::connectSlotsByName(SearchStringsWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchStringsWidget)
    {
        checkBoxNullTerminated->setText(QCoreApplication::translate("SearchStringsWidget", "Null-terminated", nullptr));
        checkBoxLinks->setText(QCoreApplication::translate("SearchStringsWidget", "Links", nullptr));
        toolButtonSave->setText(QCoreApplication::translate("SearchStringsWidget", "Save", nullptr));
        toolButtonSearch->setText(QCoreApplication::translate("SearchStringsWidget", "Search", nullptr));
        (void)SearchStringsWidget;
    } // retranslateUi

};

namespace Ui {
    class SearchStringsWidget: public Ui_SearchStringsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSTRINGSWIDGET_H
