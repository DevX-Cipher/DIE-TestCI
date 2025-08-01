/********************************************************************************
** Form generated from reading UI file 'xhashwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XHASHWIDGET_H
#define UI_XHASHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xlineedithex.h"
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_XHashWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxType;
    QComboBox *comboBoxMapMode;
    QComboBox *comboBoxMethod;
    XLineEditHEX *lineEditOffset;
    XLineEditHEX *lineEditSize;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonReload;
    XLineEditHEX *lineEditHash;
    XTableView *tableViewRegions;

    void setupUi(QWidget *XHashWidget)
    {
        if (XHashWidget->objectName().isEmpty())
            XHashWidget->setObjectName("XHashWidget");
        XHashWidget->resize(802, 448);
        XHashWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_4 = new QVBoxLayout(XHashWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxType = new QComboBox(XHashWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        comboBoxMapMode = new QComboBox(XHashWidget);
        comboBoxMapMode->setObjectName("comboBoxMapMode");
        comboBoxMapMode->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxMapMode);

        comboBoxMethod = new QComboBox(XHashWidget);
        comboBoxMethod->setObjectName("comboBoxMethod");
        comboBoxMethod->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxMethod);

        lineEditOffset = new XLineEditHEX(XHashWidget);
        lineEditOffset->setObjectName("lineEditOffset");
        lineEditOffset->setMaximumSize(QSize(150, 16777215));
        lineEditOffset->setAlignment(Qt::AlignCenter);
        lineEditOffset->setReadOnly(true);

        horizontalLayout->addWidget(lineEditOffset);

        lineEditSize = new XLineEditHEX(XHashWidget);
        lineEditSize->setObjectName("lineEditSize");
        lineEditSize->setMinimumSize(QSize(120, 0));
        lineEditSize->setMaximumSize(QSize(150, 16777215));
        lineEditSize->setAlignment(Qt::AlignCenter);
        lineEditSize->setReadOnly(true);

        horizontalLayout->addWidget(lineEditSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonSave = new QToolButton(XHashWidget);
        toolButtonSave->setObjectName("toolButtonSave");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonSave->sizePolicy().hasHeightForWidth());
        toolButtonSave->setSizePolicy(sizePolicy);
        toolButtonSave->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSave);

        toolButtonReload = new QToolButton(XHashWidget);
        toolButtonReload->setObjectName("toolButtonReload");
        sizePolicy.setHeightForWidth(toolButtonReload->sizePolicy().hasHeightForWidth());
        toolButtonReload->setSizePolicy(sizePolicy);
        toolButtonReload->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonReload);


        verticalLayout_4->addLayout(horizontalLayout);

        lineEditHash = new XLineEditHEX(XHashWidget);
        lineEditHash->setObjectName("lineEditHash");
        lineEditHash->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEditHash->setReadOnly(true);

        verticalLayout_4->addWidget(lineEditHash);

        tableViewRegions = new XTableView(XHashWidget);
        tableViewRegions->setObjectName("tableViewRegions");
        tableViewRegions->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewRegions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewRegions->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewRegions->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewRegions->setSortingEnabled(true);
        tableViewRegions->horizontalHeader()->setStretchLastSection(false);
        tableViewRegions->verticalHeader()->setVisible(false);
        tableViewRegions->verticalHeader()->setMinimumSectionSize(20);
        tableViewRegions->verticalHeader()->setDefaultSectionSize(20);
        tableViewRegions->verticalHeader()->setStretchLastSection(false);

        verticalLayout_4->addWidget(tableViewRegions);


        retranslateUi(XHashWidget);

        QMetaObject::connectSlotsByName(XHashWidget);
    } // setupUi

    void retranslateUi(QWidget *XHashWidget)
    {
        toolButtonSave->setText(QCoreApplication::translate("XHashWidget", "Save", nullptr));
        toolButtonReload->setText(QCoreApplication::translate("XHashWidget", "Reload", nullptr));
        (void)XHashWidget;
    } // retranslateUi

};

namespace Ui {
    class XHashWidget: public Ui_XHashWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XHASHWIDGET_H
