/********************************************************************************
** Form generated from reading UI file 'xgenericheaderwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XGENERICHEADERWIDGET_H
#define UI_XGENERICHEADERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XGenericHeaderWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonTableReload;
    QToolButton *toolButtonTableSize;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonTableSave;
    QTableWidget *tableWidgetMain;

    void setupUi(QWidget *XGenericHeaderWidget)
    {
        if (XGenericHeaderWidget->objectName().isEmpty())
            XGenericHeaderWidget->setObjectName("XGenericHeaderWidget");
        XGenericHeaderWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(XGenericHeaderWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        toolButtonTableReload = new QToolButton(XGenericHeaderWidget);
        toolButtonTableReload->setObjectName("toolButtonTableReload");
        toolButtonTableReload->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonTableReload);

        toolButtonTableSize = new QToolButton(XGenericHeaderWidget);
        toolButtonTableSize->setObjectName("toolButtonTableSize");
        toolButtonTableSize->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonTableSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonTableSave = new QToolButton(XGenericHeaderWidget);
        toolButtonTableSave->setObjectName("toolButtonTableSave");
        toolButtonTableSave->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonTableSave);


        verticalLayout->addLayout(horizontalLayout);

        tableWidgetMain = new QTableWidget(XGenericHeaderWidget);
        tableWidgetMain->setObjectName("tableWidgetMain");

        verticalLayout->addWidget(tableWidgetMain);


        retranslateUi(XGenericHeaderWidget);

        QMetaObject::connectSlotsByName(XGenericHeaderWidget);
    } // setupUi

    void retranslateUi(QWidget *XGenericHeaderWidget)
    {
        XGenericHeaderWidget->setWindowTitle(QCoreApplication::translate("XGenericHeaderWidget", "Form", nullptr));
        toolButtonTableReload->setText(QCoreApplication::translate("XGenericHeaderWidget", "Reload", nullptr));
        toolButtonTableSize->setText(QCoreApplication::translate("XGenericHeaderWidget", "Size", nullptr));
        toolButtonTableSave->setText(QCoreApplication::translate("XGenericHeaderWidget", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XGenericHeaderWidget: public Ui_XGenericHeaderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XGENERICHEADERWIDGET_H
