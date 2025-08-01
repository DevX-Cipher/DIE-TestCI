/********************************************************************************
** Form generated from reading UI file 'dexwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEXWIDGET_H
#define UI_DEXWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "diewidgetadvanced.h"
#include "nfdwidgetadvanced.h"
#include "searchsignatureswidget.h"
#include "searchstringswidget.h"
#include "searchvalueswidget.h"
#include "toolswidget.h"
#include "xentropywidget.h"
#include "xextractorwidget.h"
#include "xfileinfowidget.h"
#include "xhashwidget.h"
#include "xhexviewwidget.h"
#include "xmemorymapwidget.h"
#include "xtableview.h"
#include "xvirustotalwidget.h"
#include "xvisualizationwidget.h"
#include "yarawidgetadvanced.h"

QT_BEGIN_NAMESPACE

class Ui_DEXWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonReload;
    QToolButton *toolButtonPrev;
    QToolButton *toolButtonNext;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxReadonly;
    QSplitter *splitter;
    QTreeWidget *treeWidgetNavi;
    QStackedWidget *stackedWidgetInfo;
    QWidget *page_Info;
    QVBoxLayout *verticalLayout_16;
    XFileInfoWidget *widgetInfo;
    QWidget *page_Visualization;
    QVBoxLayout *verticalLayout_19;
    XVisualizationWidget *widgetVisualization;
    QWidget *page_VirusTotal;
    QVBoxLayout *verticalLayout_16_2;
    XVirusTotalWidget *widgetVirusTotal;
    QWidget *page_HEX;
    QVBoxLayout *verticalLayout_2;
    XHexViewWidget *widgetHex;
    QWidget *page_Hash;
    QVBoxLayout *verticalLayout_15;
    XHashWidget *widgetHash;
    QWidget *page_Strings;
    QVBoxLayout *verticalLayout_8;
    SearchStringsWidget *widgetStrings;
    QWidget *page_Signatures;
    QVBoxLayout *verticalLayout_20DD;
    SearchSignaturesWidget *widgetSignatures;
    QWidget *pageMemoryMap;
    QVBoxLayout *verticalLayout_14;
    XMemoryMapWidget *widgetMemoryMap;
    QWidget *page_Entropy;
    QVBoxLayout *verticalLayout_17;
    XEntropyWidget *widgetEntropy;
    QWidget *page_HeuristicScan;
    QVBoxLayout *verticalLayout_18;
    NFDWidgetAdvanced *widgetHeuristicScan;
    QWidget *page_Extractor;
    QVBoxLayout *verticalLayout_26XX;
    XExtractorWidget *widgetExtractor;
    QWidget *page_Search;
    QVBoxLayout *verticalLayout_63;
    SearchValuesWidget *widgetSearch;
    QWidget *page_DIEScan;
    QVBoxLayout *verticalLayout_5dd;
    DIEWidgetAdvanced *widgetDIEScan;
    QWidget *page_YARAScan;
    QVBoxLayout *verticalLayout_6dd;
    YARAWidgetAdvanced *widgetYARAScan;
    QWidget *page_Header;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QTableWidget *tableWidget_Header;
    ToolsWidget *widgetHex_Header;
    QWidget *page_MapItems;
    QVBoxLayout *verticalLayout_4;
    XTableView *tableView_MapItems;
    QWidget *page_STRING_ID_ITEM;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonSave_STRING_ID_ITEM;
    XTableView *tableView_STRING_ID_ITEM;
    QWidget *page_TYPE_ID_ITEM;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonSave_TYPE_ID_ITEM;
    XTableView *tableView_TYPE_ID_ITEM;
    QWidget *page_PROTO_ID_ITEM;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSave_PROTO_ID_ITEM;
    XTableView *tableView_PROTO_ID_ITEM;
    QWidget *page_FIELD_ID_ITEM;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonSave_FIELD_ID_ITEM;
    XTableView *tableView_FIELD_ID_ITEM;
    QWidget *page_METHOD_ID_ITEM;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSave_METHOD_ID_ITEM;
    XTableView *tableView_METHOD_ID_ITEM;
    QWidget *page_CLASS_DEF_ITEM;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave_CLASS_DEF_ITEM;
    XTableView *tableView_CLASS_DEF_ITEM;

    void setupUi(QWidget *DEXWidget)
    {
        if (DEXWidget->objectName().isEmpty())
            DEXWidget->setObjectName("DEXWidget");
        DEXWidget->resize(894, 271);
        DEXWidget->setWindowTitle(QString::fromUtf8("DEX"));
        verticalLayout = new QVBoxLayout(DEXWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        toolButtonReload = new QToolButton(DEXWidget);
        toolButtonReload->setObjectName("toolButtonReload");

        horizontalLayout->addWidget(toolButtonReload);

        toolButtonPrev = new QToolButton(DEXWidget);
        toolButtonPrev->setObjectName("toolButtonPrev");
        toolButtonPrev->setText(QString::fromUtf8("<"));

        horizontalLayout->addWidget(toolButtonPrev);

        toolButtonNext = new QToolButton(DEXWidget);
        toolButtonNext->setObjectName("toolButtonNext");
        toolButtonNext->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(toolButtonNext);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(DEXWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(DEXWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        treeWidgetNavi = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidgetNavi->setHeaderItem(__qtreewidgetitem);
        treeWidgetNavi->setObjectName("treeWidgetNavi");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidgetNavi->sizePolicy().hasHeightForWidth());
        treeWidgetNavi->setSizePolicy(sizePolicy);
        splitter->addWidget(treeWidgetNavi);
        treeWidgetNavi->header()->setVisible(false);
        stackedWidgetInfo = new QStackedWidget(splitter);
        stackedWidgetInfo->setObjectName("stackedWidgetInfo");
        page_Info = new QWidget();
        page_Info->setObjectName("page_Info");
        verticalLayout_16 = new QVBoxLayout(page_Info);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        widgetInfo = new XFileInfoWidget(page_Info);
        widgetInfo->setObjectName("widgetInfo");

        verticalLayout_16->addWidget(widgetInfo);

        stackedWidgetInfo->addWidget(page_Info);
        page_Visualization = new QWidget();
        page_Visualization->setObjectName("page_Visualization");
        verticalLayout_19 = new QVBoxLayout(page_Visualization);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        widgetVisualization = new XVisualizationWidget(page_Visualization);
        widgetVisualization->setObjectName("widgetVisualization");

        verticalLayout_19->addWidget(widgetVisualization);

        stackedWidgetInfo->addWidget(page_Visualization);
        page_VirusTotal = new QWidget();
        page_VirusTotal->setObjectName("page_VirusTotal");
        verticalLayout_16_2 = new QVBoxLayout(page_VirusTotal);
        verticalLayout_16_2->setObjectName("verticalLayout_16_2");
        verticalLayout_16_2->setContentsMargins(0, 0, 0, 0);
        widgetVirusTotal = new XVirusTotalWidget(page_VirusTotal);
        widgetVirusTotal->setObjectName("widgetVirusTotal");

        verticalLayout_16_2->addWidget(widgetVirusTotal);

        stackedWidgetInfo->addWidget(page_VirusTotal);
        page_HEX = new QWidget();
        page_HEX->setObjectName("page_HEX");
        verticalLayout_2 = new QVBoxLayout(page_HEX);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetHex = new XHexViewWidget(page_HEX);
        widgetHex->setObjectName("widgetHex");

        verticalLayout_2->addWidget(widgetHex);

        stackedWidgetInfo->addWidget(page_HEX);
        page_Hash = new QWidget();
        page_Hash->setObjectName("page_Hash");
        verticalLayout_15 = new QVBoxLayout(page_Hash);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        widgetHash = new XHashWidget(page_Hash);
        widgetHash->setObjectName("widgetHash");

        verticalLayout_15->addWidget(widgetHash);

        stackedWidgetInfo->addWidget(page_Hash);
        page_Strings = new QWidget();
        page_Strings->setObjectName("page_Strings");
        verticalLayout_8 = new QVBoxLayout(page_Strings);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        widgetStrings = new SearchStringsWidget(page_Strings);
        widgetStrings->setObjectName("widgetStrings");

        verticalLayout_8->addWidget(widgetStrings);

        stackedWidgetInfo->addWidget(page_Strings);
        page_Signatures = new QWidget();
        page_Signatures->setObjectName("page_Signatures");
        verticalLayout_20DD = new QVBoxLayout(page_Signatures);
        verticalLayout_20DD->setObjectName("verticalLayout_20DD");
        verticalLayout_20DD->setContentsMargins(0, 0, 0, 0);
        widgetSignatures = new SearchSignaturesWidget(page_Signatures);
        widgetSignatures->setObjectName("widgetSignatures");

        verticalLayout_20DD->addWidget(widgetSignatures);

        stackedWidgetInfo->addWidget(page_Signatures);
        pageMemoryMap = new QWidget();
        pageMemoryMap->setObjectName("pageMemoryMap");
        verticalLayout_14 = new QVBoxLayout(pageMemoryMap);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        widgetMemoryMap = new XMemoryMapWidget(pageMemoryMap);
        widgetMemoryMap->setObjectName("widgetMemoryMap");

        verticalLayout_14->addWidget(widgetMemoryMap);

        stackedWidgetInfo->addWidget(pageMemoryMap);
        page_Entropy = new QWidget();
        page_Entropy->setObjectName("page_Entropy");
        verticalLayout_17 = new QVBoxLayout(page_Entropy);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        widgetEntropy = new XEntropyWidget(page_Entropy);
        widgetEntropy->setObjectName("widgetEntropy");

        verticalLayout_17->addWidget(widgetEntropy);

        stackedWidgetInfo->addWidget(page_Entropy);
        page_HeuristicScan = new QWidget();
        page_HeuristicScan->setObjectName("page_HeuristicScan");
        verticalLayout_18 = new QVBoxLayout(page_HeuristicScan);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        widgetHeuristicScan = new NFDWidgetAdvanced(page_HeuristicScan);
        widgetHeuristicScan->setObjectName("widgetHeuristicScan");

        verticalLayout_18->addWidget(widgetHeuristicScan);

        stackedWidgetInfo->addWidget(page_HeuristicScan);
        page_Extractor = new QWidget();
        page_Extractor->setObjectName("page_Extractor");
        verticalLayout_26XX = new QVBoxLayout(page_Extractor);
        verticalLayout_26XX->setObjectName("verticalLayout_26XX");
        verticalLayout_26XX->setContentsMargins(0, 0, 0, 0);
        widgetExtractor = new XExtractorWidget(page_Extractor);
        widgetExtractor->setObjectName("widgetExtractor");

        verticalLayout_26XX->addWidget(widgetExtractor);

        stackedWidgetInfo->addWidget(page_Extractor);
        page_Search = new QWidget();
        page_Search->setObjectName("page_Search");
        verticalLayout_63 = new QVBoxLayout(page_Search);
        verticalLayout_63->setObjectName("verticalLayout_63");
        verticalLayout_63->setContentsMargins(0, 0, 0, 0);
        widgetSearch = new SearchValuesWidget(page_Search);
        widgetSearch->setObjectName("widgetSearch");

        verticalLayout_63->addWidget(widgetSearch);

        stackedWidgetInfo->addWidget(page_Search);
        page_DIEScan = new QWidget();
        page_DIEScan->setObjectName("page_DIEScan");
        verticalLayout_5dd = new QVBoxLayout(page_DIEScan);
        verticalLayout_5dd->setObjectName("verticalLayout_5dd");
        verticalLayout_5dd->setContentsMargins(0, 0, 0, 0);
        widgetDIEScan = new DIEWidgetAdvanced(page_DIEScan);
        widgetDIEScan->setObjectName("widgetDIEScan");

        verticalLayout_5dd->addWidget(widgetDIEScan);

        stackedWidgetInfo->addWidget(page_DIEScan);
        page_YARAScan = new QWidget();
        page_YARAScan->setObjectName("page_YARAScan");
        verticalLayout_6dd = new QVBoxLayout(page_YARAScan);
        verticalLayout_6dd->setObjectName("verticalLayout_6dd");
        verticalLayout_6dd->setContentsMargins(0, 0, 0, 0);
        widgetYARAScan = new YARAWidgetAdvanced(page_YARAScan);
        widgetYARAScan->setObjectName("widgetYARAScan");

        verticalLayout_6dd->addWidget(widgetYARAScan);

        stackedWidgetInfo->addWidget(page_YARAScan);
        page_Header = new QWidget();
        page_Header->setObjectName("page_Header");
        verticalLayout_3 = new QVBoxLayout(page_Header);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(page_Header);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Vertical);
        tableWidget_Header = new QTableWidget(splitter_2);
        tableWidget_Header->setObjectName("tableWidget_Header");
        tableWidget_Header->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Header->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Header->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_2->addWidget(tableWidget_Header);
        tableWidget_Header->horizontalHeader()->setVisible(false);
        tableWidget_Header->verticalHeader()->setVisible(false);
        tableWidget_Header->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_Header = new ToolsWidget(splitter_2);
        widgetHex_Header->setObjectName("widgetHex_Header");
        splitter_2->addWidget(widgetHex_Header);

        verticalLayout_3->addWidget(splitter_2);

        stackedWidgetInfo->addWidget(page_Header);
        page_MapItems = new QWidget();
        page_MapItems->setObjectName("page_MapItems");
        verticalLayout_4 = new QVBoxLayout(page_MapItems);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tableView_MapItems = new XTableView(page_MapItems);
        tableView_MapItems->setObjectName("tableView_MapItems");
        tableView_MapItems->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_MapItems->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_MapItems->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_MapItems->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_MapItems->horizontalHeader()->setDefaultSectionSize(57);
        tableView_MapItems->verticalHeader()->setVisible(false);
        tableView_MapItems->verticalHeader()->setMinimumSectionSize(20);
        tableView_MapItems->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_4->addWidget(tableView_MapItems);

        stackedWidgetInfo->addWidget(page_MapItems);
        page_STRING_ID_ITEM = new QWidget();
        page_STRING_ID_ITEM->setObjectName("page_STRING_ID_ITEM");
        verticalLayout_12 = new QVBoxLayout(page_STRING_ID_ITEM);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        pushButtonSave_STRING_ID_ITEM = new QPushButton(page_STRING_ID_ITEM);
        pushButtonSave_STRING_ID_ITEM->setObjectName("pushButtonSave_STRING_ID_ITEM");

        horizontalLayout_2->addWidget(pushButtonSave_STRING_ID_ITEM);


        verticalLayout_12->addLayout(horizontalLayout_2);

        tableView_STRING_ID_ITEM = new XTableView(page_STRING_ID_ITEM);
        tableView_STRING_ID_ITEM->setObjectName("tableView_STRING_ID_ITEM");
        tableView_STRING_ID_ITEM->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_STRING_ID_ITEM->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_STRING_ID_ITEM->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_STRING_ID_ITEM->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_STRING_ID_ITEM->horizontalHeader()->setDefaultSectionSize(57);
        tableView_STRING_ID_ITEM->verticalHeader()->setVisible(false);
        tableView_STRING_ID_ITEM->verticalHeader()->setMinimumSectionSize(20);
        tableView_STRING_ID_ITEM->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_12->addWidget(tableView_STRING_ID_ITEM);

        stackedWidgetInfo->addWidget(page_STRING_ID_ITEM);
        page_TYPE_ID_ITEM = new QWidget();
        page_TYPE_ID_ITEM->setObjectName("page_TYPE_ID_ITEM");
        verticalLayout_13 = new QVBoxLayout(page_TYPE_ID_ITEM);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButtonSave_TYPE_ID_ITEM = new QPushButton(page_TYPE_ID_ITEM);
        pushButtonSave_TYPE_ID_ITEM->setObjectName("pushButtonSave_TYPE_ID_ITEM");

        horizontalLayout_3->addWidget(pushButtonSave_TYPE_ID_ITEM);


        verticalLayout_13->addLayout(horizontalLayout_3);

        tableView_TYPE_ID_ITEM = new XTableView(page_TYPE_ID_ITEM);
        tableView_TYPE_ID_ITEM->setObjectName("tableView_TYPE_ID_ITEM");
        tableView_TYPE_ID_ITEM->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_TYPE_ID_ITEM->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_TYPE_ID_ITEM->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_TYPE_ID_ITEM->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_TYPE_ID_ITEM->horizontalHeader()->setDefaultSectionSize(57);
        tableView_TYPE_ID_ITEM->verticalHeader()->setVisible(false);
        tableView_TYPE_ID_ITEM->verticalHeader()->setMinimumSectionSize(20);
        tableView_TYPE_ID_ITEM->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_13->addWidget(tableView_TYPE_ID_ITEM);

        stackedWidgetInfo->addWidget(page_TYPE_ID_ITEM);
        page_PROTO_ID_ITEM = new QWidget();
        page_PROTO_ID_ITEM->setObjectName("page_PROTO_ID_ITEM");
        verticalLayout_7 = new QVBoxLayout(page_PROTO_ID_ITEM);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButtonSave_PROTO_ID_ITEM = new QPushButton(page_PROTO_ID_ITEM);
        pushButtonSave_PROTO_ID_ITEM->setObjectName("pushButtonSave_PROTO_ID_ITEM");

        horizontalLayout_4->addWidget(pushButtonSave_PROTO_ID_ITEM);


        verticalLayout_7->addLayout(horizontalLayout_4);

        tableView_PROTO_ID_ITEM = new XTableView(page_PROTO_ID_ITEM);
        tableView_PROTO_ID_ITEM->setObjectName("tableView_PROTO_ID_ITEM");
        tableView_PROTO_ID_ITEM->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_PROTO_ID_ITEM->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_PROTO_ID_ITEM->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_PROTO_ID_ITEM->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_PROTO_ID_ITEM->horizontalHeader()->setDefaultSectionSize(57);
        tableView_PROTO_ID_ITEM->verticalHeader()->setVisible(false);
        tableView_PROTO_ID_ITEM->verticalHeader()->setMinimumSectionSize(20);
        tableView_PROTO_ID_ITEM->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_7->addWidget(tableView_PROTO_ID_ITEM);

        stackedWidgetInfo->addWidget(page_PROTO_ID_ITEM);
        page_FIELD_ID_ITEM = new QWidget();
        page_FIELD_ID_ITEM->setObjectName("page_FIELD_ID_ITEM");
        verticalLayout_10 = new QVBoxLayout(page_FIELD_ID_ITEM);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButtonSave_FIELD_ID_ITEM = new QPushButton(page_FIELD_ID_ITEM);
        pushButtonSave_FIELD_ID_ITEM->setObjectName("pushButtonSave_FIELD_ID_ITEM");

        horizontalLayout_5->addWidget(pushButtonSave_FIELD_ID_ITEM);


        verticalLayout_10->addLayout(horizontalLayout_5);

        tableView_FIELD_ID_ITEM = new XTableView(page_FIELD_ID_ITEM);
        tableView_FIELD_ID_ITEM->setObjectName("tableView_FIELD_ID_ITEM");
        tableView_FIELD_ID_ITEM->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_FIELD_ID_ITEM->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_FIELD_ID_ITEM->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_FIELD_ID_ITEM->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_FIELD_ID_ITEM->horizontalHeader()->setDefaultSectionSize(57);
        tableView_FIELD_ID_ITEM->verticalHeader()->setVisible(false);
        tableView_FIELD_ID_ITEM->verticalHeader()->setMinimumSectionSize(20);
        tableView_FIELD_ID_ITEM->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_10->addWidget(tableView_FIELD_ID_ITEM);

        stackedWidgetInfo->addWidget(page_FIELD_ID_ITEM);
        page_METHOD_ID_ITEM = new QWidget();
        page_METHOD_ID_ITEM->setObjectName("page_METHOD_ID_ITEM");
        verticalLayout_9 = new QVBoxLayout(page_METHOD_ID_ITEM);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        pushButtonSave_METHOD_ID_ITEM = new QPushButton(page_METHOD_ID_ITEM);
        pushButtonSave_METHOD_ID_ITEM->setObjectName("pushButtonSave_METHOD_ID_ITEM");

        horizontalLayout_6->addWidget(pushButtonSave_METHOD_ID_ITEM);


        verticalLayout_9->addLayout(horizontalLayout_6);

        tableView_METHOD_ID_ITEM = new XTableView(page_METHOD_ID_ITEM);
        tableView_METHOD_ID_ITEM->setObjectName("tableView_METHOD_ID_ITEM");
        tableView_METHOD_ID_ITEM->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_METHOD_ID_ITEM->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_METHOD_ID_ITEM->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_METHOD_ID_ITEM->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_METHOD_ID_ITEM->horizontalHeader()->setDefaultSectionSize(57);
        tableView_METHOD_ID_ITEM->verticalHeader()->setVisible(false);
        tableView_METHOD_ID_ITEM->verticalHeader()->setMinimumSectionSize(20);
        tableView_METHOD_ID_ITEM->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_9->addWidget(tableView_METHOD_ID_ITEM);

        stackedWidgetInfo->addWidget(page_METHOD_ID_ITEM);
        page_CLASS_DEF_ITEM = new QWidget();
        page_CLASS_DEF_ITEM->setObjectName("page_CLASS_DEF_ITEM");
        verticalLayout_11 = new QVBoxLayout(page_CLASS_DEF_ITEM);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonSave_CLASS_DEF_ITEM = new QPushButton(page_CLASS_DEF_ITEM);
        pushButtonSave_CLASS_DEF_ITEM->setObjectName("pushButtonSave_CLASS_DEF_ITEM");

        horizontalLayout_7->addWidget(pushButtonSave_CLASS_DEF_ITEM);


        verticalLayout_11->addLayout(horizontalLayout_7);

        tableView_CLASS_DEF_ITEM = new XTableView(page_CLASS_DEF_ITEM);
        tableView_CLASS_DEF_ITEM->setObjectName("tableView_CLASS_DEF_ITEM");
        tableView_CLASS_DEF_ITEM->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_CLASS_DEF_ITEM->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_CLASS_DEF_ITEM->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_CLASS_DEF_ITEM->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_CLASS_DEF_ITEM->horizontalHeader()->setDefaultSectionSize(57);
        tableView_CLASS_DEF_ITEM->verticalHeader()->setVisible(false);
        tableView_CLASS_DEF_ITEM->verticalHeader()->setMinimumSectionSize(20);
        tableView_CLASS_DEF_ITEM->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_11->addWidget(tableView_CLASS_DEF_ITEM);

        stackedWidgetInfo->addWidget(page_CLASS_DEF_ITEM);
        splitter->addWidget(stackedWidgetInfo);

        verticalLayout->addWidget(splitter);


        retranslateUi(DEXWidget);

        stackedWidgetInfo->setCurrentIndex(17);


        QMetaObject::connectSlotsByName(DEXWidget);
    } // setupUi

    void retranslateUi(QWidget *DEXWidget)
    {
        toolButtonReload->setText(QCoreApplication::translate("DEXWidget", "Reload", nullptr));
        checkBoxReadonly->setText(QCoreApplication::translate("DEXWidget", "Readonly", nullptr));
        pushButtonSave_STRING_ID_ITEM->setText(QCoreApplication::translate("DEXWidget", "Save", nullptr));
        pushButtonSave_TYPE_ID_ITEM->setText(QCoreApplication::translate("DEXWidget", "Save", nullptr));
        pushButtonSave_PROTO_ID_ITEM->setText(QCoreApplication::translate("DEXWidget", "Save", nullptr));
        pushButtonSave_FIELD_ID_ITEM->setText(QCoreApplication::translate("DEXWidget", "Save", nullptr));
        pushButtonSave_METHOD_ID_ITEM->setText(QCoreApplication::translate("DEXWidget", "Save", nullptr));
        pushButtonSave_CLASS_DEF_ITEM->setText(QCoreApplication::translate("DEXWidget", "Save", nullptr));
        (void)DEXWidget;
    } // retranslateUi

};

namespace Ui {
    class DEXWidget: public Ui_DEXWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEXWIDGET_H
