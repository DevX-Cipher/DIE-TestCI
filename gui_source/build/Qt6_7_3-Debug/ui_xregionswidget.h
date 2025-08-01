/********************************************************************************
** Form generated from reading UI file 'xregionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XREGIONSWIDGET_H
#define UI_XREGIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XRegionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxType;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonReload;
    QToolButton *toolButtonSave;
    QTreeView *treeViewMain;
    QWidget *widgetHex;

    void setupUi(QWidget *XRegionsWidget)
    {
        if (XRegionsWidget->objectName().isEmpty())
            XRegionsWidget->setObjectName("XRegionsWidget");
        XRegionsWidget->resize(515, 361);
        verticalLayout = new QVBoxLayout(XRegionsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxType = new QComboBox(XRegionsWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonReload = new QToolButton(XRegionsWidget);
        toolButtonReload->setObjectName("toolButtonReload");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonReload->sizePolicy().hasHeightForWidth());
        toolButtonReload->setSizePolicy(sizePolicy);
        toolButtonReload->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonReload);

        toolButtonSave = new QToolButton(XRegionsWidget);
        toolButtonSave->setObjectName("toolButtonSave");
        sizePolicy.setHeightForWidth(toolButtonSave->sizePolicy().hasHeightForWidth());
        toolButtonSave->setSizePolicy(sizePolicy);
        toolButtonSave->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSave);


        verticalLayout->addLayout(horizontalLayout);

        treeViewMain = new QTreeView(XRegionsWidget);
        treeViewMain->setObjectName("treeViewMain");
        treeViewMain->setRootIsDecorated(true);

        verticalLayout->addWidget(treeViewMain);

        widgetHex = new QWidget(XRegionsWidget);
        widgetHex->setObjectName("widgetHex");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetHex->sizePolicy().hasHeightForWidth());
        widgetHex->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(widgetHex);


        retranslateUi(XRegionsWidget);

        QMetaObject::connectSlotsByName(XRegionsWidget);
    } // setupUi

    void retranslateUi(QWidget *XRegionsWidget)
    {
        XRegionsWidget->setWindowTitle(QCoreApplication::translate("XRegionsWidget", "Form", nullptr));
        toolButtonReload->setText(QCoreApplication::translate("XRegionsWidget", "Reload", nullptr));
        toolButtonSave->setText(QCoreApplication::translate("XRegionsWidget", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XRegionsWidget: public Ui_XRegionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XREGIONSWIDGET_H
