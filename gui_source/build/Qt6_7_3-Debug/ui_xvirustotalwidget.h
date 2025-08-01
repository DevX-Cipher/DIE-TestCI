/********************************************************************************
** Form generated from reading UI file 'xvirustotalwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XVIRUSTOTALWIDGET_H
#define UI_XVIRUSTOTALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_XVirusTotalWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonWebsite;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonRescan;
    QCheckBox *checkBoxShowDetects;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonReload;
    XTableView *tableViewScanResult;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditFirst;
    QLineEdit *lineEditLast;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *XVirusTotalWidget)
    {
        if (XVirusTotalWidget->objectName().isEmpty())
            XVirusTotalWidget->setObjectName("XVirusTotalWidget");
        XVirusTotalWidget->resize(583, 363);
        verticalLayout = new QVBoxLayout(XVirusTotalWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        toolButtonWebsite = new QToolButton(XVirusTotalWidget);
        toolButtonWebsite->setObjectName("toolButtonWebsite");

        horizontalLayout->addWidget(toolButtonWebsite);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonRescan = new QToolButton(XVirusTotalWidget);
        toolButtonRescan->setObjectName("toolButtonRescan");

        horizontalLayout->addWidget(toolButtonRescan);

        checkBoxShowDetects = new QCheckBox(XVirusTotalWidget);
        checkBoxShowDetects->setObjectName("checkBoxShowDetects");

        horizontalLayout->addWidget(checkBoxShowDetects);

        toolButtonSave = new QToolButton(XVirusTotalWidget);
        toolButtonSave->setObjectName("toolButtonSave");

        horizontalLayout->addWidget(toolButtonSave);

        toolButtonReload = new QToolButton(XVirusTotalWidget);
        toolButtonReload->setObjectName("toolButtonReload");

        horizontalLayout->addWidget(toolButtonReload);


        verticalLayout->addLayout(horizontalLayout);

        tableViewScanResult = new XTableView(XVirusTotalWidget);
        tableViewScanResult->setObjectName("tableViewScanResult");
        tableViewScanResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewScanResult->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewScanResult->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewScanResult->setSortingEnabled(true);
        tableViewScanResult->verticalHeader()->setVisible(false);
        tableViewScanResult->verticalHeader()->setMinimumSectionSize(20);
        tableViewScanResult->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(tableViewScanResult);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEditFirst = new QLineEdit(XVirusTotalWidget);
        lineEditFirst->setObjectName("lineEditFirst");
        lineEditFirst->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditFirst);

        lineEditLast = new QLineEdit(XVirusTotalWidget);
        lineEditLast->setObjectName("lineEditLast");
        lineEditLast->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditLast);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(XVirusTotalWidget);

        QMetaObject::connectSlotsByName(XVirusTotalWidget);
    } // setupUi

    void retranslateUi(QWidget *XVirusTotalWidget)
    {
        XVirusTotalWidget->setWindowTitle(QCoreApplication::translate("XVirusTotalWidget", "Form", nullptr));
        toolButtonWebsite->setText(QCoreApplication::translate("XVirusTotalWidget", "Website", nullptr));
        toolButtonRescan->setText(QCoreApplication::translate("XVirusTotalWidget", "Rescan", nullptr));
        checkBoxShowDetects->setText(QCoreApplication::translate("XVirusTotalWidget", "Show detects", nullptr));
        toolButtonSave->setText(QCoreApplication::translate("XVirusTotalWidget", "Save", nullptr));
        toolButtonReload->setText(QCoreApplication::translate("XVirusTotalWidget", "Reload", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XVirusTotalWidget: public Ui_XVirusTotalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XVIRUSTOTALWIDGET_H
