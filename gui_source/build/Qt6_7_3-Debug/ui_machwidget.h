/********************************************************************************
** Form generated from reading UI file 'machwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHWIDGET_H
#define UI_MACHWIDGET_H

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

class Ui_MACHWidget
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
    QVBoxLayout *verticalLayout_55;
    XFileInfoWidget *widgetInfo;
    QWidget *page_Visualization;
    QVBoxLayout *verticalLayout_57;
    XVisualizationWidget *widgetVisualization;
    QWidget *page_VirusTotal;
    QVBoxLayout *verticalLayout_55_2;
    XVirusTotalWidget *widgetVirusTotal;
    QWidget *page_HEX;
    QVBoxLayout *verticalLayout_2;
    XHexViewWidget *widgetHex;
    QWidget *page_Disasm;
    QVBoxLayout *verticalLayout_12;
    XMultiDisasmWidget *widgetDisasm;
    QWidget *page_Hash;
    QVBoxLayout *verticalLayout_27;
    XHashWidget *widgetHash;
    QWidget *page_Strings;
    QVBoxLayout *verticalLayout_9;
    SearchStringsWidget *widgetStrings;
    QWidget *page_Signatures;
    QVBoxLayout *verticalLayout_13;
    SearchSignaturesWidget *widgetSignatures;
    QWidget *page_MemoryMap;
    QVBoxLayout *verticalLayout_6;
    XMemoryMapWidget *widgetMemoryMap;
    QWidget *page_Entropy;
    QVBoxLayout *verticalLayout_10;
    XEntropyWidget *widgetEntropy;
    QWidget *page_HeuristicScan;
    QVBoxLayout *verticalLayout_11;
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
    QWidget *page_mach_header;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QTableWidget *tableWidget_mach_header;
    ToolsWidget *widgetHex_mach_header;
    QWidget *page_commands;
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitter_3;
    XTableView *tableView_commands;
    ToolsWidget *widgetHex_commands;
    QWidget *page_segments;
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter_4;
    XTableView *tableView_segments;
    ToolsWidget *widgetHex_segments;
    QWidget *page_sections;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter_5;
    XTableView *tableView_sections;
    ToolsWidget *widgetHex_sections;
    QWidget *page_libraries;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter_6;
    XTableView *tableView_libraries;
    ToolsWidget *widgetHex_libraries;
    QWidget *page_weak_libraries;
    QVBoxLayout *verticalLayout_24;
    QSplitter *splitter_7;
    XTableView *tableView_weak_libraries;
    ToolsWidget *widgetHex_weak_libraries;
    QWidget *page_id_library;
    QVBoxLayout *verticalLayout_14;
    QSplitter *splitter_8;
    XTableView *tableView_id_library;
    ToolsWidget *widgetHex_id_library;
    QWidget *page_LOADFVMLIB;
    QVBoxLayout *verticalLayout_52;
    QSplitter *splitter_9;
    XTableView *tableView_LOADFVMLIB;
    ToolsWidget *widgetHex_LOADFVMLIB;
    QWidget *page_IDFVMLIB;
    QVBoxLayout *verticalLayout_53;
    QSplitter *splitter_10;
    XTableView *tableView_IDFVMLIB;
    ToolsWidget *widgetHex_IDFVMLIB;
    QWidget *page_dyld_info_only;
    QVBoxLayout *verticalLayout_15;
    QSplitter *splitter_11;
    QTableWidget *tableWidget_dyld_info_only;
    ToolsWidget *widgetHex_dyld_info_only;
    QWidget *page_uuid;
    QVBoxLayout *verticalLayout_16;
    QTableWidget *tableWidget_uuid;
    QWidget *page_symtab;
    QVBoxLayout *verticalLayout_17;
    QSplitter *splitter_12;
    QTableWidget *tableWidget_symtab;
    ToolsWidget *widgetHex_symtab;
    QWidget *page_dysymtab;
    QVBoxLayout *verticalLayout_18;
    QSplitter *splitter_13;
    QTableWidget *tableWidget_dysymtab;
    ToolsWidget *widgetHex_dysymtab;
    QWidget *page_version_min;
    QVBoxLayout *verticalLayout_19;
    QSplitter *splitter_14;
    QTableWidget *tableWidget_version_min;
    ToolsWidget *widgetHex_version_min;
    QWidget *page_build_version;
    QVBoxLayout *verticalLayout_54;
    QSplitter *splitter_33;
    QTableWidget *tableWidget_build_version;
    ToolsWidget *widgetHex_build_version;
    QWidget *page_dylinker;
    QVBoxLayout *verticalLayout_20;
    QTableWidget *tableWidget_dylinker;
    QWidget *page_rpath;
    QVBoxLayout *verticalLayout_21;
    QTableWidget *tableWidget_rpath;
    QWidget *page_source_version;
    QVBoxLayout *verticalLayout_22;
    QSplitter *splitter_15;
    QTableWidget *tableWidget_source_version;
    ToolsWidget *widgetHex_source_version;
    QWidget *page_encryption_info;
    QVBoxLayout *verticalLayout_35;
    QSplitter *splitter_16;
    QTableWidget *tableWidget_encryption_info;
    ToolsWidget *widgetHex_encryption_info;
    QWidget *page_function_starts;
    QVBoxLayout *verticalLayout_40;
    QSplitter *splitter_17;
    QTableWidget *tableWidget_function_starts;
    ToolsWidget *widgetHex_function_starts;
    QWidget *page_data_in_code;
    QVBoxLayout *verticalLayout_41;
    QSplitter *splitter_18;
    QTableWidget *tableWidget_data_in_code;
    ToolsWidget *widgetHex_data_in_code;
    QWidget *page_code_signature;
    QVBoxLayout *verticalLayout_42;
    QSplitter *splitter_19;
    QTableWidget *tableWidget_code_signature;
    ToolsWidget *widgetHex_code_signature;
    QWidget *page_SuperBlob;
    QVBoxLayout *verticalLayout_56;
    QSplitter *splitter_34;
    QTableWidget *tableWidget_SuperBlob;
    ToolsWidget *widgetHex_SuperBlob;
    QWidget *page_main;
    QVBoxLayout *verticalLayout_43;
    QSplitter *splitter_20;
    QTableWidget *tableWidget_main;
    ToolsWidget *widgetHex_main;
    QWidget *page_unix_thread;
    QVBoxLayout *verticalLayout_44;
    QSplitter *splitter_21;
    QTableWidget *tableWidget_unix_thread;
    ToolsWidget *widgetHex_unix_thread;
    QWidget *page_unix_thread_x86_32;
    QVBoxLayout *verticalLayout_51;
    QSplitter *splitter_22;
    QTableWidget *tableWidget_unix_thread_x86_32;
    ToolsWidget *widgetHex_unix_thread_x86_32;
    QWidget *page_unix_thread_x86_64;
    QVBoxLayout *verticalLayout_34;
    QSplitter *splitter_23;
    QTableWidget *tableWidget_unix_thread_x86_64;
    ToolsWidget *widgetHex_unix_thread_x86_64;
    QWidget *page_unix_thread_arm_32;
    QVBoxLayout *verticalLayout_32;
    QSplitter *splitter_24;
    QTableWidget *tableWidget_unix_thread_arm_32;
    ToolsWidget *widgetHex_unix_thread_arm_32;
    QWidget *page_unix_thread_arm_64;
    QVBoxLayout *verticalLayout_33;
    QSplitter *splitter_25;
    QTableWidget *tableWidget_unix_thread_arm_64;
    ToolsWidget *widgetHex_unix_thread_arm_64;
    QWidget *page_unix_thread_m68k_32;
    QVBoxLayout *verticalLayout_31;
    QSplitter *splitter_26;
    QTableWidget *tableWidget_unix_thread_m68k_32;
    ToolsWidget *widgetHex_unix_thread_m68k_32;
    QWidget *page_unix_thread_ppc_32;
    QVBoxLayout *verticalLayout_30;
    QSplitter *splitter_27;
    QTableWidget *tableWidget_unix_thread_ppc_32;
    ToolsWidget *widgetHex_unix_thread_ppc_32;
    QWidget *page_dyld_chained_fixups;
    QVBoxLayout *verticalLayout_58;
    QSplitter *splitter_35;
    QTableWidget *tableWidget_dyld_chained_fixups;
    ToolsWidget *widgetHex_dyld_chained_fixups;
    QWidget *page_dyld_exports_trie;
    QVBoxLayout *verticalLayout_59;
    QSplitter *splitter_36;
    QTableWidget *tableWidget_dyld_exports_trie;
    ToolsWidget *widgetHex_dyld_exports_trie;
    QWidget *page_StringTable;
    QVBoxLayout *verticalLayout_36;
    ToolsWidget *widgetHex_StringTable;
    QWidget *page_SymbolTable;
    QVBoxLayout *verticalLayout_37;
    XTableView *tableView_SymbolTable;
    QWidget *page_Functions;
    QVBoxLayout *verticalLayout_38;
    XTableView *tableView_Functions;
    QWidget *page_data_in_code_entry;
    QVBoxLayout *verticalLayout_39;
    XTableView *tableView_data_in_code_entry;
    QWidget *page_DYLD_INFO_rebase;
    QVBoxLayout *verticalLayout_29;
    QSplitter *splitter_28;
    XTableView *tableView_DYLD_INFO_rebase;
    ToolsWidget *widgetHex_DYLD_INFO_rebase;
    QWidget *page_DYLD_INFO_bind;
    QVBoxLayout *verticalLayout_28;
    QSplitter *splitter_29;
    XTableView *tableView_DYLD_INFO_bind;
    ToolsWidget *widgetHex_DYLD_INFO_bind;
    QWidget *page_DYLD_INFO_weak_bind;
    QVBoxLayout *verticalLayout_26;
    QSplitter *splitter_30;
    XTableView *tableView_DYLD_INFO_weak_bind;
    ToolsWidget *widgetHex_DYLD_INFO_weak_bind;
    QWidget *page_DYLD_INFO_lazy_bind;
    QVBoxLayout *verticalLayout_25;
    QSplitter *splitter_31;
    XTableView *tableView_DYLD_INFO_lazy_bind;
    ToolsWidget *widgetHex_DYLD_INFO_lazy_bind;
    QWidget *page_DYLD_INFO_export;
    QVBoxLayout *verticalLayout_23;
    QSplitter *splitter_32;
    XTableView *tableView_DYLD_INFO_export;
    ToolsWidget *widgetHex_DYLD_INFO_export;
    QWidget *page_DYSYMTAB_toc;
    QVBoxLayout *verticalLayout_45;
    XTableView *tableView_DYSYMTAB_toc;
    QWidget *page_DYSYMTAB_modtab;
    QVBoxLayout *verticalLayout_46;
    XTableView *tableView_DYSYMTAB_modtab;
    QWidget *page_DYSYMTAB_extrefsyms;
    QVBoxLayout *verticalLayout_47;
    XTableView *tableView_DYSYMTAB_extrefsyms;
    QWidget *page_DYSYMTAB_indirectsyms;
    QVBoxLayout *verticalLayout_48;
    XTableView *tableView_DYSYMTAB_indirectsyms;
    QWidget *page_DYSYMTAB_extrel;
    QVBoxLayout *verticalLayout_49;
    XTableView *tableView_DYSYMTAB_extrel;
    QWidget *page_DYSYMTAB_locrel;
    QVBoxLayout *verticalLayout_50;
    XTableView *tableView_DYSYMTAB_locrel;

    void setupUi(QWidget *MACHWidget)
    {
        if (MACHWidget->objectName().isEmpty())
            MACHWidget->setObjectName("MACHWidget");
        MACHWidget->resize(806, 206);
        MACHWidget->setWindowTitle(QString::fromUtf8("MACH"));
        verticalLayout = new QVBoxLayout(MACHWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        toolButtonReload = new QToolButton(MACHWidget);
        toolButtonReload->setObjectName("toolButtonReload");

        horizontalLayout->addWidget(toolButtonReload);

        toolButtonPrev = new QToolButton(MACHWidget);
        toolButtonPrev->setObjectName("toolButtonPrev");
        toolButtonPrev->setText(QString::fromUtf8("<"));

        horizontalLayout->addWidget(toolButtonPrev);

        toolButtonNext = new QToolButton(MACHWidget);
        toolButtonNext->setObjectName("toolButtonNext");
        toolButtonNext->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(toolButtonNext);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(MACHWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(MACHWidget);
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
        verticalLayout_55 = new QVBoxLayout(page_Info);
        verticalLayout_55->setObjectName("verticalLayout_55");
        verticalLayout_55->setContentsMargins(0, 0, 0, 0);
        widgetInfo = new XFileInfoWidget(page_Info);
        widgetInfo->setObjectName("widgetInfo");

        verticalLayout_55->addWidget(widgetInfo);

        stackedWidgetInfo->addWidget(page_Info);
        page_Visualization = new QWidget();
        page_Visualization->setObjectName("page_Visualization");
        verticalLayout_57 = new QVBoxLayout(page_Visualization);
        verticalLayout_57->setObjectName("verticalLayout_57");
        verticalLayout_57->setContentsMargins(0, 0, 0, 0);
        widgetVisualization = new XVisualizationWidget(page_Visualization);
        widgetVisualization->setObjectName("widgetVisualization");

        verticalLayout_57->addWidget(widgetVisualization);

        stackedWidgetInfo->addWidget(page_Visualization);
        page_VirusTotal = new QWidget();
        page_VirusTotal->setObjectName("page_VirusTotal");
        verticalLayout_55_2 = new QVBoxLayout(page_VirusTotal);
        verticalLayout_55_2->setObjectName("verticalLayout_55_2");
        verticalLayout_55_2->setContentsMargins(0, 0, 0, 0);
        widgetVirusTotal = new XVirusTotalWidget(page_VirusTotal);
        widgetVirusTotal->setObjectName("widgetVirusTotal");

        verticalLayout_55_2->addWidget(widgetVirusTotal);

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
        verticalLayout_12 = new QVBoxLayout(page_Disasm);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        widgetDisasm = new XMultiDisasmWidget(page_Disasm);
        widgetDisasm->setObjectName("widgetDisasm");

        verticalLayout_12->addWidget(widgetDisasm);

        stackedWidgetInfo->addWidget(page_Disasm);
        page_Hash = new QWidget();
        page_Hash->setObjectName("page_Hash");
        verticalLayout_27 = new QVBoxLayout(page_Hash);
        verticalLayout_27->setObjectName("verticalLayout_27");
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        widgetHash = new XHashWidget(page_Hash);
        widgetHash->setObjectName("widgetHash");

        verticalLayout_27->addWidget(widgetHash);

        stackedWidgetInfo->addWidget(page_Hash);
        page_Strings = new QWidget();
        page_Strings->setObjectName("page_Strings");
        verticalLayout_9 = new QVBoxLayout(page_Strings);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        widgetStrings = new SearchStringsWidget(page_Strings);
        widgetStrings->setObjectName("widgetStrings");

        verticalLayout_9->addWidget(widgetStrings);

        stackedWidgetInfo->addWidget(page_Strings);
        page_Signatures = new QWidget();
        page_Signatures->setObjectName("page_Signatures");
        verticalLayout_13 = new QVBoxLayout(page_Signatures);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        widgetSignatures = new SearchSignaturesWidget(page_Signatures);
        widgetSignatures->setObjectName("widgetSignatures");

        verticalLayout_13->addWidget(widgetSignatures);

        stackedWidgetInfo->addWidget(page_Signatures);
        page_MemoryMap = new QWidget();
        page_MemoryMap->setObjectName("page_MemoryMap");
        verticalLayout_6 = new QVBoxLayout(page_MemoryMap);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widgetMemoryMap = new XMemoryMapWidget(page_MemoryMap);
        widgetMemoryMap->setObjectName("widgetMemoryMap");

        verticalLayout_6->addWidget(widgetMemoryMap);

        stackedWidgetInfo->addWidget(page_MemoryMap);
        page_Entropy = new QWidget();
        page_Entropy->setObjectName("page_Entropy");
        verticalLayout_10 = new QVBoxLayout(page_Entropy);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        widgetEntropy = new XEntropyWidget(page_Entropy);
        widgetEntropy->setObjectName("widgetEntropy");

        verticalLayout_10->addWidget(widgetEntropy);

        stackedWidgetInfo->addWidget(page_Entropy);
        page_HeuristicScan = new QWidget();
        page_HeuristicScan->setObjectName("page_HeuristicScan");
        verticalLayout_11 = new QVBoxLayout(page_HeuristicScan);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        widgetHeuristicScan = new NFDWidgetAdvanced(page_HeuristicScan);
        widgetHeuristicScan->setObjectName("widgetHeuristicScan");

        verticalLayout_11->addWidget(widgetHeuristicScan);

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
        page_mach_header = new QWidget();
        page_mach_header->setObjectName("page_mach_header");
        verticalLayout_3 = new QVBoxLayout(page_mach_header);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(page_mach_header);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Vertical);
        tableWidget_mach_header = new QTableWidget(splitter_2);
        tableWidget_mach_header->setObjectName("tableWidget_mach_header");
        tableWidget_mach_header->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_mach_header->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_mach_header->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_2->addWidget(tableWidget_mach_header);
        tableWidget_mach_header->horizontalHeader()->setVisible(false);
        tableWidget_mach_header->verticalHeader()->setVisible(false);
        tableWidget_mach_header->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_mach_header = new ToolsWidget(splitter_2);
        widgetHex_mach_header->setObjectName("widgetHex_mach_header");
        splitter_2->addWidget(widgetHex_mach_header);

        verticalLayout_3->addWidget(splitter_2);

        stackedWidgetInfo->addWidget(page_mach_header);
        page_commands = new QWidget();
        page_commands->setObjectName("page_commands");
        verticalLayout_8 = new QVBoxLayout(page_commands);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(page_commands);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Vertical);
        tableView_commands = new XTableView(splitter_3);
        tableView_commands->setObjectName("tableView_commands");
        sizePolicy.setHeightForWidth(tableView_commands->sizePolicy().hasHeightForWidth());
        tableView_commands->setSizePolicy(sizePolicy);
        tableView_commands->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_commands->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_commands->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_commands->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_3->addWidget(tableView_commands);
        tableView_commands->verticalHeader()->setVisible(false);
        tableView_commands->verticalHeader()->setMinimumSectionSize(20);
        tableView_commands->verticalHeader()->setDefaultSectionSize(20);
        tableView_commands->verticalHeader()->setStretchLastSection(false);
        widgetHex_commands = new ToolsWidget(splitter_3);
        widgetHex_commands->setObjectName("widgetHex_commands");
        sizePolicy.setHeightForWidth(widgetHex_commands->sizePolicy().hasHeightForWidth());
        widgetHex_commands->setSizePolicy(sizePolicy);
        widgetHex_commands->setMinimumSize(QSize(0, 0));
        splitter_3->addWidget(widgetHex_commands);

        verticalLayout_8->addWidget(splitter_3);

        stackedWidgetInfo->addWidget(page_commands);
        page_segments = new QWidget();
        page_segments->setObjectName("page_segments");
        verticalLayout_7 = new QVBoxLayout(page_segments);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(page_segments);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Vertical);
        tableView_segments = new XTableView(splitter_4);
        tableView_segments->setObjectName("tableView_segments");
        sizePolicy.setHeightForWidth(tableView_segments->sizePolicy().hasHeightForWidth());
        tableView_segments->setSizePolicy(sizePolicy);
        tableView_segments->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_segments->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_segments->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_segments->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_4->addWidget(tableView_segments);
        tableView_segments->verticalHeader()->setVisible(false);
        tableView_segments->verticalHeader()->setMinimumSectionSize(20);
        tableView_segments->verticalHeader()->setDefaultSectionSize(20);
        tableView_segments->verticalHeader()->setStretchLastSection(false);
        widgetHex_segments = new ToolsWidget(splitter_4);
        widgetHex_segments->setObjectName("widgetHex_segments");
        splitter_4->addWidget(widgetHex_segments);

        verticalLayout_7->addWidget(splitter_4);

        stackedWidgetInfo->addWidget(page_segments);
        page_sections = new QWidget();
        page_sections->setObjectName("page_sections");
        verticalLayout_5 = new QVBoxLayout(page_sections);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        splitter_5 = new QSplitter(page_sections);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setOrientation(Qt::Vertical);
        tableView_sections = new XTableView(splitter_5);
        tableView_sections->setObjectName("tableView_sections");
        sizePolicy.setHeightForWidth(tableView_sections->sizePolicy().hasHeightForWidth());
        tableView_sections->setSizePolicy(sizePolicy);
        tableView_sections->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_sections->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_sections->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_sections->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_5->addWidget(tableView_sections);
        tableView_sections->verticalHeader()->setVisible(false);
        tableView_sections->verticalHeader()->setMinimumSectionSize(20);
        tableView_sections->verticalHeader()->setDefaultSectionSize(21);
        tableView_sections->verticalHeader()->setStretchLastSection(false);
        widgetHex_sections = new ToolsWidget(splitter_5);
        widgetHex_sections->setObjectName("widgetHex_sections");
        splitter_5->addWidget(widgetHex_sections);

        verticalLayout_5->addWidget(splitter_5);

        stackedWidgetInfo->addWidget(page_sections);
        page_libraries = new QWidget();
        page_libraries->setObjectName("page_libraries");
        verticalLayout_4 = new QVBoxLayout(page_libraries);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter_6 = new QSplitter(page_libraries);
        splitter_6->setObjectName("splitter_6");
        splitter_6->setOrientation(Qt::Vertical);
        tableView_libraries = new XTableView(splitter_6);
        tableView_libraries->setObjectName("tableView_libraries");
        sizePolicy.setHeightForWidth(tableView_libraries->sizePolicy().hasHeightForWidth());
        tableView_libraries->setSizePolicy(sizePolicy);
        tableView_libraries->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_libraries->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_libraries->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_libraries->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_6->addWidget(tableView_libraries);
        tableView_libraries->verticalHeader()->setVisible(false);
        tableView_libraries->verticalHeader()->setMinimumSectionSize(20);
        tableView_libraries->verticalHeader()->setDefaultSectionSize(20);
        tableView_libraries->verticalHeader()->setStretchLastSection(false);
        widgetHex_libraries = new ToolsWidget(splitter_6);
        widgetHex_libraries->setObjectName("widgetHex_libraries");
        splitter_6->addWidget(widgetHex_libraries);

        verticalLayout_4->addWidget(splitter_6);

        stackedWidgetInfo->addWidget(page_libraries);
        page_weak_libraries = new QWidget();
        page_weak_libraries->setObjectName("page_weak_libraries");
        verticalLayout_24 = new QVBoxLayout(page_weak_libraries);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        splitter_7 = new QSplitter(page_weak_libraries);
        splitter_7->setObjectName("splitter_7");
        splitter_7->setOrientation(Qt::Vertical);
        tableView_weak_libraries = new XTableView(splitter_7);
        tableView_weak_libraries->setObjectName("tableView_weak_libraries");
        sizePolicy.setHeightForWidth(tableView_weak_libraries->sizePolicy().hasHeightForWidth());
        tableView_weak_libraries->setSizePolicy(sizePolicy);
        tableView_weak_libraries->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_weak_libraries->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_weak_libraries->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_weak_libraries->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_7->addWidget(tableView_weak_libraries);
        tableView_weak_libraries->verticalHeader()->setVisible(false);
        tableView_weak_libraries->verticalHeader()->setMinimumSectionSize(20);
        tableView_weak_libraries->verticalHeader()->setDefaultSectionSize(20);
        tableView_weak_libraries->verticalHeader()->setStretchLastSection(false);
        widgetHex_weak_libraries = new ToolsWidget(splitter_7);
        widgetHex_weak_libraries->setObjectName("widgetHex_weak_libraries");
        splitter_7->addWidget(widgetHex_weak_libraries);

        verticalLayout_24->addWidget(splitter_7);

        stackedWidgetInfo->addWidget(page_weak_libraries);
        page_id_library = new QWidget();
        page_id_library->setObjectName("page_id_library");
        verticalLayout_14 = new QVBoxLayout(page_id_library);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        splitter_8 = new QSplitter(page_id_library);
        splitter_8->setObjectName("splitter_8");
        splitter_8->setOrientation(Qt::Vertical);
        tableView_id_library = new XTableView(splitter_8);
        tableView_id_library->setObjectName("tableView_id_library");
        sizePolicy.setHeightForWidth(tableView_id_library->sizePolicy().hasHeightForWidth());
        tableView_id_library->setSizePolicy(sizePolicy);
        tableView_id_library->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_id_library->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_id_library->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_id_library->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_8->addWidget(tableView_id_library);
        tableView_id_library->verticalHeader()->setVisible(false);
        tableView_id_library->verticalHeader()->setMinimumSectionSize(20);
        tableView_id_library->verticalHeader()->setDefaultSectionSize(20);
        tableView_id_library->verticalHeader()->setStretchLastSection(false);
        widgetHex_id_library = new ToolsWidget(splitter_8);
        widgetHex_id_library->setObjectName("widgetHex_id_library");
        splitter_8->addWidget(widgetHex_id_library);

        verticalLayout_14->addWidget(splitter_8);

        stackedWidgetInfo->addWidget(page_id_library);
        page_LOADFVMLIB = new QWidget();
        page_LOADFVMLIB->setObjectName("page_LOADFVMLIB");
        verticalLayout_52 = new QVBoxLayout(page_LOADFVMLIB);
        verticalLayout_52->setObjectName("verticalLayout_52");
        verticalLayout_52->setContentsMargins(0, 0, 0, 0);
        splitter_9 = new QSplitter(page_LOADFVMLIB);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setOrientation(Qt::Vertical);
        tableView_LOADFVMLIB = new XTableView(splitter_9);
        tableView_LOADFVMLIB->setObjectName("tableView_LOADFVMLIB");
        sizePolicy.setHeightForWidth(tableView_LOADFVMLIB->sizePolicy().hasHeightForWidth());
        tableView_LOADFVMLIB->setSizePolicy(sizePolicy);
        tableView_LOADFVMLIB->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_LOADFVMLIB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_LOADFVMLIB->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_LOADFVMLIB->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_9->addWidget(tableView_LOADFVMLIB);
        tableView_LOADFVMLIB->verticalHeader()->setVisible(false);
        tableView_LOADFVMLIB->verticalHeader()->setMinimumSectionSize(20);
        tableView_LOADFVMLIB->verticalHeader()->setDefaultSectionSize(20);
        tableView_LOADFVMLIB->verticalHeader()->setStretchLastSection(false);
        widgetHex_LOADFVMLIB = new ToolsWidget(splitter_9);
        widgetHex_LOADFVMLIB->setObjectName("widgetHex_LOADFVMLIB");
        splitter_9->addWidget(widgetHex_LOADFVMLIB);

        verticalLayout_52->addWidget(splitter_9);

        stackedWidgetInfo->addWidget(page_LOADFVMLIB);
        page_IDFVMLIB = new QWidget();
        page_IDFVMLIB->setObjectName("page_IDFVMLIB");
        verticalLayout_53 = new QVBoxLayout(page_IDFVMLIB);
        verticalLayout_53->setObjectName("verticalLayout_53");
        verticalLayout_53->setContentsMargins(0, 0, 0, 0);
        splitter_10 = new QSplitter(page_IDFVMLIB);
        splitter_10->setObjectName("splitter_10");
        splitter_10->setOrientation(Qt::Vertical);
        tableView_IDFVMLIB = new XTableView(splitter_10);
        tableView_IDFVMLIB->setObjectName("tableView_IDFVMLIB");
        sizePolicy.setHeightForWidth(tableView_IDFVMLIB->sizePolicy().hasHeightForWidth());
        tableView_IDFVMLIB->setSizePolicy(sizePolicy);
        tableView_IDFVMLIB->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_IDFVMLIB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_IDFVMLIB->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_IDFVMLIB->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_10->addWidget(tableView_IDFVMLIB);
        tableView_IDFVMLIB->verticalHeader()->setVisible(false);
        tableView_IDFVMLIB->verticalHeader()->setMinimumSectionSize(20);
        tableView_IDFVMLIB->verticalHeader()->setDefaultSectionSize(20);
        tableView_IDFVMLIB->verticalHeader()->setStretchLastSection(false);
        widgetHex_IDFVMLIB = new ToolsWidget(splitter_10);
        widgetHex_IDFVMLIB->setObjectName("widgetHex_IDFVMLIB");
        splitter_10->addWidget(widgetHex_IDFVMLIB);

        verticalLayout_53->addWidget(splitter_10);

        stackedWidgetInfo->addWidget(page_IDFVMLIB);
        page_dyld_info_only = new QWidget();
        page_dyld_info_only->setObjectName("page_dyld_info_only");
        verticalLayout_15 = new QVBoxLayout(page_dyld_info_only);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        splitter_11 = new QSplitter(page_dyld_info_only);
        splitter_11->setObjectName("splitter_11");
        splitter_11->setOrientation(Qt::Vertical);
        tableWidget_dyld_info_only = new QTableWidget(splitter_11);
        tableWidget_dyld_info_only->setObjectName("tableWidget_dyld_info_only");
        tableWidget_dyld_info_only->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_dyld_info_only->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_dyld_info_only->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_11->addWidget(tableWidget_dyld_info_only);
        tableWidget_dyld_info_only->horizontalHeader()->setVisible(false);
        tableWidget_dyld_info_only->verticalHeader()->setVisible(false);
        tableWidget_dyld_info_only->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_dyld_info_only = new ToolsWidget(splitter_11);
        widgetHex_dyld_info_only->setObjectName("widgetHex_dyld_info_only");
        splitter_11->addWidget(widgetHex_dyld_info_only);

        verticalLayout_15->addWidget(splitter_11);

        stackedWidgetInfo->addWidget(page_dyld_info_only);
        page_uuid = new QWidget();
        page_uuid->setObjectName("page_uuid");
        verticalLayout_16 = new QVBoxLayout(page_uuid);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        tableWidget_uuid = new QTableWidget(page_uuid);
        tableWidget_uuid->setObjectName("tableWidget_uuid");
        sizePolicy.setHeightForWidth(tableWidget_uuid->sizePolicy().hasHeightForWidth());
        tableWidget_uuid->setSizePolicy(sizePolicy);
        tableWidget_uuid->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_uuid->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_uuid->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_uuid->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_uuid->verticalHeader()->setVisible(false);
        tableWidget_uuid->verticalHeader()->setMinimumSectionSize(20);
        tableWidget_uuid->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_16->addWidget(tableWidget_uuid);

        stackedWidgetInfo->addWidget(page_uuid);
        page_symtab = new QWidget();
        page_symtab->setObjectName("page_symtab");
        verticalLayout_17 = new QVBoxLayout(page_symtab);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        splitter_12 = new QSplitter(page_symtab);
        splitter_12->setObjectName("splitter_12");
        splitter_12->setOrientation(Qt::Vertical);
        tableWidget_symtab = new QTableWidget(splitter_12);
        tableWidget_symtab->setObjectName("tableWidget_symtab");
        tableWidget_symtab->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_symtab->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_symtab->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_12->addWidget(tableWidget_symtab);
        tableWidget_symtab->horizontalHeader()->setVisible(false);
        tableWidget_symtab->verticalHeader()->setVisible(false);
        tableWidget_symtab->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_symtab = new ToolsWidget(splitter_12);
        widgetHex_symtab->setObjectName("widgetHex_symtab");
        splitter_12->addWidget(widgetHex_symtab);

        verticalLayout_17->addWidget(splitter_12);

        stackedWidgetInfo->addWidget(page_symtab);
        page_dysymtab = new QWidget();
        page_dysymtab->setObjectName("page_dysymtab");
        verticalLayout_18 = new QVBoxLayout(page_dysymtab);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        splitter_13 = new QSplitter(page_dysymtab);
        splitter_13->setObjectName("splitter_13");
        splitter_13->setOrientation(Qt::Vertical);
        tableWidget_dysymtab = new QTableWidget(splitter_13);
        tableWidget_dysymtab->setObjectName("tableWidget_dysymtab");
        tableWidget_dysymtab->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_dysymtab->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_dysymtab->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_13->addWidget(tableWidget_dysymtab);
        tableWidget_dysymtab->horizontalHeader()->setVisible(false);
        tableWidget_dysymtab->verticalHeader()->setVisible(false);
        tableWidget_dysymtab->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_dysymtab = new ToolsWidget(splitter_13);
        widgetHex_dysymtab->setObjectName("widgetHex_dysymtab");
        splitter_13->addWidget(widgetHex_dysymtab);

        verticalLayout_18->addWidget(splitter_13);

        stackedWidgetInfo->addWidget(page_dysymtab);
        page_version_min = new QWidget();
        page_version_min->setObjectName("page_version_min");
        verticalLayout_19 = new QVBoxLayout(page_version_min);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        splitter_14 = new QSplitter(page_version_min);
        splitter_14->setObjectName("splitter_14");
        splitter_14->setOrientation(Qt::Vertical);
        tableWidget_version_min = new QTableWidget(splitter_14);
        tableWidget_version_min->setObjectName("tableWidget_version_min");
        tableWidget_version_min->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_version_min->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_version_min->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_14->addWidget(tableWidget_version_min);
        tableWidget_version_min->horizontalHeader()->setVisible(false);
        tableWidget_version_min->verticalHeader()->setVisible(false);
        tableWidget_version_min->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_version_min = new ToolsWidget(splitter_14);
        widgetHex_version_min->setObjectName("widgetHex_version_min");
        splitter_14->addWidget(widgetHex_version_min);

        verticalLayout_19->addWidget(splitter_14);

        stackedWidgetInfo->addWidget(page_version_min);
        page_build_version = new QWidget();
        page_build_version->setObjectName("page_build_version");
        verticalLayout_54 = new QVBoxLayout(page_build_version);
        verticalLayout_54->setObjectName("verticalLayout_54");
        verticalLayout_54->setContentsMargins(0, 0, 0, 0);
        splitter_33 = new QSplitter(page_build_version);
        splitter_33->setObjectName("splitter_33");
        splitter_33->setOrientation(Qt::Vertical);
        tableWidget_build_version = new QTableWidget(splitter_33);
        tableWidget_build_version->setObjectName("tableWidget_build_version");
        tableWidget_build_version->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_build_version->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_build_version->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_33->addWidget(tableWidget_build_version);
        tableWidget_build_version->horizontalHeader()->setVisible(false);
        tableWidget_build_version->verticalHeader()->setVisible(false);
        tableWidget_build_version->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_build_version = new ToolsWidget(splitter_33);
        widgetHex_build_version->setObjectName("widgetHex_build_version");
        splitter_33->addWidget(widgetHex_build_version);

        verticalLayout_54->addWidget(splitter_33);

        stackedWidgetInfo->addWidget(page_build_version);
        page_dylinker = new QWidget();
        page_dylinker->setObjectName("page_dylinker");
        verticalLayout_20 = new QVBoxLayout(page_dylinker);
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        tableWidget_dylinker = new QTableWidget(page_dylinker);
        tableWidget_dylinker->setObjectName("tableWidget_dylinker");
        sizePolicy.setHeightForWidth(tableWidget_dylinker->sizePolicy().hasHeightForWidth());
        tableWidget_dylinker->setSizePolicy(sizePolicy);
        tableWidget_dylinker->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_dylinker->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_dylinker->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_dylinker->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_dylinker->verticalHeader()->setVisible(false);
        tableWidget_dylinker->verticalHeader()->setMinimumSectionSize(20);
        tableWidget_dylinker->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_20->addWidget(tableWidget_dylinker);

        stackedWidgetInfo->addWidget(page_dylinker);
        page_rpath = new QWidget();
        page_rpath->setObjectName("page_rpath");
        verticalLayout_21 = new QVBoxLayout(page_rpath);
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        tableWidget_rpath = new QTableWidget(page_rpath);
        tableWidget_rpath->setObjectName("tableWidget_rpath");
        sizePolicy.setHeightForWidth(tableWidget_rpath->sizePolicy().hasHeightForWidth());
        tableWidget_rpath->setSizePolicy(sizePolicy);
        tableWidget_rpath->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_rpath->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_rpath->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_rpath->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_rpath->verticalHeader()->setVisible(false);
        tableWidget_rpath->verticalHeader()->setMinimumSectionSize(20);
        tableWidget_rpath->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_21->addWidget(tableWidget_rpath);

        stackedWidgetInfo->addWidget(page_rpath);
        page_source_version = new QWidget();
        page_source_version->setObjectName("page_source_version");
        verticalLayout_22 = new QVBoxLayout(page_source_version);
        verticalLayout_22->setObjectName("verticalLayout_22");
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        splitter_15 = new QSplitter(page_source_version);
        splitter_15->setObjectName("splitter_15");
        splitter_15->setOrientation(Qt::Vertical);
        tableWidget_source_version = new QTableWidget(splitter_15);
        tableWidget_source_version->setObjectName("tableWidget_source_version");
        tableWidget_source_version->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_source_version->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_source_version->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_15->addWidget(tableWidget_source_version);
        tableWidget_source_version->horizontalHeader()->setVisible(false);
        tableWidget_source_version->verticalHeader()->setVisible(false);
        tableWidget_source_version->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_source_version = new ToolsWidget(splitter_15);
        widgetHex_source_version->setObjectName("widgetHex_source_version");
        splitter_15->addWidget(widgetHex_source_version);

        verticalLayout_22->addWidget(splitter_15);

        stackedWidgetInfo->addWidget(page_source_version);
        page_encryption_info = new QWidget();
        page_encryption_info->setObjectName("page_encryption_info");
        verticalLayout_35 = new QVBoxLayout(page_encryption_info);
        verticalLayout_35->setObjectName("verticalLayout_35");
        verticalLayout_35->setContentsMargins(0, 0, 0, 0);
        splitter_16 = new QSplitter(page_encryption_info);
        splitter_16->setObjectName("splitter_16");
        splitter_16->setOrientation(Qt::Vertical);
        tableWidget_encryption_info = new QTableWidget(splitter_16);
        tableWidget_encryption_info->setObjectName("tableWidget_encryption_info");
        tableWidget_encryption_info->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_encryption_info->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_encryption_info->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_16->addWidget(tableWidget_encryption_info);
        tableWidget_encryption_info->horizontalHeader()->setVisible(false);
        tableWidget_encryption_info->verticalHeader()->setVisible(false);
        tableWidget_encryption_info->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_encryption_info = new ToolsWidget(splitter_16);
        widgetHex_encryption_info->setObjectName("widgetHex_encryption_info");
        splitter_16->addWidget(widgetHex_encryption_info);

        verticalLayout_35->addWidget(splitter_16);

        stackedWidgetInfo->addWidget(page_encryption_info);
        page_function_starts = new QWidget();
        page_function_starts->setObjectName("page_function_starts");
        verticalLayout_40 = new QVBoxLayout(page_function_starts);
        verticalLayout_40->setObjectName("verticalLayout_40");
        verticalLayout_40->setContentsMargins(0, 0, 0, 0);
        splitter_17 = new QSplitter(page_function_starts);
        splitter_17->setObjectName("splitter_17");
        splitter_17->setOrientation(Qt::Vertical);
        tableWidget_function_starts = new QTableWidget(splitter_17);
        tableWidget_function_starts->setObjectName("tableWidget_function_starts");
        tableWidget_function_starts->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_function_starts->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_function_starts->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_17->addWidget(tableWidget_function_starts);
        tableWidget_function_starts->horizontalHeader()->setVisible(false);
        tableWidget_function_starts->verticalHeader()->setVisible(false);
        tableWidget_function_starts->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_function_starts = new ToolsWidget(splitter_17);
        widgetHex_function_starts->setObjectName("widgetHex_function_starts");
        splitter_17->addWidget(widgetHex_function_starts);

        verticalLayout_40->addWidget(splitter_17);

        stackedWidgetInfo->addWidget(page_function_starts);
        page_data_in_code = new QWidget();
        page_data_in_code->setObjectName("page_data_in_code");
        verticalLayout_41 = new QVBoxLayout(page_data_in_code);
        verticalLayout_41->setObjectName("verticalLayout_41");
        verticalLayout_41->setContentsMargins(0, 0, 0, 0);
        splitter_18 = new QSplitter(page_data_in_code);
        splitter_18->setObjectName("splitter_18");
        splitter_18->setOrientation(Qt::Vertical);
        tableWidget_data_in_code = new QTableWidget(splitter_18);
        tableWidget_data_in_code->setObjectName("tableWidget_data_in_code");
        tableWidget_data_in_code->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_data_in_code->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_data_in_code->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_18->addWidget(tableWidget_data_in_code);
        tableWidget_data_in_code->horizontalHeader()->setVisible(false);
        tableWidget_data_in_code->verticalHeader()->setVisible(false);
        tableWidget_data_in_code->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_data_in_code = new ToolsWidget(splitter_18);
        widgetHex_data_in_code->setObjectName("widgetHex_data_in_code");
        splitter_18->addWidget(widgetHex_data_in_code);

        verticalLayout_41->addWidget(splitter_18);

        stackedWidgetInfo->addWidget(page_data_in_code);
        page_code_signature = new QWidget();
        page_code_signature->setObjectName("page_code_signature");
        verticalLayout_42 = new QVBoxLayout(page_code_signature);
        verticalLayout_42->setObjectName("verticalLayout_42");
        verticalLayout_42->setContentsMargins(0, 0, 0, 0);
        splitter_19 = new QSplitter(page_code_signature);
        splitter_19->setObjectName("splitter_19");
        splitter_19->setOrientation(Qt::Vertical);
        tableWidget_code_signature = new QTableWidget(splitter_19);
        tableWidget_code_signature->setObjectName("tableWidget_code_signature");
        tableWidget_code_signature->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_code_signature->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_code_signature->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_19->addWidget(tableWidget_code_signature);
        tableWidget_code_signature->horizontalHeader()->setVisible(false);
        tableWidget_code_signature->verticalHeader()->setVisible(false);
        tableWidget_code_signature->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_code_signature = new ToolsWidget(splitter_19);
        widgetHex_code_signature->setObjectName("widgetHex_code_signature");
        splitter_19->addWidget(widgetHex_code_signature);

        verticalLayout_42->addWidget(splitter_19);

        stackedWidgetInfo->addWidget(page_code_signature);
        page_SuperBlob = new QWidget();
        page_SuperBlob->setObjectName("page_SuperBlob");
        verticalLayout_56 = new QVBoxLayout(page_SuperBlob);
        verticalLayout_56->setObjectName("verticalLayout_56");
        verticalLayout_56->setContentsMargins(0, 0, 0, 0);
        splitter_34 = new QSplitter(page_SuperBlob);
        splitter_34->setObjectName("splitter_34");
        splitter_34->setOrientation(Qt::Vertical);
        tableWidget_SuperBlob = new QTableWidget(splitter_34);
        tableWidget_SuperBlob->setObjectName("tableWidget_SuperBlob");
        tableWidget_SuperBlob->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_SuperBlob->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_SuperBlob->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_34->addWidget(tableWidget_SuperBlob);
        tableWidget_SuperBlob->horizontalHeader()->setVisible(false);
        tableWidget_SuperBlob->verticalHeader()->setVisible(false);
        tableWidget_SuperBlob->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_SuperBlob = new ToolsWidget(splitter_34);
        widgetHex_SuperBlob->setObjectName("widgetHex_SuperBlob");
        splitter_34->addWidget(widgetHex_SuperBlob);

        verticalLayout_56->addWidget(splitter_34);

        stackedWidgetInfo->addWidget(page_SuperBlob);
        page_main = new QWidget();
        page_main->setObjectName("page_main");
        verticalLayout_43 = new QVBoxLayout(page_main);
        verticalLayout_43->setObjectName("verticalLayout_43");
        verticalLayout_43->setContentsMargins(0, 0, 0, 0);
        splitter_20 = new QSplitter(page_main);
        splitter_20->setObjectName("splitter_20");
        splitter_20->setOrientation(Qt::Vertical);
        tableWidget_main = new QTableWidget(splitter_20);
        tableWidget_main->setObjectName("tableWidget_main");
        tableWidget_main->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_main->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_main->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_20->addWidget(tableWidget_main);
        tableWidget_main->horizontalHeader()->setVisible(false);
        tableWidget_main->verticalHeader()->setVisible(false);
        tableWidget_main->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_main = new ToolsWidget(splitter_20);
        widgetHex_main->setObjectName("widgetHex_main");
        splitter_20->addWidget(widgetHex_main);

        verticalLayout_43->addWidget(splitter_20);

        stackedWidgetInfo->addWidget(page_main);
        page_unix_thread = new QWidget();
        page_unix_thread->setObjectName("page_unix_thread");
        verticalLayout_44 = new QVBoxLayout(page_unix_thread);
        verticalLayout_44->setObjectName("verticalLayout_44");
        verticalLayout_44->setContentsMargins(0, 0, 0, 0);
        splitter_21 = new QSplitter(page_unix_thread);
        splitter_21->setObjectName("splitter_21");
        splitter_21->setOrientation(Qt::Vertical);
        tableWidget_unix_thread = new QTableWidget(splitter_21);
        tableWidget_unix_thread->setObjectName("tableWidget_unix_thread");
        tableWidget_unix_thread->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_unix_thread->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_unix_thread->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_21->addWidget(tableWidget_unix_thread);
        tableWidget_unix_thread->horizontalHeader()->setVisible(false);
        tableWidget_unix_thread->verticalHeader()->setVisible(false);
        tableWidget_unix_thread->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_unix_thread = new ToolsWidget(splitter_21);
        widgetHex_unix_thread->setObjectName("widgetHex_unix_thread");
        splitter_21->addWidget(widgetHex_unix_thread);

        verticalLayout_44->addWidget(splitter_21);

        stackedWidgetInfo->addWidget(page_unix_thread);
        page_unix_thread_x86_32 = new QWidget();
        page_unix_thread_x86_32->setObjectName("page_unix_thread_x86_32");
        verticalLayout_51 = new QVBoxLayout(page_unix_thread_x86_32);
        verticalLayout_51->setObjectName("verticalLayout_51");
        verticalLayout_51->setContentsMargins(0, 0, 0, 0);
        splitter_22 = new QSplitter(page_unix_thread_x86_32);
        splitter_22->setObjectName("splitter_22");
        splitter_22->setOrientation(Qt::Vertical);
        tableWidget_unix_thread_x86_32 = new QTableWidget(splitter_22);
        tableWidget_unix_thread_x86_32->setObjectName("tableWidget_unix_thread_x86_32");
        tableWidget_unix_thread_x86_32->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_unix_thread_x86_32->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_unix_thread_x86_32->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_22->addWidget(tableWidget_unix_thread_x86_32);
        tableWidget_unix_thread_x86_32->horizontalHeader()->setVisible(false);
        tableWidget_unix_thread_x86_32->verticalHeader()->setVisible(false);
        tableWidget_unix_thread_x86_32->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_unix_thread_x86_32 = new ToolsWidget(splitter_22);
        widgetHex_unix_thread_x86_32->setObjectName("widgetHex_unix_thread_x86_32");
        splitter_22->addWidget(widgetHex_unix_thread_x86_32);

        verticalLayout_51->addWidget(splitter_22);

        stackedWidgetInfo->addWidget(page_unix_thread_x86_32);
        page_unix_thread_x86_64 = new QWidget();
        page_unix_thread_x86_64->setObjectName("page_unix_thread_x86_64");
        verticalLayout_34 = new QVBoxLayout(page_unix_thread_x86_64);
        verticalLayout_34->setObjectName("verticalLayout_34");
        verticalLayout_34->setContentsMargins(0, 0, 0, 0);
        splitter_23 = new QSplitter(page_unix_thread_x86_64);
        splitter_23->setObjectName("splitter_23");
        splitter_23->setOrientation(Qt::Vertical);
        tableWidget_unix_thread_x86_64 = new QTableWidget(splitter_23);
        tableWidget_unix_thread_x86_64->setObjectName("tableWidget_unix_thread_x86_64");
        tableWidget_unix_thread_x86_64->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_unix_thread_x86_64->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_unix_thread_x86_64->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_23->addWidget(tableWidget_unix_thread_x86_64);
        tableWidget_unix_thread_x86_64->horizontalHeader()->setVisible(false);
        tableWidget_unix_thread_x86_64->verticalHeader()->setVisible(false);
        tableWidget_unix_thread_x86_64->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_unix_thread_x86_64 = new ToolsWidget(splitter_23);
        widgetHex_unix_thread_x86_64->setObjectName("widgetHex_unix_thread_x86_64");
        splitter_23->addWidget(widgetHex_unix_thread_x86_64);

        verticalLayout_34->addWidget(splitter_23);

        stackedWidgetInfo->addWidget(page_unix_thread_x86_64);
        page_unix_thread_arm_32 = new QWidget();
        page_unix_thread_arm_32->setObjectName("page_unix_thread_arm_32");
        verticalLayout_32 = new QVBoxLayout(page_unix_thread_arm_32);
        verticalLayout_32->setObjectName("verticalLayout_32");
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        splitter_24 = new QSplitter(page_unix_thread_arm_32);
        splitter_24->setObjectName("splitter_24");
        splitter_24->setOrientation(Qt::Vertical);
        tableWidget_unix_thread_arm_32 = new QTableWidget(splitter_24);
        tableWidget_unix_thread_arm_32->setObjectName("tableWidget_unix_thread_arm_32");
        tableWidget_unix_thread_arm_32->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_unix_thread_arm_32->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_unix_thread_arm_32->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_24->addWidget(tableWidget_unix_thread_arm_32);
        tableWidget_unix_thread_arm_32->horizontalHeader()->setVisible(false);
        tableWidget_unix_thread_arm_32->verticalHeader()->setVisible(false);
        tableWidget_unix_thread_arm_32->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_unix_thread_arm_32 = new ToolsWidget(splitter_24);
        widgetHex_unix_thread_arm_32->setObjectName("widgetHex_unix_thread_arm_32");
        splitter_24->addWidget(widgetHex_unix_thread_arm_32);

        verticalLayout_32->addWidget(splitter_24);

        stackedWidgetInfo->addWidget(page_unix_thread_arm_32);
        page_unix_thread_arm_64 = new QWidget();
        page_unix_thread_arm_64->setObjectName("page_unix_thread_arm_64");
        verticalLayout_33 = new QVBoxLayout(page_unix_thread_arm_64);
        verticalLayout_33->setObjectName("verticalLayout_33");
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        splitter_25 = new QSplitter(page_unix_thread_arm_64);
        splitter_25->setObjectName("splitter_25");
        splitter_25->setOrientation(Qt::Vertical);
        tableWidget_unix_thread_arm_64 = new QTableWidget(splitter_25);
        tableWidget_unix_thread_arm_64->setObjectName("tableWidget_unix_thread_arm_64");
        tableWidget_unix_thread_arm_64->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_unix_thread_arm_64->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_unix_thread_arm_64->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_25->addWidget(tableWidget_unix_thread_arm_64);
        tableWidget_unix_thread_arm_64->horizontalHeader()->setVisible(false);
        tableWidget_unix_thread_arm_64->verticalHeader()->setVisible(false);
        tableWidget_unix_thread_arm_64->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_unix_thread_arm_64 = new ToolsWidget(splitter_25);
        widgetHex_unix_thread_arm_64->setObjectName("widgetHex_unix_thread_arm_64");
        splitter_25->addWidget(widgetHex_unix_thread_arm_64);

        verticalLayout_33->addWidget(splitter_25);

        stackedWidgetInfo->addWidget(page_unix_thread_arm_64);
        page_unix_thread_m68k_32 = new QWidget();
        page_unix_thread_m68k_32->setObjectName("page_unix_thread_m68k_32");
        verticalLayout_31 = new QVBoxLayout(page_unix_thread_m68k_32);
        verticalLayout_31->setObjectName("verticalLayout_31");
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        splitter_26 = new QSplitter(page_unix_thread_m68k_32);
        splitter_26->setObjectName("splitter_26");
        splitter_26->setOrientation(Qt::Vertical);
        tableWidget_unix_thread_m68k_32 = new QTableWidget(splitter_26);
        tableWidget_unix_thread_m68k_32->setObjectName("tableWidget_unix_thread_m68k_32");
        tableWidget_unix_thread_m68k_32->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_unix_thread_m68k_32->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_unix_thread_m68k_32->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_26->addWidget(tableWidget_unix_thread_m68k_32);
        tableWidget_unix_thread_m68k_32->horizontalHeader()->setVisible(false);
        tableWidget_unix_thread_m68k_32->verticalHeader()->setVisible(false);
        tableWidget_unix_thread_m68k_32->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_unix_thread_m68k_32 = new ToolsWidget(splitter_26);
        widgetHex_unix_thread_m68k_32->setObjectName("widgetHex_unix_thread_m68k_32");
        splitter_26->addWidget(widgetHex_unix_thread_m68k_32);

        verticalLayout_31->addWidget(splitter_26);

        stackedWidgetInfo->addWidget(page_unix_thread_m68k_32);
        page_unix_thread_ppc_32 = new QWidget();
        page_unix_thread_ppc_32->setObjectName("page_unix_thread_ppc_32");
        verticalLayout_30 = new QVBoxLayout(page_unix_thread_ppc_32);
        verticalLayout_30->setObjectName("verticalLayout_30");
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        splitter_27 = new QSplitter(page_unix_thread_ppc_32);
        splitter_27->setObjectName("splitter_27");
        splitter_27->setOrientation(Qt::Vertical);
        tableWidget_unix_thread_ppc_32 = new QTableWidget(splitter_27);
        tableWidget_unix_thread_ppc_32->setObjectName("tableWidget_unix_thread_ppc_32");
        tableWidget_unix_thread_ppc_32->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_unix_thread_ppc_32->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_unix_thread_ppc_32->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_27->addWidget(tableWidget_unix_thread_ppc_32);
        tableWidget_unix_thread_ppc_32->horizontalHeader()->setVisible(false);
        tableWidget_unix_thread_ppc_32->verticalHeader()->setVisible(false);
        tableWidget_unix_thread_ppc_32->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_unix_thread_ppc_32 = new ToolsWidget(splitter_27);
        widgetHex_unix_thread_ppc_32->setObjectName("widgetHex_unix_thread_ppc_32");
        splitter_27->addWidget(widgetHex_unix_thread_ppc_32);

        verticalLayout_30->addWidget(splitter_27);

        stackedWidgetInfo->addWidget(page_unix_thread_ppc_32);
        page_dyld_chained_fixups = new QWidget();
        page_dyld_chained_fixups->setObjectName("page_dyld_chained_fixups");
        verticalLayout_58 = new QVBoxLayout(page_dyld_chained_fixups);
        verticalLayout_58->setObjectName("verticalLayout_58");
        verticalLayout_58->setContentsMargins(0, 0, 0, 0);
        splitter_35 = new QSplitter(page_dyld_chained_fixups);
        splitter_35->setObjectName("splitter_35");
        splitter_35->setOrientation(Qt::Vertical);
        tableWidget_dyld_chained_fixups = new QTableWidget(splitter_35);
        tableWidget_dyld_chained_fixups->setObjectName("tableWidget_dyld_chained_fixups");
        sizePolicy.setHeightForWidth(tableWidget_dyld_chained_fixups->sizePolicy().hasHeightForWidth());
        tableWidget_dyld_chained_fixups->setSizePolicy(sizePolicy);
        tableWidget_dyld_chained_fixups->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_dyld_chained_fixups->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_dyld_chained_fixups->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_dyld_chained_fixups->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_35->addWidget(tableWidget_dyld_chained_fixups);
        tableWidget_dyld_chained_fixups->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_dyld_chained_fixups->verticalHeader()->setVisible(true);
        tableWidget_dyld_chained_fixups->verticalHeader()->setMinimumSectionSize(0);
        tableWidget_dyld_chained_fixups->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_dyld_chained_fixups = new ToolsWidget(splitter_35);
        widgetHex_dyld_chained_fixups->setObjectName("widgetHex_dyld_chained_fixups");
        splitter_35->addWidget(widgetHex_dyld_chained_fixups);

        verticalLayout_58->addWidget(splitter_35);

        stackedWidgetInfo->addWidget(page_dyld_chained_fixups);
        page_dyld_exports_trie = new QWidget();
        page_dyld_exports_trie->setObjectName("page_dyld_exports_trie");
        verticalLayout_59 = new QVBoxLayout(page_dyld_exports_trie);
        verticalLayout_59->setObjectName("verticalLayout_59");
        verticalLayout_59->setContentsMargins(0, 0, 0, 0);
        splitter_36 = new QSplitter(page_dyld_exports_trie);
        splitter_36->setObjectName("splitter_36");
        splitter_36->setOrientation(Qt::Vertical);
        tableWidget_dyld_exports_trie = new QTableWidget(splitter_36);
        tableWidget_dyld_exports_trie->setObjectName("tableWidget_dyld_exports_trie");
        sizePolicy.setHeightForWidth(tableWidget_dyld_exports_trie->sizePolicy().hasHeightForWidth());
        tableWidget_dyld_exports_trie->setSizePolicy(sizePolicy);
        tableWidget_dyld_exports_trie->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_dyld_exports_trie->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_dyld_exports_trie->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_dyld_exports_trie->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_36->addWidget(tableWidget_dyld_exports_trie);
        tableWidget_dyld_exports_trie->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_dyld_exports_trie->verticalHeader()->setVisible(true);
        tableWidget_dyld_exports_trie->verticalHeader()->setMinimumSectionSize(0);
        tableWidget_dyld_exports_trie->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_dyld_exports_trie = new ToolsWidget(splitter_36);
        widgetHex_dyld_exports_trie->setObjectName("widgetHex_dyld_exports_trie");
        splitter_36->addWidget(widgetHex_dyld_exports_trie);

        verticalLayout_59->addWidget(splitter_36);

        stackedWidgetInfo->addWidget(page_dyld_exports_trie);
        page_StringTable = new QWidget();
        page_StringTable->setObjectName("page_StringTable");
        verticalLayout_36 = new QVBoxLayout(page_StringTable);
        verticalLayout_36->setObjectName("verticalLayout_36");
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        widgetHex_StringTable = new ToolsWidget(page_StringTable);
        widgetHex_StringTable->setObjectName("widgetHex_StringTable");
        sizePolicy.setHeightForWidth(widgetHex_StringTable->sizePolicy().hasHeightForWidth());
        widgetHex_StringTable->setSizePolicy(sizePolicy);

        verticalLayout_36->addWidget(widgetHex_StringTable);

        stackedWidgetInfo->addWidget(page_StringTable);
        page_SymbolTable = new QWidget();
        page_SymbolTable->setObjectName("page_SymbolTable");
        verticalLayout_37 = new QVBoxLayout(page_SymbolTable);
        verticalLayout_37->setObjectName("verticalLayout_37");
        verticalLayout_37->setContentsMargins(0, 0, 0, 0);
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
        tableView_SymbolTable->verticalHeader()->setDefaultSectionSize(21);
        tableView_SymbolTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout_37->addWidget(tableView_SymbolTable);

        stackedWidgetInfo->addWidget(page_SymbolTable);
        page_Functions = new QWidget();
        page_Functions->setObjectName("page_Functions");
        verticalLayout_38 = new QVBoxLayout(page_Functions);
        verticalLayout_38->setObjectName("verticalLayout_38");
        verticalLayout_38->setContentsMargins(0, 0, 0, 0);
        tableView_Functions = new XTableView(page_Functions);
        tableView_Functions->setObjectName("tableView_Functions");
        sizePolicy.setHeightForWidth(tableView_Functions->sizePolicy().hasHeightForWidth());
        tableView_Functions->setSizePolicy(sizePolicy);
        tableView_Functions->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Functions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Functions->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Functions->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Functions->verticalHeader()->setVisible(false);
        tableView_Functions->verticalHeader()->setMinimumSectionSize(20);
        tableView_Functions->verticalHeader()->setDefaultSectionSize(21);
        tableView_Functions->verticalHeader()->setStretchLastSection(false);

        verticalLayout_38->addWidget(tableView_Functions);

        stackedWidgetInfo->addWidget(page_Functions);
        page_data_in_code_entry = new QWidget();
        page_data_in_code_entry->setObjectName("page_data_in_code_entry");
        verticalLayout_39 = new QVBoxLayout(page_data_in_code_entry);
        verticalLayout_39->setObjectName("verticalLayout_39");
        verticalLayout_39->setContentsMargins(0, 0, 0, 0);
        tableView_data_in_code_entry = new XTableView(page_data_in_code_entry);
        tableView_data_in_code_entry->setObjectName("tableView_data_in_code_entry");
        sizePolicy.setHeightForWidth(tableView_data_in_code_entry->sizePolicy().hasHeightForWidth());
        tableView_data_in_code_entry->setSizePolicy(sizePolicy);
        tableView_data_in_code_entry->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_data_in_code_entry->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_data_in_code_entry->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_data_in_code_entry->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_data_in_code_entry->verticalHeader()->setVisible(false);
        tableView_data_in_code_entry->verticalHeader()->setMinimumSectionSize(20);
        tableView_data_in_code_entry->verticalHeader()->setDefaultSectionSize(21);
        tableView_data_in_code_entry->verticalHeader()->setStretchLastSection(false);

        verticalLayout_39->addWidget(tableView_data_in_code_entry);

        stackedWidgetInfo->addWidget(page_data_in_code_entry);
        page_DYLD_INFO_rebase = new QWidget();
        page_DYLD_INFO_rebase->setObjectName("page_DYLD_INFO_rebase");
        verticalLayout_29 = new QVBoxLayout(page_DYLD_INFO_rebase);
        verticalLayout_29->setObjectName("verticalLayout_29");
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        splitter_28 = new QSplitter(page_DYLD_INFO_rebase);
        splitter_28->setObjectName("splitter_28");
        splitter_28->setOrientation(Qt::Vertical);
        tableView_DYLD_INFO_rebase = new XTableView(splitter_28);
        tableView_DYLD_INFO_rebase->setObjectName("tableView_DYLD_INFO_rebase");
        sizePolicy.setHeightForWidth(tableView_DYLD_INFO_rebase->sizePolicy().hasHeightForWidth());
        tableView_DYLD_INFO_rebase->setSizePolicy(sizePolicy);
        tableView_DYLD_INFO_rebase->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYLD_INFO_rebase->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYLD_INFO_rebase->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYLD_INFO_rebase->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_28->addWidget(tableView_DYLD_INFO_rebase);
        tableView_DYLD_INFO_rebase->verticalHeader()->setVisible(false);
        tableView_DYLD_INFO_rebase->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYLD_INFO_rebase->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYLD_INFO_rebase->verticalHeader()->setStretchLastSection(false);
        widgetHex_DYLD_INFO_rebase = new ToolsWidget(splitter_28);
        widgetHex_DYLD_INFO_rebase->setObjectName("widgetHex_DYLD_INFO_rebase");
        splitter_28->addWidget(widgetHex_DYLD_INFO_rebase);

        verticalLayout_29->addWidget(splitter_28);

        stackedWidgetInfo->addWidget(page_DYLD_INFO_rebase);
        page_DYLD_INFO_bind = new QWidget();
        page_DYLD_INFO_bind->setObjectName("page_DYLD_INFO_bind");
        verticalLayout_28 = new QVBoxLayout(page_DYLD_INFO_bind);
        verticalLayout_28->setObjectName("verticalLayout_28");
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        splitter_29 = new QSplitter(page_DYLD_INFO_bind);
        splitter_29->setObjectName("splitter_29");
        splitter_29->setOrientation(Qt::Vertical);
        tableView_DYLD_INFO_bind = new XTableView(splitter_29);
        tableView_DYLD_INFO_bind->setObjectName("tableView_DYLD_INFO_bind");
        sizePolicy.setHeightForWidth(tableView_DYLD_INFO_bind->sizePolicy().hasHeightForWidth());
        tableView_DYLD_INFO_bind->setSizePolicy(sizePolicy);
        tableView_DYLD_INFO_bind->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYLD_INFO_bind->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYLD_INFO_bind->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYLD_INFO_bind->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_29->addWidget(tableView_DYLD_INFO_bind);
        tableView_DYLD_INFO_bind->verticalHeader()->setVisible(false);
        tableView_DYLD_INFO_bind->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYLD_INFO_bind->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYLD_INFO_bind->verticalHeader()->setStretchLastSection(false);
        widgetHex_DYLD_INFO_bind = new ToolsWidget(splitter_29);
        widgetHex_DYLD_INFO_bind->setObjectName("widgetHex_DYLD_INFO_bind");
        splitter_29->addWidget(widgetHex_DYLD_INFO_bind);

        verticalLayout_28->addWidget(splitter_29);

        stackedWidgetInfo->addWidget(page_DYLD_INFO_bind);
        page_DYLD_INFO_weak_bind = new QWidget();
        page_DYLD_INFO_weak_bind->setObjectName("page_DYLD_INFO_weak_bind");
        verticalLayout_26 = new QVBoxLayout(page_DYLD_INFO_weak_bind);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        splitter_30 = new QSplitter(page_DYLD_INFO_weak_bind);
        splitter_30->setObjectName("splitter_30");
        splitter_30->setOrientation(Qt::Vertical);
        tableView_DYLD_INFO_weak_bind = new XTableView(splitter_30);
        tableView_DYLD_INFO_weak_bind->setObjectName("tableView_DYLD_INFO_weak_bind");
        sizePolicy.setHeightForWidth(tableView_DYLD_INFO_weak_bind->sizePolicy().hasHeightForWidth());
        tableView_DYLD_INFO_weak_bind->setSizePolicy(sizePolicy);
        tableView_DYLD_INFO_weak_bind->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYLD_INFO_weak_bind->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYLD_INFO_weak_bind->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYLD_INFO_weak_bind->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_30->addWidget(tableView_DYLD_INFO_weak_bind);
        tableView_DYLD_INFO_weak_bind->verticalHeader()->setVisible(false);
        tableView_DYLD_INFO_weak_bind->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYLD_INFO_weak_bind->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYLD_INFO_weak_bind->verticalHeader()->setStretchLastSection(false);
        widgetHex_DYLD_INFO_weak_bind = new ToolsWidget(splitter_30);
        widgetHex_DYLD_INFO_weak_bind->setObjectName("widgetHex_DYLD_INFO_weak_bind");
        splitter_30->addWidget(widgetHex_DYLD_INFO_weak_bind);

        verticalLayout_26->addWidget(splitter_30);

        stackedWidgetInfo->addWidget(page_DYLD_INFO_weak_bind);
        page_DYLD_INFO_lazy_bind = new QWidget();
        page_DYLD_INFO_lazy_bind->setObjectName("page_DYLD_INFO_lazy_bind");
        verticalLayout_25 = new QVBoxLayout(page_DYLD_INFO_lazy_bind);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        splitter_31 = new QSplitter(page_DYLD_INFO_lazy_bind);
        splitter_31->setObjectName("splitter_31");
        splitter_31->setOrientation(Qt::Vertical);
        tableView_DYLD_INFO_lazy_bind = new XTableView(splitter_31);
        tableView_DYLD_INFO_lazy_bind->setObjectName("tableView_DYLD_INFO_lazy_bind");
        sizePolicy.setHeightForWidth(tableView_DYLD_INFO_lazy_bind->sizePolicy().hasHeightForWidth());
        tableView_DYLD_INFO_lazy_bind->setSizePolicy(sizePolicy);
        tableView_DYLD_INFO_lazy_bind->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYLD_INFO_lazy_bind->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYLD_INFO_lazy_bind->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYLD_INFO_lazy_bind->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_31->addWidget(tableView_DYLD_INFO_lazy_bind);
        tableView_DYLD_INFO_lazy_bind->verticalHeader()->setVisible(false);
        tableView_DYLD_INFO_lazy_bind->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYLD_INFO_lazy_bind->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYLD_INFO_lazy_bind->verticalHeader()->setStretchLastSection(false);
        widgetHex_DYLD_INFO_lazy_bind = new ToolsWidget(splitter_31);
        widgetHex_DYLD_INFO_lazy_bind->setObjectName("widgetHex_DYLD_INFO_lazy_bind");
        splitter_31->addWidget(widgetHex_DYLD_INFO_lazy_bind);

        verticalLayout_25->addWidget(splitter_31);

        stackedWidgetInfo->addWidget(page_DYLD_INFO_lazy_bind);
        page_DYLD_INFO_export = new QWidget();
        page_DYLD_INFO_export->setObjectName("page_DYLD_INFO_export");
        verticalLayout_23 = new QVBoxLayout(page_DYLD_INFO_export);
        verticalLayout_23->setObjectName("verticalLayout_23");
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        splitter_32 = new QSplitter(page_DYLD_INFO_export);
        splitter_32->setObjectName("splitter_32");
        splitter_32->setOrientation(Qt::Vertical);
        tableView_DYLD_INFO_export = new XTableView(splitter_32);
        tableView_DYLD_INFO_export->setObjectName("tableView_DYLD_INFO_export");
        sizePolicy.setHeightForWidth(tableView_DYLD_INFO_export->sizePolicy().hasHeightForWidth());
        tableView_DYLD_INFO_export->setSizePolicy(sizePolicy);
        tableView_DYLD_INFO_export->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYLD_INFO_export->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYLD_INFO_export->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYLD_INFO_export->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_32->addWidget(tableView_DYLD_INFO_export);
        tableView_DYLD_INFO_export->verticalHeader()->setVisible(false);
        tableView_DYLD_INFO_export->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYLD_INFO_export->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYLD_INFO_export->verticalHeader()->setStretchLastSection(false);
        widgetHex_DYLD_INFO_export = new ToolsWidget(splitter_32);
        widgetHex_DYLD_INFO_export->setObjectName("widgetHex_DYLD_INFO_export");
        splitter_32->addWidget(widgetHex_DYLD_INFO_export);

        verticalLayout_23->addWidget(splitter_32);

        stackedWidgetInfo->addWidget(page_DYLD_INFO_export);
        page_DYSYMTAB_toc = new QWidget();
        page_DYSYMTAB_toc->setObjectName("page_DYSYMTAB_toc");
        verticalLayout_45 = new QVBoxLayout(page_DYSYMTAB_toc);
        verticalLayout_45->setObjectName("verticalLayout_45");
        verticalLayout_45->setContentsMargins(0, 0, 0, 0);
        tableView_DYSYMTAB_toc = new XTableView(page_DYSYMTAB_toc);
        tableView_DYSYMTAB_toc->setObjectName("tableView_DYSYMTAB_toc");
        sizePolicy.setHeightForWidth(tableView_DYSYMTAB_toc->sizePolicy().hasHeightForWidth());
        tableView_DYSYMTAB_toc->setSizePolicy(sizePolicy);
        tableView_DYSYMTAB_toc->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYSYMTAB_toc->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYSYMTAB_toc->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYSYMTAB_toc->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_DYSYMTAB_toc->verticalHeader()->setVisible(false);
        tableView_DYSYMTAB_toc->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYSYMTAB_toc->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYSYMTAB_toc->verticalHeader()->setStretchLastSection(false);

        verticalLayout_45->addWidget(tableView_DYSYMTAB_toc);

        stackedWidgetInfo->addWidget(page_DYSYMTAB_toc);
        page_DYSYMTAB_modtab = new QWidget();
        page_DYSYMTAB_modtab->setObjectName("page_DYSYMTAB_modtab");
        verticalLayout_46 = new QVBoxLayout(page_DYSYMTAB_modtab);
        verticalLayout_46->setObjectName("verticalLayout_46");
        verticalLayout_46->setContentsMargins(0, 0, 0, 0);
        tableView_DYSYMTAB_modtab = new XTableView(page_DYSYMTAB_modtab);
        tableView_DYSYMTAB_modtab->setObjectName("tableView_DYSYMTAB_modtab");
        sizePolicy.setHeightForWidth(tableView_DYSYMTAB_modtab->sizePolicy().hasHeightForWidth());
        tableView_DYSYMTAB_modtab->setSizePolicy(sizePolicy);
        tableView_DYSYMTAB_modtab->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYSYMTAB_modtab->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYSYMTAB_modtab->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYSYMTAB_modtab->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_DYSYMTAB_modtab->verticalHeader()->setVisible(false);
        tableView_DYSYMTAB_modtab->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYSYMTAB_modtab->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYSYMTAB_modtab->verticalHeader()->setStretchLastSection(false);

        verticalLayout_46->addWidget(tableView_DYSYMTAB_modtab);

        stackedWidgetInfo->addWidget(page_DYSYMTAB_modtab);
        page_DYSYMTAB_extrefsyms = new QWidget();
        page_DYSYMTAB_extrefsyms->setObjectName("page_DYSYMTAB_extrefsyms");
        verticalLayout_47 = new QVBoxLayout(page_DYSYMTAB_extrefsyms);
        verticalLayout_47->setObjectName("verticalLayout_47");
        verticalLayout_47->setContentsMargins(0, 0, 0, 0);
        tableView_DYSYMTAB_extrefsyms = new XTableView(page_DYSYMTAB_extrefsyms);
        tableView_DYSYMTAB_extrefsyms->setObjectName("tableView_DYSYMTAB_extrefsyms");
        sizePolicy.setHeightForWidth(tableView_DYSYMTAB_extrefsyms->sizePolicy().hasHeightForWidth());
        tableView_DYSYMTAB_extrefsyms->setSizePolicy(sizePolicy);
        tableView_DYSYMTAB_extrefsyms->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYSYMTAB_extrefsyms->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYSYMTAB_extrefsyms->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYSYMTAB_extrefsyms->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_DYSYMTAB_extrefsyms->verticalHeader()->setVisible(false);
        tableView_DYSYMTAB_extrefsyms->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYSYMTAB_extrefsyms->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYSYMTAB_extrefsyms->verticalHeader()->setStretchLastSection(false);

        verticalLayout_47->addWidget(tableView_DYSYMTAB_extrefsyms);

        stackedWidgetInfo->addWidget(page_DYSYMTAB_extrefsyms);
        page_DYSYMTAB_indirectsyms = new QWidget();
        page_DYSYMTAB_indirectsyms->setObjectName("page_DYSYMTAB_indirectsyms");
        verticalLayout_48 = new QVBoxLayout(page_DYSYMTAB_indirectsyms);
        verticalLayout_48->setObjectName("verticalLayout_48");
        verticalLayout_48->setContentsMargins(0, 0, 0, 0);
        tableView_DYSYMTAB_indirectsyms = new XTableView(page_DYSYMTAB_indirectsyms);
        tableView_DYSYMTAB_indirectsyms->setObjectName("tableView_DYSYMTAB_indirectsyms");
        sizePolicy.setHeightForWidth(tableView_DYSYMTAB_indirectsyms->sizePolicy().hasHeightForWidth());
        tableView_DYSYMTAB_indirectsyms->setSizePolicy(sizePolicy);
        tableView_DYSYMTAB_indirectsyms->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYSYMTAB_indirectsyms->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYSYMTAB_indirectsyms->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYSYMTAB_indirectsyms->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_DYSYMTAB_indirectsyms->verticalHeader()->setVisible(false);
        tableView_DYSYMTAB_indirectsyms->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYSYMTAB_indirectsyms->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYSYMTAB_indirectsyms->verticalHeader()->setStretchLastSection(false);

        verticalLayout_48->addWidget(tableView_DYSYMTAB_indirectsyms);

        stackedWidgetInfo->addWidget(page_DYSYMTAB_indirectsyms);
        page_DYSYMTAB_extrel = new QWidget();
        page_DYSYMTAB_extrel->setObjectName("page_DYSYMTAB_extrel");
        verticalLayout_49 = new QVBoxLayout(page_DYSYMTAB_extrel);
        verticalLayout_49->setObjectName("verticalLayout_49");
        verticalLayout_49->setContentsMargins(0, 0, 0, 0);
        tableView_DYSYMTAB_extrel = new XTableView(page_DYSYMTAB_extrel);
        tableView_DYSYMTAB_extrel->setObjectName("tableView_DYSYMTAB_extrel");
        sizePolicy.setHeightForWidth(tableView_DYSYMTAB_extrel->sizePolicy().hasHeightForWidth());
        tableView_DYSYMTAB_extrel->setSizePolicy(sizePolicy);
        tableView_DYSYMTAB_extrel->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYSYMTAB_extrel->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYSYMTAB_extrel->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYSYMTAB_extrel->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_DYSYMTAB_extrel->verticalHeader()->setVisible(false);
        tableView_DYSYMTAB_extrel->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYSYMTAB_extrel->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYSYMTAB_extrel->verticalHeader()->setStretchLastSection(false);

        verticalLayout_49->addWidget(tableView_DYSYMTAB_extrel);

        stackedWidgetInfo->addWidget(page_DYSYMTAB_extrel);
        page_DYSYMTAB_locrel = new QWidget();
        page_DYSYMTAB_locrel->setObjectName("page_DYSYMTAB_locrel");
        verticalLayout_50 = new QVBoxLayout(page_DYSYMTAB_locrel);
        verticalLayout_50->setObjectName("verticalLayout_50");
        verticalLayout_50->setContentsMargins(0, 0, 0, 0);
        tableView_DYSYMTAB_locrel = new XTableView(page_DYSYMTAB_locrel);
        tableView_DYSYMTAB_locrel->setObjectName("tableView_DYSYMTAB_locrel");
        sizePolicy.setHeightForWidth(tableView_DYSYMTAB_locrel->sizePolicy().hasHeightForWidth());
        tableView_DYSYMTAB_locrel->setSizePolicy(sizePolicy);
        tableView_DYSYMTAB_locrel->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DYSYMTAB_locrel->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DYSYMTAB_locrel->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DYSYMTAB_locrel->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_DYSYMTAB_locrel->verticalHeader()->setVisible(false);
        tableView_DYSYMTAB_locrel->verticalHeader()->setMinimumSectionSize(20);
        tableView_DYSYMTAB_locrel->verticalHeader()->setDefaultSectionSize(20);
        tableView_DYSYMTAB_locrel->verticalHeader()->setStretchLastSection(false);

        verticalLayout_50->addWidget(tableView_DYSYMTAB_locrel);

        stackedWidgetInfo->addWidget(page_DYSYMTAB_locrel);
        splitter->addWidget(stackedWidgetInfo);

        verticalLayout->addWidget(splitter);


        retranslateUi(MACHWidget);

        QMetaObject::connectSlotsByName(MACHWidget);
    } // setupUi

    void retranslateUi(QWidget *MACHWidget)
    {
        toolButtonReload->setText(QCoreApplication::translate("MACHWidget", "Reload", nullptr));
        checkBoxReadonly->setText(QCoreApplication::translate("MACHWidget", "Readonly", nullptr));
        (void)MACHWidget;
    } // retranslateUi

};

namespace Ui {
    class MACHWidget: public Ui_MACHWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHWIDGET_H
