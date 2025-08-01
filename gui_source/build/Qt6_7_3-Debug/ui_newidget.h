/********************************************************************************
** Form generated from reading UI file 'newidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWIDGET_H
#define UI_NEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
#include "xmultidisasmwidget.h"
#include "xtableview.h"
#include "xvirustotalwidget.h"
#include "xvisualizationwidget.h"
#include "yarawidgetadvanced.h"

QT_BEGIN_NAMESPACE

class Ui_NEWidget
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
    QVBoxLayout *verticalLayout_14;
    XFileInfoWidget *widgetInfo;
    QWidget *page_Visualization;
    QVBoxLayout *verticalLayout_15;
    XVisualizationWidget *widgetVisualization;
    QWidget *page_VirusTotal;
    QVBoxLayout *verticalLayout_14_2;
    XVirusTotalWidget *widgetVirusTotal;
    QWidget *page_HEX;
    QVBoxLayout *verticalLayout_2;
    XHexViewWidget *widgetHex;
    QWidget *page_Disasm;
    QVBoxLayout *verticalLayout_10;
    XMultiDisasmWidget *widgetDisasm;
    QWidget *page_Hash;
    QVBoxLayout *verticalLayout_11;
    XHashWidget *widgetHash;
    QWidget *page_Strings;
    QVBoxLayout *verticalLayout_6;
    SearchStringsWidget *widgetStrings;
    QWidget *page_Signatures;
    QVBoxLayout *verticalLayout_12;
    SearchSignaturesWidget *widgetSignatures;
    QWidget *page_MemoryMap;
    QVBoxLayout *verticalLayout_7;
    XMemoryMapWidget *widgetMemoryMap;
    QWidget *page_Entropy;
    QVBoxLayout *verticalLayout_8;
    XEntropyWidget *widgetEntropy;
    QWidget *page_Detect;
    QVBoxLayout *verticalLayout_9;
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
    QWidget *page_DOS_HEADER;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QTableWidget *tableWidget_DOS_HEADER;
    ToolsWidget *widgetHex_DOS_HEADER;
    QWidget *page_OS2_HEADER;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter_3;
    QTableWidget *tableWidget_OS2_HEADER;
    ToolsWidget *widgetHex_OS2_HEADER;
    QWidget *page_Segments;
    QVBoxLayout *verticalLayout_13;
    QSplitter *splitter_4;
    XTableView *tableView_SEGMENTS;
    ToolsWidget *widgetHex_SEGMENTS;
    QWidget *page_OVERLAY;
    QVBoxLayout *verticalLayout_4;
    ToolsWidget *widgetHex_OVERLAY;

    void setupUi(QWidget *NEWidget)
    {
        if (NEWidget->objectName().isEmpty())
            NEWidget->setObjectName("NEWidget");
        NEWidget->resize(909, 162);
        NEWidget->setWindowTitle(QString::fromUtf8("NE"));
        verticalLayout = new QVBoxLayout(NEWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        toolButtonReload = new QToolButton(NEWidget);
        toolButtonReload->setObjectName("toolButtonReload");

        horizontalLayout->addWidget(toolButtonReload);

        toolButtonPrev = new QToolButton(NEWidget);
        toolButtonPrev->setObjectName("toolButtonPrev");
        toolButtonPrev->setText(QString::fromUtf8("<"));

        horizontalLayout->addWidget(toolButtonPrev);

        toolButtonNext = new QToolButton(NEWidget);
        toolButtonNext->setObjectName("toolButtonNext");
        toolButtonNext->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(toolButtonNext);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(NEWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(NEWidget);
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
        verticalLayout_14 = new QVBoxLayout(page_Info);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        widgetInfo = new XFileInfoWidget(page_Info);
        widgetInfo->setObjectName("widgetInfo");

        verticalLayout_14->addWidget(widgetInfo);

        stackedWidgetInfo->addWidget(page_Info);
        page_Visualization = new QWidget();
        page_Visualization->setObjectName("page_Visualization");
        verticalLayout_15 = new QVBoxLayout(page_Visualization);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        widgetVisualization = new XVisualizationWidget(page_Visualization);
        widgetVisualization->setObjectName("widgetVisualization");

        verticalLayout_15->addWidget(widgetVisualization);

        stackedWidgetInfo->addWidget(page_Visualization);
        page_VirusTotal = new QWidget();
        page_VirusTotal->setObjectName("page_VirusTotal");
        verticalLayout_14_2 = new QVBoxLayout(page_VirusTotal);
        verticalLayout_14_2->setObjectName("verticalLayout_14_2");
        verticalLayout_14_2->setContentsMargins(0, 0, 0, 0);
        widgetVirusTotal = new XVirusTotalWidget(page_VirusTotal);
        widgetVirusTotal->setObjectName("widgetVirusTotal");

        verticalLayout_14_2->addWidget(widgetVirusTotal);

        stackedWidgetInfo->addWidget(page_VirusTotal);
        page_HEX = new QWidget();
        page_HEX->setObjectName("page_HEX");
        verticalLayout_2 = new QVBoxLayout(page_HEX);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetHex = new XHexViewWidget(page_HEX);
        widgetHex->setObjectName("widgetHex");

        verticalLayout_2->addWidget(widgetHex);

        stackedWidgetInfo->addWidget(page_HEX);
        page_Disasm = new QWidget();
        page_Disasm->setObjectName("page_Disasm");
        verticalLayout_10 = new QVBoxLayout(page_Disasm);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        widgetDisasm = new XMultiDisasmWidget(page_Disasm);
        widgetDisasm->setObjectName("widgetDisasm");

        verticalLayout_10->addWidget(widgetDisasm);

        stackedWidgetInfo->addWidget(page_Disasm);
        page_Hash = new QWidget();
        page_Hash->setObjectName("page_Hash");
        verticalLayout_11 = new QVBoxLayout(page_Hash);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        widgetHash = new XHashWidget(page_Hash);
        widgetHash->setObjectName("widgetHash");

        verticalLayout_11->addWidget(widgetHash);

        stackedWidgetInfo->addWidget(page_Hash);
        page_Strings = new QWidget();
        page_Strings->setObjectName("page_Strings");
        verticalLayout_6 = new QVBoxLayout(page_Strings);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widgetStrings = new SearchStringsWidget(page_Strings);
        widgetStrings->setObjectName("widgetStrings");

        verticalLayout_6->addWidget(widgetStrings);

        stackedWidgetInfo->addWidget(page_Strings);
        page_Signatures = new QWidget();
        page_Signatures->setObjectName("page_Signatures");
        verticalLayout_12 = new QVBoxLayout(page_Signatures);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        widgetSignatures = new SearchSignaturesWidget(page_Signatures);
        widgetSignatures->setObjectName("widgetSignatures");

        verticalLayout_12->addWidget(widgetSignatures);

        stackedWidgetInfo->addWidget(page_Signatures);
        page_MemoryMap = new QWidget();
        page_MemoryMap->setObjectName("page_MemoryMap");
        verticalLayout_7 = new QVBoxLayout(page_MemoryMap);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widgetMemoryMap = new XMemoryMapWidget(page_MemoryMap);
        widgetMemoryMap->setObjectName("widgetMemoryMap");

        verticalLayout_7->addWidget(widgetMemoryMap);

        stackedWidgetInfo->addWidget(page_MemoryMap);
        page_Entropy = new QWidget();
        page_Entropy->setObjectName("page_Entropy");
        verticalLayout_8 = new QVBoxLayout(page_Entropy);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        widgetEntropy = new XEntropyWidget(page_Entropy);
        widgetEntropy->setObjectName("widgetEntropy");

        verticalLayout_8->addWidget(widgetEntropy);

        stackedWidgetInfo->addWidget(page_Entropy);
        page_Detect = new QWidget();
        page_Detect->setObjectName("page_Detect");
        verticalLayout_9 = new QVBoxLayout(page_Detect);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        widgetHeuristicScan = new NFDWidgetAdvanced(page_Detect);
        widgetHeuristicScan->setObjectName("widgetHeuristicScan");

        verticalLayout_9->addWidget(widgetHeuristicScan);

        stackedWidgetInfo->addWidget(page_Detect);
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
        page_DOS_HEADER = new QWidget();
        page_DOS_HEADER->setObjectName("page_DOS_HEADER");
        verticalLayout_3 = new QVBoxLayout(page_DOS_HEADER);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(page_DOS_HEADER);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Vertical);
        tableWidget_DOS_HEADER = new QTableWidget(splitter_2);
        tableWidget_DOS_HEADER->setObjectName("tableWidget_DOS_HEADER");
        tableWidget_DOS_HEADER->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_DOS_HEADER->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_DOS_HEADER->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_2->addWidget(tableWidget_DOS_HEADER);
        tableWidget_DOS_HEADER->horizontalHeader()->setVisible(false);
        tableWidget_DOS_HEADER->verticalHeader()->setVisible(false);
        tableWidget_DOS_HEADER->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_DOS_HEADER = new ToolsWidget(splitter_2);
        widgetHex_DOS_HEADER->setObjectName("widgetHex_DOS_HEADER");
        splitter_2->addWidget(widgetHex_DOS_HEADER);

        verticalLayout_3->addWidget(splitter_2);

        stackedWidgetInfo->addWidget(page_DOS_HEADER);
        page_OS2_HEADER = new QWidget();
        page_OS2_HEADER->setObjectName("page_OS2_HEADER");
        verticalLayout_5 = new QVBoxLayout(page_OS2_HEADER);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(page_OS2_HEADER);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Vertical);
        tableWidget_OS2_HEADER = new QTableWidget(splitter_3);
        tableWidget_OS2_HEADER->setObjectName("tableWidget_OS2_HEADER");
        tableWidget_OS2_HEADER->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_OS2_HEADER->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_OS2_HEADER->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_3->addWidget(tableWidget_OS2_HEADER);
        tableWidget_OS2_HEADER->horizontalHeader()->setVisible(false);
        tableWidget_OS2_HEADER->verticalHeader()->setVisible(false);
        tableWidget_OS2_HEADER->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_OS2_HEADER = new ToolsWidget(splitter_3);
        widgetHex_OS2_HEADER->setObjectName("widgetHex_OS2_HEADER");
        widgetHex_OS2_HEADER->setMaximumSize(QSize(16777215, 200));
        splitter_3->addWidget(widgetHex_OS2_HEADER);

        verticalLayout_5->addWidget(splitter_3);

        stackedWidgetInfo->addWidget(page_OS2_HEADER);
        page_Segments = new QWidget();
        page_Segments->setObjectName("page_Segments");
        verticalLayout_13 = new QVBoxLayout(page_Segments);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(page_Segments);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Vertical);
        tableView_SEGMENTS = new XTableView(splitter_4);
        tableView_SEGMENTS->setObjectName("tableView_SEGMENTS");
        tableView_SEGMENTS->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_SEGMENTS->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_SEGMENTS->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_SEGMENTS->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_4->addWidget(tableView_SEGMENTS);
        tableView_SEGMENTS->horizontalHeader()->setDefaultSectionSize(57);
        tableView_SEGMENTS->verticalHeader()->setVisible(false);
        tableView_SEGMENTS->verticalHeader()->setMinimumSectionSize(20);
        tableView_SEGMENTS->verticalHeader()->setDefaultSectionSize(20);
        widgetHex_SEGMENTS = new ToolsWidget(splitter_4);
        widgetHex_SEGMENTS->setObjectName("widgetHex_SEGMENTS");
        sizePolicy.setHeightForWidth(widgetHex_SEGMENTS->sizePolicy().hasHeightForWidth());
        widgetHex_SEGMENTS->setSizePolicy(sizePolicy);
        splitter_4->addWidget(widgetHex_SEGMENTS);

        verticalLayout_13->addWidget(splitter_4);

        stackedWidgetInfo->addWidget(page_Segments);
        page_OVERLAY = new QWidget();
        page_OVERLAY->setObjectName("page_OVERLAY");
        verticalLayout_4 = new QVBoxLayout(page_OVERLAY);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(1, 1, 1, 1);
        widgetHex_OVERLAY = new ToolsWidget(page_OVERLAY);
        widgetHex_OVERLAY->setObjectName("widgetHex_OVERLAY");

        verticalLayout_4->addWidget(widgetHex_OVERLAY);

        stackedWidgetInfo->addWidget(page_OVERLAY);
        splitter->addWidget(stackedWidgetInfo);

        verticalLayout->addWidget(splitter);


        retranslateUi(NEWidget);

        QMetaObject::connectSlotsByName(NEWidget);
    } // setupUi

    void retranslateUi(QWidget *NEWidget)
    {
        toolButtonReload->setText(QCoreApplication::translate("NEWidget", "Reload", nullptr));
        checkBoxReadonly->setText(QCoreApplication::translate("NEWidget", "Readonly", nullptr));
        (void)NEWidget;
    } // retranslateUi

};

namespace Ui {
    class NEWidget: public Ui_NEWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWIDGET_H
