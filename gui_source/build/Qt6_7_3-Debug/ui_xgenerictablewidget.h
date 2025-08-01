/********************************************************************************
** Form generated from reading UI file 'xgenerictablewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XGENERICTABLEWIDGET_H
#define UI_XGENERICTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_XGenericTableWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonTableReload;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonTableSave;
    XTableView *tableViewMain;

    void setupUi(QWidget *XGenericTableWidget)
    {
        if (XGenericTableWidget->objectName().isEmpty())
            XGenericTableWidget->setObjectName("XGenericTableWidget");
        XGenericTableWidget->resize(560, 338);
        verticalLayout = new QVBoxLayout(XGenericTableWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        toolButtonTableReload = new QToolButton(XGenericTableWidget);
        toolButtonTableReload->setObjectName("toolButtonTableReload");
        toolButtonTableReload->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonTableReload);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonTableSave = new QToolButton(XGenericTableWidget);
        toolButtonTableSave->setObjectName("toolButtonTableSave");
        toolButtonTableSave->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonTableSave);


        verticalLayout->addLayout(horizontalLayout);

        tableViewMain = new XTableView(XGenericTableWidget);
        tableViewMain->setObjectName("tableViewMain");

        verticalLayout->addWidget(tableViewMain);


        retranslateUi(XGenericTableWidget);

        QMetaObject::connectSlotsByName(XGenericTableWidget);
    } // setupUi

    void retranslateUi(QWidget *XGenericTableWidget)
    {
        XGenericTableWidget->setWindowTitle(QCoreApplication::translate("XGenericTableWidget", "Form", nullptr));
        toolButtonTableReload->setText(QCoreApplication::translate("XGenericTableWidget", "Reload", nullptr));
        toolButtonTableSave->setText(QCoreApplication::translate("XGenericTableWidget", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XGenericTableWidget: public Ui_XGenericTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XGENERICTABLEWIDGET_H
