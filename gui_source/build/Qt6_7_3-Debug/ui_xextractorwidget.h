/********************************************************************************
** Form generated from reading UI file 'xextractorwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XEXTRACTORWIDGET_H
#define UI_XEXTRACTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xcomboboxex.h"
#include "xhexview.h"
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_XExtractorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxType;
    QComboBox *comboBoxMapMode;
    QLabel *labelSize;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButtonDumpAll;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonScan;
    QHBoxLayout *horizontalLayout_2;
    XComboBoxEx *comboBoxOptions;
    QComboBox *comboBoxExtractorMode;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxDeepScan;
    QSplitter *splitter;
    XTableView *tableViewResult;
    XHexView *widgetHex;

    void setupUi(QWidget *XExtractorWidget)
    {
        if (XExtractorWidget->objectName().isEmpty())
            XExtractorWidget->setObjectName("XExtractorWidget");
        XExtractorWidget->resize(720, 556);
        verticalLayout = new QVBoxLayout(XExtractorWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxType = new QComboBox(XExtractorWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        comboBoxMapMode = new QComboBox(XExtractorWidget);
        comboBoxMapMode->setObjectName("comboBoxMapMode");
        comboBoxMapMode->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxMapMode);

        labelSize = new QLabel(XExtractorWidget);
        labelSize->setObjectName("labelSize");
        labelSize->setMinimumSize(QSize(100, 0));
        labelSize->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(labelSize);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        toolButtonDumpAll = new QToolButton(XExtractorWidget);
        toolButtonDumpAll->setObjectName("toolButtonDumpAll");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonDumpAll->sizePolicy().hasHeightForWidth());
        toolButtonDumpAll->setSizePolicy(sizePolicy);
        toolButtonDumpAll->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonDumpAll);

        toolButtonSave = new QToolButton(XExtractorWidget);
        toolButtonSave->setObjectName("toolButtonSave");
        sizePolicy.setHeightForWidth(toolButtonSave->sizePolicy().hasHeightForWidth());
        toolButtonSave->setSizePolicy(sizePolicy);
        toolButtonSave->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSave);

        toolButtonScan = new QToolButton(XExtractorWidget);
        toolButtonScan->setObjectName("toolButtonScan");
        sizePolicy.setHeightForWidth(toolButtonScan->sizePolicy().hasHeightForWidth());
        toolButtonScan->setSizePolicy(sizePolicy);
        toolButtonScan->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonScan);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboBoxOptions = new XComboBoxEx(XExtractorWidget);
        comboBoxOptions->setObjectName("comboBoxOptions");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxOptions->sizePolicy().hasHeightForWidth());
        comboBoxOptions->setSizePolicy(sizePolicy1);
        comboBoxOptions->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(comboBoxOptions);

        comboBoxExtractorMode = new QComboBox(XExtractorWidget);
        comboBoxExtractorMode->setObjectName("comboBoxExtractorMode");
        comboBoxExtractorMode->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(comboBoxExtractorMode);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        checkBoxDeepScan = new QCheckBox(XExtractorWidget);
        checkBoxDeepScan->setObjectName("checkBoxDeepScan");

        horizontalLayout_2->addWidget(checkBoxDeepScan);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter = new QSplitter(XExtractorWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Vertical);
        tableViewResult = new XTableView(splitter);
        tableViewResult->setObjectName("tableViewResult");
        tableViewResult->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);
        tableViewResult->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableViewResult->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableViewResult->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableViewResult->setSortingEnabled(true);
        splitter->addWidget(tableViewResult);
        tableViewResult->horizontalHeader()->setStretchLastSection(true);
        tableViewResult->verticalHeader()->setVisible(false);
        tableViewResult->verticalHeader()->setMinimumSectionSize(20);
        tableViewResult->verticalHeader()->setDefaultSectionSize(20);
        tableViewResult->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableViewResult->verticalHeader()->setStretchLastSection(false);
        widgetHex = new XHexView(splitter);
        widgetHex->setObjectName("widgetHex");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetHex->sizePolicy().hasHeightForWidth());
        widgetHex->setSizePolicy(sizePolicy2);
        splitter->addWidget(widgetHex);

        verticalLayout->addWidget(splitter);


        retranslateUi(XExtractorWidget);

        QMetaObject::connectSlotsByName(XExtractorWidget);
    } // setupUi

    void retranslateUi(QWidget *XExtractorWidget)
    {
        XExtractorWidget->setWindowTitle(QCoreApplication::translate("XExtractorWidget", "Extract", nullptr));
        labelSize->setText(QString());
        toolButtonDumpAll->setText(QCoreApplication::translate("XExtractorWidget", "Dump all", nullptr));
        toolButtonSave->setText(QCoreApplication::translate("XExtractorWidget", "Save", nullptr));
        toolButtonScan->setText(QCoreApplication::translate("XExtractorWidget", "Scan", nullptr));
        checkBoxDeepScan->setText(QCoreApplication::translate("XExtractorWidget", "Deep scan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XExtractorWidget: public Ui_XExtractorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XEXTRACTORWIDGET_H
