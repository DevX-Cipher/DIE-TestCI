/********************************************************************************
** Form generated from reading UI file 'elfwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELFWIDGET_H
#define UI_ELFWIDGET_H

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
#include "xmultidisasmwidget.h"
#include "xtableview.h"
#include "xvirustotalwidget.h"
#include "xvisualizationwidget.h"
#include "yarawidgetadvanced.h"

QT_BEGIN_NAMESPACE

class Ui_ELFWidget
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
    QVBoxLayout *verticalLayout_24;
    XFileInfoWidget *widgetInfo;
    QWidget *page_Visualization;
    QVBoxLayout *verticalLayout_26;
    XVisualizationWidget *widgetVisualization;
    QWidget *page_VirusTotal;
    QVBoxLayout *verticalLayout_24_2;
    XVirusTotalWidget *widgetVirusTotal;
    QWidget *page_HEX;
    QVBoxLayout *verticalLayout_2;
    XHexViewWidget *widgetHex;
    QWidget *page_Disasm;
    QVBoxLayout *verticalLayout_19;
    XMultiDisasmWidget *widgetDisasm;
    QWidget *page_Hash;
    QVBoxLayout *verticalLayout_21;
    XHashWidget *widgetHash;
    QWidget *page_Strings;
    QVBoxLayout *verticalLayout_8;
    SearchStringsWidget *widgetStrings;
    QWidget *page_Signatures;
    QVBoxLayout *verticalLayout_20;
    SearchSignaturesWidget *widgetSignatures;
    QWidget *page_MemoryMap;
    QVBoxLayout *verticalLayout_7;
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
    QWidget *page_Elf_Ehdr;
    QVBoxLayout *verticalLayout_25;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonSave_Elf_Ehdr;
    QTableWidget *tableWidget_Elf_Ehdr;
    ToolsWidget *widgetHex_Elf_Ehdr;
    QWidget *page_sections;
    QVBoxLayout *verticalLayout_22;
    QSplitter *splitter_3;
    QWidget *layoutWidget_1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSaveSections;
    XTableView *tableView_Elf_Shdr;
    ToolsWidget *widgetHex_Elf_Shdr;
    QWidget *page_programs;
    QVBoxLayout *verticalLayout_23;
    QSplitter *splitter_4;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonSavePrograms;
    XTableView *tableView_Elf_Phdr;
    ToolsWidget *widgetHex_Elf_Phdr;
    QWidget *page_DynamicArrayTags;
    QVBoxLayout *verticalLayout_6;
    XTableView *tableView_DynamicArrayTags;
    QWidget *page_Libraries;
    QVBoxLayout *verticalLayout_9;
    XTableView *tableView_Libraries;
    QWidget *page_Interpreter;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *tableWidget_Interpreter;
    QWidget *page_Notes;
    QVBoxLayout *verticalLayout_11;
    QSplitter *splitter_5;
    XTableView *tableView_Notes;
    ToolsWidget *widgetHex_Notes;
    QWidget *page_RunPath;
    QVBoxLayout *verticalLayout_12;
    QTableWidget *tableWidget_RunPath;
    QWidget *page_StringTable;
    QVBoxLayout *verticalLayout_13;
    ToolsWidget *widgetHex_StringTable;
    QWidget *page_SymbolTable;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonSave_SymbolTable;
    XTableView *tableView_SymbolTable;
    QWidget *page_Rela;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSave_Rela;
    XTableView *tableView_Rela;
    QWidget *page_Rel;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave_Rel;
    XTableView *tableView_Rel;

    void setupUi(QWidget *ELFWidget)
    {
        if (ELFWidget->objectName().isEmpty())
            ELFWidget->setObjectName("ELFWidget");
        ELFWidget->resize(851, 229);
        ELFWidget->setWindowTitle(QString::fromUtf8("ELF"));
        verticalLayout = new QVBoxLayout(ELFWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        toolButtonReload = new QToolButton(ELFWidget);
        toolButtonReload->setObjectName("toolButtonReload");

        horizontalLayout->addWidget(toolButtonReload);

        toolButtonPrev = new QToolButton(ELFWidget);
        toolButtonPrev->setObjectName("toolButtonPrev");
        toolButtonPrev->setText(QString::fromUtf8("<"));

        horizontalLayout->addWidget(toolButtonPrev);

        toolButtonNext = new QToolButton(ELFWidget);
        toolButtonNext->setObjectName("toolButtonNext");
        toolButtonNext->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(toolButtonNext);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(ELFWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(ELFWidget);
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
        verticalLayout_24 = new QVBoxLayout(page_Info);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        widgetInfo = new XFileInfoWidget(page_Info);
        widgetInfo->setObjectName("widgetInfo");

        verticalLayout_24->addWidget(widgetInfo);

        stackedWidgetInfo->addWidget(page_Info);
        page_Visualization = new QWidget();
        page_Visualization->setObjectName("page_Visualization");
        verticalLayout_26 = new QVBoxLayout(page_Visualization);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        widgetVisualization = new XVisualizationWidget(page_Visualization);
        widgetVisualization->setObjectName("widgetVisualization");

        verticalLayout_26->addWidget(widgetVisualization);

        stackedWidgetInfo->addWidget(page_Visualization);
        page_VirusTotal = new QWidget();
        page_VirusTotal->setObjectName("page_VirusTotal");
        verticalLayout_24_2 = new QVBoxLayout(page_VirusTotal);
        verticalLayout_24_2->setObjectName("verticalLayout_24_2");
        verticalLayout_24_2->setContentsMargins(0, 0, 0, 0);
        widgetVirusTotal = new XVirusTotalWidget(page_VirusTotal);
        widgetVirusTotal->setObjectName("widgetVirusTotal");

        verticalLayout_24_2->addWidget(widgetVirusTotal);

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
        page_Disasm = new QWidget();
        page_Disasm->setObjectName("page_Disasm");
        verticalLayout_19 = new QVBoxLayout(page_Disasm);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        widgetDisasm = new XMultiDisasmWidget(page_Disasm);
        widgetDisasm->setObjectName("widgetDisasm");

        verticalLayout_19->addWidget(widgetDisasm);

        stackedWidgetInfo->addWidget(page_Disasm);
        page_Hash = new QWidget();
        page_Hash->setObjectName("page_Hash");
        verticalLayout_21 = new QVBoxLayout(page_Hash);
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        widgetHash = new XHashWidget(page_Hash);
        widgetHash->setObjectName("widgetHash");

        verticalLayout_21->addWidget(widgetHash);

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
        verticalLayout_20 = new QVBoxLayout(page_Signatures);
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        widgetSignatures = new SearchSignaturesWidget(page_Signatures);
        widgetSignatures->setObjectName("widgetSignatures");

        verticalLayout_20->addWidget(widgetSignatures);

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
        page_Elf_Ehdr = new QWidget();
        page_Elf_Ehdr->setObjectName("page_Elf_Ehdr");
        verticalLayout_25 = new QVBoxLayout(page_Elf_Ehdr);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(page_Elf_Ehdr);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        pushButtonSave_Elf_Ehdr = new QPushButton(layoutWidget);
        pushButtonSave_Elf_Ehdr->setObjectName("pushButtonSave_Elf_Ehdr");

        horizontalLayout_6->addWidget(pushButtonSave_Elf_Ehdr);


        verticalLayout_3->addLayout(horizontalLayout_6);

        tableWidget_Elf_Ehdr = new QTableWidget(layoutWidget);
        tableWidget_Elf_Ehdr->setObjectName("tableWidget_Elf_Ehdr");
        tableWidget_Elf_Ehdr->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Elf_Ehdr->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Elf_Ehdr->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_Elf_Ehdr->horizontalHeader()->setVisible(false);
        tableWidget_Elf_Ehdr->verticalHeader()->setVisible(false);
        tableWidget_Elf_Ehdr->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_3->addWidget(tableWidget_Elf_Ehdr);

        splitter_2->addWidget(layoutWidget);
        widgetHex_Elf_Ehdr = new ToolsWidget(splitter_2);
        widgetHex_Elf_Ehdr->setObjectName("widgetHex_Elf_Ehdr");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetHex_Elf_Ehdr->sizePolicy().hasHeightForWidth());
        widgetHex_Elf_Ehdr->setSizePolicy(sizePolicy1);
        splitter_2->addWidget(widgetHex_Elf_Ehdr);

        verticalLayout_25->addWidget(splitter_2);

        stackedWidgetInfo->addWidget(page_Elf_Ehdr);
        page_sections = new QWidget();
        page_sections->setObjectName("page_sections");
        verticalLayout_22 = new QVBoxLayout(page_sections);
        verticalLayout_22->setObjectName("verticalLayout_22");
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(page_sections);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Vertical);
        layoutWidget_1 = new QWidget(splitter_3);
        layoutWidget_1->setObjectName("layoutWidget_1");
        verticalLayout_4 = new QVBoxLayout(layoutWidget_1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonSaveSections = new QPushButton(layoutWidget_1);
        pushButtonSaveSections->setObjectName("pushButtonSaveSections");

        horizontalLayout_2->addWidget(pushButtonSaveSections);


        verticalLayout_4->addLayout(horizontalLayout_2);

        tableView_Elf_Shdr = new XTableView(layoutWidget_1);
        tableView_Elf_Shdr->setObjectName("tableView_Elf_Shdr");
        tableView_Elf_Shdr->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Elf_Shdr->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Elf_Shdr->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Elf_Shdr->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Elf_Shdr->horizontalHeader()->setDefaultSectionSize(57);
        tableView_Elf_Shdr->verticalHeader()->setVisible(false);
        tableView_Elf_Shdr->verticalHeader()->setMinimumSectionSize(20);
        tableView_Elf_Shdr->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_4->addWidget(tableView_Elf_Shdr);

        splitter_3->addWidget(layoutWidget_1);
        widgetHex_Elf_Shdr = new ToolsWidget(splitter_3);
        widgetHex_Elf_Shdr->setObjectName("widgetHex_Elf_Shdr");
        sizePolicy.setHeightForWidth(widgetHex_Elf_Shdr->sizePolicy().hasHeightForWidth());
        widgetHex_Elf_Shdr->setSizePolicy(sizePolicy);
        splitter_3->addWidget(widgetHex_Elf_Shdr);

        verticalLayout_22->addWidget(splitter_3);

        stackedWidgetInfo->addWidget(page_sections);
        page_programs = new QWidget();
        page_programs->setObjectName("page_programs");
        verticalLayout_23 = new QVBoxLayout(page_programs);
        verticalLayout_23->setObjectName("verticalLayout_23");
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(page_programs);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Vertical);
        layoutWidget_2 = new QWidget(splitter_4);
        layoutWidget_2->setObjectName("layoutWidget_2");
        verticalLayout_5 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButtonSavePrograms = new QPushButton(layoutWidget_2);
        pushButtonSavePrograms->setObjectName("pushButtonSavePrograms");

        horizontalLayout_3->addWidget(pushButtonSavePrograms);


        verticalLayout_5->addLayout(horizontalLayout_3);

        tableView_Elf_Phdr = new XTableView(layoutWidget_2);
        tableView_Elf_Phdr->setObjectName("tableView_Elf_Phdr");
        tableView_Elf_Phdr->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Elf_Phdr->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Elf_Phdr->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Elf_Phdr->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Elf_Phdr->horizontalHeader()->setDefaultSectionSize(57);
        tableView_Elf_Phdr->verticalHeader()->setVisible(false);
        tableView_Elf_Phdr->verticalHeader()->setMinimumSectionSize(20);
        tableView_Elf_Phdr->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_5->addWidget(tableView_Elf_Phdr);

        splitter_4->addWidget(layoutWidget_2);
        widgetHex_Elf_Phdr = new ToolsWidget(splitter_4);
        widgetHex_Elf_Phdr->setObjectName("widgetHex_Elf_Phdr");
        sizePolicy.setHeightForWidth(widgetHex_Elf_Phdr->sizePolicy().hasHeightForWidth());
        widgetHex_Elf_Phdr->setSizePolicy(sizePolicy);
        splitter_4->addWidget(widgetHex_Elf_Phdr);

        verticalLayout_23->addWidget(splitter_4);

        stackedWidgetInfo->addWidget(page_programs);
        page_DynamicArrayTags = new QWidget();
        page_DynamicArrayTags->setObjectName("page_DynamicArrayTags");
        verticalLayout_6 = new QVBoxLayout(page_DynamicArrayTags);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        tableView_DynamicArrayTags = new XTableView(page_DynamicArrayTags);
        tableView_DynamicArrayTags->setObjectName("tableView_DynamicArrayTags");
        sizePolicy.setHeightForWidth(tableView_DynamicArrayTags->sizePolicy().hasHeightForWidth());
        tableView_DynamicArrayTags->setSizePolicy(sizePolicy);
        tableView_DynamicArrayTags->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DynamicArrayTags->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DynamicArrayTags->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DynamicArrayTags->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_DynamicArrayTags->verticalHeader()->setVisible(false);
        tableView_DynamicArrayTags->verticalHeader()->setMinimumSectionSize(20);
        tableView_DynamicArrayTags->verticalHeader()->setDefaultSectionSize(20);
        tableView_DynamicArrayTags->verticalHeader()->setStretchLastSection(false);

        verticalLayout_6->addWidget(tableView_DynamicArrayTags);

        stackedWidgetInfo->addWidget(page_DynamicArrayTags);
        page_Libraries = new QWidget();
        page_Libraries->setObjectName("page_Libraries");
        verticalLayout_9 = new QVBoxLayout(page_Libraries);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        tableView_Libraries = new XTableView(page_Libraries);
        tableView_Libraries->setObjectName("tableView_Libraries");
        sizePolicy.setHeightForWidth(tableView_Libraries->sizePolicy().hasHeightForWidth());
        tableView_Libraries->setSizePolicy(sizePolicy);
        tableView_Libraries->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Libraries->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Libraries->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Libraries->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Libraries->verticalHeader()->setVisible(false);
        tableView_Libraries->verticalHeader()->setMinimumSectionSize(20);
        tableView_Libraries->verticalHeader()->setDefaultSectionSize(20);
        tableView_Libraries->verticalHeader()->setStretchLastSection(false);

        verticalLayout_9->addWidget(tableView_Libraries);

        stackedWidgetInfo->addWidget(page_Libraries);
        page_Interpreter = new QWidget();
        page_Interpreter->setObjectName("page_Interpreter");
        verticalLayout_10 = new QVBoxLayout(page_Interpreter);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        tableWidget_Interpreter = new QTableWidget(page_Interpreter);
        tableWidget_Interpreter->setObjectName("tableWidget_Interpreter");
        sizePolicy.setHeightForWidth(tableWidget_Interpreter->sizePolicy().hasHeightForWidth());
        tableWidget_Interpreter->setSizePolicy(sizePolicy);
        tableWidget_Interpreter->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_Interpreter->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Interpreter->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Interpreter->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_Interpreter->verticalHeader()->setVisible(false);
        tableWidget_Interpreter->verticalHeader()->setMinimumSectionSize(20);
        tableWidget_Interpreter->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_10->addWidget(tableWidget_Interpreter);

        stackedWidgetInfo->addWidget(page_Interpreter);
        page_Notes = new QWidget();
        page_Notes->setObjectName("page_Notes");
        verticalLayout_11 = new QVBoxLayout(page_Notes);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        splitter_5 = new QSplitter(page_Notes);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setOrientation(Qt::Vertical);
        tableView_Notes = new XTableView(splitter_5);
        tableView_Notes->setObjectName("tableView_Notes");
        sizePolicy.setHeightForWidth(tableView_Notes->sizePolicy().hasHeightForWidth());
        tableView_Notes->setSizePolicy(sizePolicy);
        tableView_Notes->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Notes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Notes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Notes->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_5->addWidget(tableView_Notes);
        tableView_Notes->verticalHeader()->setVisible(false);
        tableView_Notes->verticalHeader()->setMinimumSectionSize(20);
        tableView_Notes->verticalHeader()->setDefaultSectionSize(20);
        tableView_Notes->verticalHeader()->setStretchLastSection(false);
        widgetHex_Notes = new ToolsWidget(splitter_5);
        widgetHex_Notes->setObjectName("widgetHex_Notes");
        sizePolicy.setHeightForWidth(widgetHex_Notes->sizePolicy().hasHeightForWidth());
        widgetHex_Notes->setSizePolicy(sizePolicy);
        splitter_5->addWidget(widgetHex_Notes);

        verticalLayout_11->addWidget(splitter_5);

        stackedWidgetInfo->addWidget(page_Notes);
        page_RunPath = new QWidget();
        page_RunPath->setObjectName("page_RunPath");
        verticalLayout_12 = new QVBoxLayout(page_RunPath);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        tableWidget_RunPath = new QTableWidget(page_RunPath);
        tableWidget_RunPath->setObjectName("tableWidget_RunPath");
        sizePolicy.setHeightForWidth(tableWidget_RunPath->sizePolicy().hasHeightForWidth());
        tableWidget_RunPath->setSizePolicy(sizePolicy);
        tableWidget_RunPath->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_RunPath->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_RunPath->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_RunPath->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_RunPath->verticalHeader()->setVisible(false);
        tableWidget_RunPath->verticalHeader()->setMinimumSectionSize(20);
        tableWidget_RunPath->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_12->addWidget(tableWidget_RunPath);

        stackedWidgetInfo->addWidget(page_RunPath);
        page_StringTable = new QWidget();
        page_StringTable->setObjectName("page_StringTable");
        verticalLayout_13 = new QVBoxLayout(page_StringTable);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        widgetHex_StringTable = new ToolsWidget(page_StringTable);
        widgetHex_StringTable->setObjectName("widgetHex_StringTable");
        sizePolicy.setHeightForWidth(widgetHex_StringTable->sizePolicy().hasHeightForWidth());
        widgetHex_StringTable->setSizePolicy(sizePolicy);

        verticalLayout_13->addWidget(widgetHex_StringTable);

        stackedWidgetInfo->addWidget(page_StringTable);
        page_SymbolTable = new QWidget();
        page_SymbolTable->setObjectName("page_SymbolTable");
        verticalLayout_14 = new QVBoxLayout(page_SymbolTable);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        pushButtonSave_SymbolTable = new QPushButton(page_SymbolTable);
        pushButtonSave_SymbolTable->setObjectName("pushButtonSave_SymbolTable");

        horizontalLayout_7->addWidget(pushButtonSave_SymbolTable);


        verticalLayout_14->addLayout(horizontalLayout_7);

        tableView_SymbolTable = new XTableView(page_SymbolTable);
        tableView_SymbolTable->setObjectName("tableView_SymbolTable");
        sizePolicy.setHeightForWidth(tableView_SymbolTable->sizePolicy().hasHeightForWidth());
        tableView_SymbolTable->setSizePolicy(sizePolicy);
        tableView_SymbolTable->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_SymbolTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_SymbolTable->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_SymbolTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_SymbolTable->verticalHeader()->setVisible(false);
        tableView_SymbolTable->verticalHeader()->setMinimumSectionSize(20);
        tableView_SymbolTable->verticalHeader()->setDefaultSectionSize(20);
        tableView_SymbolTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout_14->addWidget(tableView_SymbolTable);

        stackedWidgetInfo->addWidget(page_SymbolTable);
        page_Rela = new QWidget();
        page_Rela->setObjectName("page_Rela");
        verticalLayout_15 = new QVBoxLayout(page_Rela);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButtonSave_Rela = new QPushButton(page_Rela);
        pushButtonSave_Rela->setObjectName("pushButtonSave_Rela");

        horizontalLayout_4->addWidget(pushButtonSave_Rela);


        verticalLayout_15->addLayout(horizontalLayout_4);

        tableView_Rela = new XTableView(page_Rela);
        tableView_Rela->setObjectName("tableView_Rela");
        sizePolicy.setHeightForWidth(tableView_Rela->sizePolicy().hasHeightForWidth());
        tableView_Rela->setSizePolicy(sizePolicy);
        tableView_Rela->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Rela->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Rela->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Rela->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Rela->verticalHeader()->setVisible(false);
        tableView_Rela->verticalHeader()->setMinimumSectionSize(20);
        tableView_Rela->verticalHeader()->setDefaultSectionSize(20);
        tableView_Rela->verticalHeader()->setStretchLastSection(false);

        verticalLayout_15->addWidget(tableView_Rela);

        stackedWidgetInfo->addWidget(page_Rela);
        page_Rel = new QWidget();
        page_Rel->setObjectName("page_Rel");
        verticalLayout_16 = new QVBoxLayout(page_Rel);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        pushButtonSave_Rel = new QPushButton(page_Rel);
        pushButtonSave_Rel->setObjectName("pushButtonSave_Rel");

        horizontalLayout_5->addWidget(pushButtonSave_Rel);


        verticalLayout_16->addLayout(horizontalLayout_5);

        tableView_Rel = new XTableView(page_Rel);
        tableView_Rel->setObjectName("tableView_Rel");
        sizePolicy.setHeightForWidth(tableView_Rel->sizePolicy().hasHeightForWidth());
        tableView_Rel->setSizePolicy(sizePolicy);
        tableView_Rel->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Rel->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Rel->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Rel->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Rel->verticalHeader()->setVisible(false);
        tableView_Rel->verticalHeader()->setMinimumSectionSize(20);
        tableView_Rel->verticalHeader()->setDefaultSectionSize(20);
        tableView_Rel->verticalHeader()->setStretchLastSection(false);

        verticalLayout_16->addWidget(tableView_Rel);

        stackedWidgetInfo->addWidget(page_Rel);
        splitter->addWidget(stackedWidgetInfo);

        verticalLayout->addWidget(splitter);


        retranslateUi(ELFWidget);

        stackedWidgetInfo->setCurrentIndex(16);


        QMetaObject::connectSlotsByName(ELFWidget);
    } // setupUi

    void retranslateUi(QWidget *ELFWidget)
    {
        toolButtonReload->setText(QCoreApplication::translate("ELFWidget", "Reload", nullptr));
        checkBoxReadonly->setText(QCoreApplication::translate("ELFWidget", "Readonly", nullptr));
        pushButtonSave_Elf_Ehdr->setText(QCoreApplication::translate("ELFWidget", "Save", nullptr));
        pushButtonSaveSections->setText(QCoreApplication::translate("ELFWidget", "Save", nullptr));
        pushButtonSavePrograms->setText(QCoreApplication::translate("ELFWidget", "Save", nullptr));
        pushButtonSave_SymbolTable->setText(QCoreApplication::translate("ELFWidget", "Save", nullptr));
        pushButtonSave_Rela->setText(QCoreApplication::translate("ELFWidget", "Save", nullptr));
        pushButtonSave_Rel->setText(QCoreApplication::translate("ELFWidget", "Save", nullptr));
        (void)ELFWidget;
    } // retranslateUi

};

namespace Ui {
    class ELFWidget: public Ui_ELFWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELFWIDGET_H
