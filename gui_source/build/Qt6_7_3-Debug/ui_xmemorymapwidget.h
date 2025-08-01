/********************************************************************************
** Form generated from reading UI file 'xmemorymapwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XMEMORYMAPWIDGET_H
#define UI_XMEMORYMAPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xhexview.h"
#include "xlineedithex.h"
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_XMemoryMapWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QComboBox *comboBoxMapMode;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxShowAll;
    QComboBox *comboBoxType;
    QToolButton *toolButtonDumpAll;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonReload;
    QHBoxLayout *horizontalLayout;
    QWidget *widgetLeft;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonFileOffset;
    XLineEditHEX *lineEditFileOffset;
    QRadioButton *radioButtonVirtualAddress;
    XLineEditHEX *lineEditVirtualAddress;
    QRadioButton *radioButtonRelativeVirtualAddress;
    XLineEditHEX *lineEditRelativeVirtualAddress;
    QToolButton *toolButtonFileOffsetFind;
    QToolButton *toolButtonVirtualAddressFind;
    QToolButton *toolButtonRelativeVirtualAddressFind;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBoxMode;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *lineEditMode;
    QGroupBox *groupBoxEndianness;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *lineEditEndianness;
    QGroupBox *groupBoxArch;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *lineEditArch;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    XTableView *tableViewMemoryMap;
    QGroupBox *groupBoxHex;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidgetHex;
    QWidget *pageHex;
    QVBoxLayout *verticalLayout_5;
    XHexView *widgetHex;
    QWidget *pageInvalid;

    void setupUi(QWidget *XMemoryMapWidget)
    {
        if (XMemoryMapWidget->objectName().isEmpty())
            XMemoryMapWidget->setObjectName("XMemoryMapWidget");
        XMemoryMapWidget->resize(971, 713);
        XMemoryMapWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_4 = new QVBoxLayout(XMemoryMapWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(XMemoryMapWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        comboBoxMapMode = new QComboBox(layoutWidget);
        comboBoxMapMode->setObjectName("comboBoxMapMode");
        comboBoxMapMode->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(comboBoxMapMode, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 4, 1, 1);

        checkBoxShowAll = new QCheckBox(layoutWidget);
        checkBoxShowAll->setObjectName("checkBoxShowAll");

        gridLayout_3->addWidget(checkBoxShowAll, 0, 3, 1, 1);

        comboBoxType = new QComboBox(layoutWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(comboBoxType, 0, 1, 1, 1);

        toolButtonDumpAll = new QToolButton(layoutWidget);
        toolButtonDumpAll->setObjectName("toolButtonDumpAll");

        gridLayout_3->addWidget(toolButtonDumpAll, 0, 6, 1, 1);

        toolButtonSave = new QToolButton(layoutWidget);
        toolButtonSave->setObjectName("toolButtonSave");

        gridLayout_3->addWidget(toolButtonSave, 0, 7, 1, 1);

        toolButtonReload = new QToolButton(layoutWidget);
        toolButtonReload->setObjectName("toolButtonReload");

        gridLayout_3->addWidget(toolButtonReload, 0, 5, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widgetLeft = new QWidget(layoutWidget);
        widgetLeft->setObjectName("widgetLeft");
        widgetLeft->setMaximumSize(QSize(320, 16777215));
        verticalLayout_2 = new QVBoxLayout(widgetLeft);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        radioButtonFileOffset = new QRadioButton(widgetLeft);
        radioButtonFileOffset->setObjectName("radioButtonFileOffset");
        radioButtonFileOffset->setChecked(true);

        gridLayout->addWidget(radioButtonFileOffset, 0, 0, 1, 1);

        lineEditFileOffset = new XLineEditHEX(widgetLeft);
        lineEditFileOffset->setObjectName("lineEditFileOffset");

        gridLayout->addWidget(lineEditFileOffset, 0, 1, 1, 1);

        radioButtonVirtualAddress = new QRadioButton(widgetLeft);
        radioButtonVirtualAddress->setObjectName("radioButtonVirtualAddress");
        radioButtonVirtualAddress->setChecked(false);

        gridLayout->addWidget(radioButtonVirtualAddress, 1, 0, 1, 1);

        lineEditVirtualAddress = new XLineEditHEX(widgetLeft);
        lineEditVirtualAddress->setObjectName("lineEditVirtualAddress");

        gridLayout->addWidget(lineEditVirtualAddress, 1, 1, 1, 1);

        radioButtonRelativeVirtualAddress = new QRadioButton(widgetLeft);
        radioButtonRelativeVirtualAddress->setObjectName("radioButtonRelativeVirtualAddress");
        radioButtonRelativeVirtualAddress->setChecked(false);

        gridLayout->addWidget(radioButtonRelativeVirtualAddress, 2, 0, 1, 1);

        lineEditRelativeVirtualAddress = new XLineEditHEX(widgetLeft);
        lineEditRelativeVirtualAddress->setObjectName("lineEditRelativeVirtualAddress");

        gridLayout->addWidget(lineEditRelativeVirtualAddress, 2, 1, 1, 1);

        toolButtonFileOffsetFind = new QToolButton(widgetLeft);
        toolButtonFileOffsetFind->setObjectName("toolButtonFileOffsetFind");
        toolButtonFileOffsetFind->setMaximumSize(QSize(24, 16777215));
        toolButtonFileOffsetFind->setText(QString::fromUtf8(">"));

        gridLayout->addWidget(toolButtonFileOffsetFind, 0, 2, 1, 1);

        toolButtonVirtualAddressFind = new QToolButton(widgetLeft);
        toolButtonVirtualAddressFind->setObjectName("toolButtonVirtualAddressFind");
        toolButtonVirtualAddressFind->setMaximumSize(QSize(24, 16777215));
        toolButtonVirtualAddressFind->setText(QString::fromUtf8(">"));

        gridLayout->addWidget(toolButtonVirtualAddressFind, 1, 2, 1, 1);

        toolButtonRelativeVirtualAddressFind = new QToolButton(widgetLeft);
        toolButtonRelativeVirtualAddressFind->setObjectName("toolButtonRelativeVirtualAddressFind");
        toolButtonRelativeVirtualAddressFind->setMaximumSize(QSize(24, 16777215));
        toolButtonRelativeVirtualAddressFind->setText(QString::fromUtf8(">"));

        gridLayout->addWidget(toolButtonRelativeVirtualAddressFind, 2, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBoxMode = new QGroupBox(widgetLeft);
        groupBoxMode->setObjectName("groupBoxMode");
        groupBoxMode->setMaximumSize(QSize(80, 16777215));
        groupBoxMode->setAlignment(Qt::AlignCenter);
        verticalLayout_11 = new QVBoxLayout(groupBoxMode);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(2, 2, 2, 2);
        lineEditMode = new QLineEdit(groupBoxMode);
        lineEditMode->setObjectName("lineEditMode");
        lineEditMode->setAlignment(Qt::AlignCenter);
        lineEditMode->setReadOnly(true);

        verticalLayout_11->addWidget(lineEditMode);


        horizontalLayout_3->addWidget(groupBoxMode);

        groupBoxEndianness = new QGroupBox(widgetLeft);
        groupBoxEndianness->setObjectName("groupBoxEndianness");
        groupBoxEndianness->setMaximumSize(QSize(80, 16777215));
        groupBoxEndianness->setAlignment(Qt::AlignCenter);
        verticalLayout_10 = new QVBoxLayout(groupBoxEndianness);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(2, 2, 2, 2);
        lineEditEndianness = new QLineEdit(groupBoxEndianness);
        lineEditEndianness->setObjectName("lineEditEndianness");
        lineEditEndianness->setAlignment(Qt::AlignCenter);
        lineEditEndianness->setReadOnly(true);

        verticalLayout_10->addWidget(lineEditEndianness);


        horizontalLayout_3->addWidget(groupBoxEndianness);

        groupBoxArch = new QGroupBox(widgetLeft);
        groupBoxArch->setObjectName("groupBoxArch");
        groupBoxArch->setAlignment(Qt::AlignCenter);
        verticalLayout_9 = new QVBoxLayout(groupBoxArch);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(2, 2, 2, 2);
        lineEditArch = new QLineEdit(groupBoxArch);
        lineEditArch->setObjectName("lineEditArch");
        lineEditArch->setAlignment(Qt::AlignCenter);
        lineEditArch->setReadOnly(true);

        verticalLayout_9->addWidget(lineEditArch);


        horizontalLayout_3->addWidget(groupBoxArch);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addWidget(widgetLeft);

        tableViewMemoryMap = new XTableView(layoutWidget);
        tableViewMemoryMap->setObjectName("tableViewMemoryMap");
        tableViewMemoryMap->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewMemoryMap->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewMemoryMap->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewMemoryMap->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewMemoryMap->horizontalHeader()->setStretchLastSection(false);
        tableViewMemoryMap->verticalHeader()->setVisible(false);
        tableViewMemoryMap->verticalHeader()->setMinimumSectionSize(20);
        tableViewMemoryMap->verticalHeader()->setDefaultSectionSize(20);

        horizontalLayout->addWidget(tableViewMemoryMap);


        verticalLayout->addLayout(horizontalLayout);

        splitter->addWidget(layoutWidget);
        groupBoxHex = new QGroupBox(splitter);
        groupBoxHex->setObjectName("groupBoxHex");
        groupBoxHex->setTitle(QString::fromUtf8("Hex"));
        verticalLayout_3 = new QVBoxLayout(groupBoxHex);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidgetHex = new QStackedWidget(groupBoxHex);
        stackedWidgetHex->setObjectName("stackedWidgetHex");
        pageHex = new QWidget();
        pageHex->setObjectName("pageHex");
        verticalLayout_5 = new QVBoxLayout(pageHex);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widgetHex = new XHexView(pageHex);
        widgetHex->setObjectName("widgetHex");

        verticalLayout_5->addWidget(widgetHex);

        stackedWidgetHex->addWidget(pageHex);
        pageInvalid = new QWidget();
        pageInvalid->setObjectName("pageInvalid");
        stackedWidgetHex->addWidget(pageInvalid);

        verticalLayout_3->addWidget(stackedWidgetHex);

        splitter->addWidget(groupBoxHex);

        verticalLayout_4->addWidget(splitter);


        retranslateUi(XMemoryMapWidget);

        stackedWidgetHex->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XMemoryMapWidget);
    } // setupUi

    void retranslateUi(QWidget *XMemoryMapWidget)
    {
        checkBoxShowAll->setText(QCoreApplication::translate("XMemoryMapWidget", "Show all", nullptr));
        toolButtonDumpAll->setText(QCoreApplication::translate("XMemoryMapWidget", "Dump all", nullptr));
        toolButtonSave->setText(QCoreApplication::translate("XMemoryMapWidget", "Save", nullptr));
        toolButtonReload->setText(QCoreApplication::translate("XMemoryMapWidget", "Reload", nullptr));
        radioButtonFileOffset->setText(QCoreApplication::translate("XMemoryMapWidget", "File offset", nullptr));
        radioButtonVirtualAddress->setText(QCoreApplication::translate("XMemoryMapWidget", "Virtual address", nullptr));
        radioButtonRelativeVirtualAddress->setText(QCoreApplication::translate("XMemoryMapWidget", "Relative virtual address", nullptr));
        groupBoxMode->setTitle(QCoreApplication::translate("XMemoryMapWidget", "Mode", nullptr));
        groupBoxEndianness->setTitle(QCoreApplication::translate("XMemoryMapWidget", "Endianness", nullptr));
        groupBoxArch->setTitle(QCoreApplication::translate("XMemoryMapWidget", "Architecture", nullptr));
        (void)XMemoryMapWidget;
    } // retranslateUi

};

namespace Ui {
    class XMemoryMapWidget: public Ui_XMemoryMapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XMEMORYMAPWIDGET_H
