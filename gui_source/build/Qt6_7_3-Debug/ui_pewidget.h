/********************************************************************************
** Form generated from reading UI file 'pewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEWIDGET_H
#define UI_PEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "diewidgetadvanced.h"
#include "nfdwidgetadvanced.h"
#include "petoolswidget.h"
#include "searchsignatureswidget.h"
#include "searchstringswidget.h"
#include "searchvalueswidget.h"
#include "toolswidget.h"
#include "xdisasmview.h"
#include "xentropywidget.h"
#include "xextractorwidget.h"
#include "xfileinfowidget.h"
#include "xhashwidget.h"
#include "xhexviewwidget.h"
#include "xlineedithex.h"
#include "xmemorymapwidget.h"
#include "xmultidisasmwidget.h"
#include "xtableview.h"
#include "xvirustotalwidget.h"
#include "xvisualizationwidget.h"
#include "yarawidgetadvanced.h"

QT_BEGIN_NAMESPACE

class Ui_PEWidget
{
public:
    QVBoxLayout *verticalLayout_42;
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
    QVBoxLayout *verticalLayout_43;
    XFileInfoWidget *widgetInfo;
    QWidget *page_Visualization;
    QVBoxLayout *verticalLayout_64;
    XVisualizationWidget *widgetVisualization;
    QWidget *page_VirusTotal;
    QVBoxLayout *verticalLayout_440;
    XVirusTotalWidget *widgetVirusTotal;
    QWidget *page_HEX;
    QVBoxLayout *verticalLayout_13;
    XHexViewWidget *widgetHex;
    QWidget *page_Disasm;
    QVBoxLayout *verticalLayout_26;
    XMultiDisasmWidget *widgetDisasm;
    QWidget *page_Hash;
    QVBoxLayout *verticalLayout_33;
    XHashWidget *widgetHash;
    QWidget *page_Strings;
    QVBoxLayout *verticalLayout_22;
    SearchStringsWidget *widgetStrings;
    QWidget *page_Signatures;
    QVBoxLayout *verticalLayout_32;
    SearchSignaturesWidget *widgetSignatures;
    QWidget *page_MemoryMap;
    QVBoxLayout *verticalLayout_23;
    XMemoryMapWidget *widgetMemoryMap;
    QWidget *page_Entropy;
    QVBoxLayout *verticalLayout_24;
    XEntropyWidget *widgetEntropy;
    QWidget *page_HeuristicScan;
    QVBoxLayout *verticalLayout_25;
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
    QWidget *page_Tools;
    QVBoxLayout *verticalLayout_27XX;
    PEToolsWidget *widgetTools;
    QWidget *page_IMAGE_DOS_HEADER;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButtonSave_IMAGE_DOS_HEADER;
    QSplitter *splitter_3;
    QTableWidget *tableWidget_IMAGE_DOS_HEADER;
    ToolsWidget *widgetHex_IMAGE_DOS_HEADER;
    QWidget *page_DosStub;
    QVBoxLayout *verticalLayout_45;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButtonDump_DosStub;
    QSplitter *splitter_14;
    XDisasmView *widgetDisasm_DosStub;
    ToolsWidget *widgetHex_DosStub;
    QWidget *page_IMAGE_NT_HEADERS;
    QVBoxLayout *verticalLayout_48;
    QSplitter *splitter_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButtonSave_IMAGE_NT_HEADERS;
    QTableWidget *tableWidget_IMAGE_NT_HEADERS;
    ToolsWidget *widgetHex_IMAGE_NT_HEADERS;
    QWidget *page_IMAGE_FILE_HEADER;
    QVBoxLayout *verticalLayout_49;
    QSplitter *splitter_5;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pushButtonSave_IMAGE_FILE_HEADER;
    QTableWidget *tableWidget_IMAGE_FILE_HEADER;
    ToolsWidget *widgetHex_IMAGE_FILE_HEADER;
    QWidget *page_IMAGE_OPTIONAL_HEADER;
    QVBoxLayout *verticalLayout_47;
    QSplitter *splitter_6;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *pushButtonSave_IMAGE_OPTIONAL_HEADER;
    QTableWidget *tableWidget_IMAGE_OPTIONAL_HEADER;
    ToolsWidget *widgetHex_IMAGE_OPTIONAL_HEADER;
    QWidget *page_IMAGE_DIRECTORY_ENTRIES;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButtonSave_IMAGE_DIRECTORY_ENTRIES;
    QSplitter *splitter_7;
    QTableWidget *tableWidget_IMAGE_DIRECTORY_ENTRIES;
    ToolsWidget *widgetHex_IMAGE_DIRECTORY_ENTRIES;
    QWidget *page_RICH;
    QVBoxLayout *verticalLayout_41;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *pushButtonSave_RICH;
    XTableView *tableView_RICH;
    QWidget *page_Sections;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBoxSectionsStringTable;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonDumpAll_Sections;
    QPushButton *pushButtonSave_Sections;
    XTableView *tableView_Sections;
    ToolsWidget *widgetHex_Section;
    QWidget *page_Sections_Info;
    QVBoxLayout *verticalLayout_46;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *pushButtonExpand_Sections_Info;
    QPushButton *pushButtonCollapse_Sections_Info;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *pushButtonSave_Sections_Info;
    QTreeView *treeView_Sections_Info;
    QWidget *page_Export;
    QVBoxLayout *verticalLayout_60;
    QSplitter *splitter_9;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_31;
    QPushButton *pushButtonSave_ExportHeader;
    QTableWidget *tableWidget_ExportHeader;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_34;
    QHBoxLayout *horizontalLayout_31;
    QCheckBox *checkBoxExportShowValid;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonSave_ExportFunctions;
    XTableView *tableView_ExportFunctions;
    QWidget *page_Import;
    QVBoxLayout *verticalLayout_52;
    QSplitter *splitter_10;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_30;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxHash64;
    QVBoxLayout *verticalLayout_9;
    XLineEditHEX *lineEditHash64;
    QGroupBox *groupBoxHash32;
    QVBoxLayout *verticalLayout_29;
    XLineEditHEX *lineEditHash32;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSave_ImportLibraries;
    XTableView *tableView_ImportLibraries;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_35;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *pushButtonSave_ImportFunctions;
    XTableView *tableView_ImportFunctions;
    QWidget *page_Import_info;
    QVBoxLayout *verticalLayout_65;
    QHBoxLayout *horizontalLayout_34;
    QPushButton *pushButtonExpand_Import_Info;
    QPushButton *pushButtonCollapse_Import_Info;
    QSpacerItem *horizontalSpacer_34;
    QPushButton *pushButtonSave_Import_Info;
    QTreeView *treeView_Import_Info;
    QWidget *page_Resources;
    QVBoxLayout *verticalLayout_39;
    QSplitter *splitter_11;
    QTabWidget *tabWidgetResources;
    QWidget *tabTable;
    QVBoxLayout *verticalLayout_40;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButtonExtractAllIcons_Resources;
    QPushButton *pushButtonExtractAllCursors_Resources;
    QPushButton *pushButtonDumpAll_Resources;
    QPushButton *pushButtonSave_Resources;
    XTableView *tableView_Resources;
    QWidget *tabTree;
    QVBoxLayout *verticalLayout_12;
    QSplitter *splitter_2;
    QTreeView *treeView_Resources;
    QTableWidget *tableWidget_Resources;
    ToolsWidget *widgetHex_Resources;
    QWidget *page_Resources_StringTable;
    QVBoxLayout *verticalLayout_59;
    QVBoxLayout *verticalLayout_44;
    QHBoxLayout *horizontalLayout_30;
    QSpacerItem *horizontalSpacer_30;
    QPushButton *pushButtonSave_Resources_StringTable;
    XTableView *tableView_Resources_StringTable;
    QWidget *page_Resources_Version;
    QVBoxLayout *verticalLayout_58;
    QSplitter *splitter_21;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_28;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *pushButtonSave_Resources_Version_Header;
    QTableWidget *tableWidget_Resources_Version;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_57;
    QHBoxLayout *horizontalLayout_29;
    QSpacerItem *horizontalSpacer_29;
    QPushButton *pushButtonSave_Resources_Version;
    QTextEdit *textEditResources_Version;
    QWidget *page_Resources_Manifest;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_ManifestFormat;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave_Manifest;
    QTextEdit *textEditResources_Manifest;
    QWidget *page_Exception;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButtonSave_Exception;
    QSplitter *splitter_12;
    XTableView *tableView_Exceptions;
    ToolsWidget *widgetHex_Exception;
    QWidget *page_Relocs;
    QVBoxLayout *verticalLayout_54;
    QSplitter *splitter_13;
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *pushButtonSave_Relocs;
    XTableView *tableView_Relocs;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_53;
    QHBoxLayout *horizontalLayout_24;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *pushButtonSave_RelocsPositions;
    XTableView *tableView_RelocsPositions;
    QWidget *page_Debug;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonSave_Debug;
    QSplitter *splitter_8;
    XTableView *tableView_Debug;
    ToolsWidget *widgetHex_Debug;
    QWidget *page_TLS;
    QVBoxLayout *verticalLayout_56;
    QSplitter *splitter_15;
    QWidget *layoutWidget_12;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_27;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *pushButtonSave_TLS;
    QTableWidget *tableWidget_TLS;
    ToolsWidget *widgetHex_TLS;
    QWidget *page_TLSCallbacks;
    QVBoxLayout *verticalLayout_38;
    QHBoxLayout *horizontalLayout_26;
    QSpacerItem *horizontalSpacer_26;
    QPushButton *pushButtonSave_TLSCallbacks;
    XTableView *tableView_TLSCallbacks;
    QWidget *page_LoadConfig;
    QVBoxLayout *verticalLayout_55;
    QSplitter *splitter_16;
    QWidget *layoutWidget_13;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_25;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *pushButtonSave_LoadConfig;
    QTableWidget *tableWidget_LoadConfig;
    ToolsWidget *widgetHex_LoadConfig;
    QWidget *page_BoundImport;
    QVBoxLayout *verticalLayout_31;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButtonSave_BoundImport;
    XTableView *tableView_BoundImport;
    QWidget *page_DelayImport;
    QVBoxLayout *verticalLayout_51;
    QSplitter *splitter_17;
    QWidget *layoutWidget_14;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *pushButtonSave_DelayImportLibraries;
    XTableView *tableView_DelayImportLibraries;
    QWidget *layoutWidget_15;
    QVBoxLayout *verticalLayout_50;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *pushButtonSave_DelayImportFunctions;
    XTableView *tableView_DelayImportFunctions;
    QWidget *page_NetHeader;
    QVBoxLayout *verticalLayout_61;
    QSplitter *splitter_18;
    QWidget *layoutWidget_16;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_32;
    QSpacerItem *horizontalSpacer_32;
    QPushButton *pushButtonSave_NetHeader;
    QTableWidget *tableWidget_NetHeader;
    ToolsWidget *widgetHex_NetHeader;
    QWidget *page_Net_Metadata;
    QVBoxLayout *verticalLayout_62;
    QSplitter *splitter_19;
    QWidget *layoutWidget_17;
    QVBoxLayout *verticalLayout_27;
    QHBoxLayout *horizontalLayout_33;
    QSpacerItem *horizontalSpacer_33;
    QPushButton *pushButtonSave_Net_Metadata;
    QTableWidget *tableWidget_Net_Metadata;
    ToolsWidget *widgetHex_Net_Metadata;
    QWidget *page_Net_Metadata_Stream;
    QVBoxLayout *verticalLayout_28;
    ToolsWidget *widgetHex_Net_Metadata_Stream;
    QWidget *page_Net_Metadata_Table;
    QVBoxLayout *verticalLayout_66;
    QSplitter *splitter_22;
    XTableView *tableView_Net_Metadata_Table;
    ToolsWidget *widgetHex_Net_Metadata_Table;
    QWidget *page_Certificate;
    QVBoxLayout *verticalLayout_37;
    QSplitter *splitter_20;
    QWidget *layoutWidget_18;
    QVBoxLayout *verticalLayout_36;
    QWidget *widgetCertificateCheck;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonCertificateCheck;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSave_Certificate;
    QTreeView *treeView_Certificate;
    ToolsWidget *widgetHex_Certificate;
    QWidget *page_Overlay;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButtonDump_Overlay;
    ToolsWidget *widgetHex_Overlay;

    void setupUi(QWidget *PEWidget)
    {
        if (PEWidget->objectName().isEmpty())
            PEWidget->setObjectName("PEWidget");
        PEWidget->setWindowModality(Qt::ApplicationModal);
        PEWidget->resize(1032, 493);
        PEWidget->setWindowTitle(QString::fromUtf8("PE"));
        verticalLayout_42 = new QVBoxLayout(PEWidget);
        verticalLayout_42->setObjectName("verticalLayout_42");
        verticalLayout_42->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        toolButtonReload = new QToolButton(PEWidget);
        toolButtonReload->setObjectName("toolButtonReload");

        horizontalLayout->addWidget(toolButtonReload);

        toolButtonPrev = new QToolButton(PEWidget);
        toolButtonPrev->setObjectName("toolButtonPrev");
        toolButtonPrev->setText(QString::fromUtf8("<"));

        horizontalLayout->addWidget(toolButtonPrev);

        toolButtonNext = new QToolButton(PEWidget);
        toolButtonNext->setObjectName("toolButtonNext");
        toolButtonNext->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(toolButtonNext);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(PEWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout_42->addLayout(horizontalLayout);

        splitter = new QSplitter(PEWidget);
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
        verticalLayout_43 = new QVBoxLayout(page_Info);
        verticalLayout_43->setObjectName("verticalLayout_43");
        verticalLayout_43->setContentsMargins(0, 0, 0, 0);
        widgetInfo = new XFileInfoWidget(page_Info);
        widgetInfo->setObjectName("widgetInfo");

        verticalLayout_43->addWidget(widgetInfo);

        stackedWidgetInfo->addWidget(page_Info);
        page_Visualization = new QWidget();
        page_Visualization->setObjectName("page_Visualization");
        verticalLayout_64 = new QVBoxLayout(page_Visualization);
        verticalLayout_64->setObjectName("verticalLayout_64");
        verticalLayout_64->setContentsMargins(0, 0, 0, 0);
        widgetVisualization = new XVisualizationWidget(page_Visualization);
        widgetVisualization->setObjectName("widgetVisualization");

        verticalLayout_64->addWidget(widgetVisualization);

        stackedWidgetInfo->addWidget(page_Visualization);
        page_VirusTotal = new QWidget();
        page_VirusTotal->setObjectName("page_VirusTotal");
        verticalLayout_440 = new QVBoxLayout(page_VirusTotal);
        verticalLayout_440->setObjectName("verticalLayout_440");
        verticalLayout_440->setContentsMargins(0, 0, 0, 0);
        widgetVirusTotal = new XVirusTotalWidget(page_VirusTotal);
        widgetVirusTotal->setObjectName("widgetVirusTotal");

        verticalLayout_440->addWidget(widgetVirusTotal);

        stackedWidgetInfo->addWidget(page_VirusTotal);
        page_HEX = new QWidget();
        page_HEX->setObjectName("page_HEX");
        verticalLayout_13 = new QVBoxLayout(page_HEX);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        widgetHex = new XHexViewWidget(page_HEX);
        widgetHex->setObjectName("widgetHex");

        verticalLayout_13->addWidget(widgetHex);

        stackedWidgetInfo->addWidget(page_HEX);
        page_Disasm = new QWidget();
        page_Disasm->setObjectName("page_Disasm");
        verticalLayout_26 = new QVBoxLayout(page_Disasm);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        widgetDisasm = new XMultiDisasmWidget(page_Disasm);
        widgetDisasm->setObjectName("widgetDisasm");

        verticalLayout_26->addWidget(widgetDisasm);

        stackedWidgetInfo->addWidget(page_Disasm);
        page_Hash = new QWidget();
        page_Hash->setObjectName("page_Hash");
        verticalLayout_33 = new QVBoxLayout(page_Hash);
        verticalLayout_33->setObjectName("verticalLayout_33");
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        widgetHash = new XHashWidget(page_Hash);
        widgetHash->setObjectName("widgetHash");

        verticalLayout_33->addWidget(widgetHash);

        stackedWidgetInfo->addWidget(page_Hash);
        page_Strings = new QWidget();
        page_Strings->setObjectName("page_Strings");
        verticalLayout_22 = new QVBoxLayout(page_Strings);
        verticalLayout_22->setObjectName("verticalLayout_22");
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        widgetStrings = new SearchStringsWidget(page_Strings);
        widgetStrings->setObjectName("widgetStrings");

        verticalLayout_22->addWidget(widgetStrings);

        stackedWidgetInfo->addWidget(page_Strings);
        page_Signatures = new QWidget();
        page_Signatures->setObjectName("page_Signatures");
        verticalLayout_32 = new QVBoxLayout(page_Signatures);
        verticalLayout_32->setObjectName("verticalLayout_32");
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        widgetSignatures = new SearchSignaturesWidget(page_Signatures);
        widgetSignatures->setObjectName("widgetSignatures");

        verticalLayout_32->addWidget(widgetSignatures);

        stackedWidgetInfo->addWidget(page_Signatures);
        page_MemoryMap = new QWidget();
        page_MemoryMap->setObjectName("page_MemoryMap");
        verticalLayout_23 = new QVBoxLayout(page_MemoryMap);
        verticalLayout_23->setObjectName("verticalLayout_23");
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        widgetMemoryMap = new XMemoryMapWidget(page_MemoryMap);
        widgetMemoryMap->setObjectName("widgetMemoryMap");

        verticalLayout_23->addWidget(widgetMemoryMap);

        stackedWidgetInfo->addWidget(page_MemoryMap);
        page_Entropy = new QWidget();
        page_Entropy->setObjectName("page_Entropy");
        verticalLayout_24 = new QVBoxLayout(page_Entropy);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        widgetEntropy = new XEntropyWidget(page_Entropy);
        widgetEntropy->setObjectName("widgetEntropy");

        verticalLayout_24->addWidget(widgetEntropy);

        stackedWidgetInfo->addWidget(page_Entropy);
        page_HeuristicScan = new QWidget();
        page_HeuristicScan->setObjectName("page_HeuristicScan");
        verticalLayout_25 = new QVBoxLayout(page_HeuristicScan);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        widgetHeuristicScan = new NFDWidgetAdvanced(page_HeuristicScan);
        widgetHeuristicScan->setObjectName("widgetHeuristicScan");

        verticalLayout_25->addWidget(widgetHeuristicScan);

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
        page_Tools = new QWidget();
        page_Tools->setObjectName("page_Tools");
        verticalLayout_27XX = new QVBoxLayout(page_Tools);
        verticalLayout_27XX->setObjectName("verticalLayout_27XX");
        verticalLayout_27XX->setContentsMargins(0, 0, 0, 0);
        widgetTools = new PEToolsWidget(page_Tools);
        widgetTools->setObjectName("widgetTools");

        verticalLayout_27XX->addWidget(widgetTools);

        stackedWidgetInfo->addWidget(page_Tools);
        page_IMAGE_DOS_HEADER = new QWidget();
        page_IMAGE_DOS_HEADER->setObjectName("page_IMAGE_DOS_HEADER");
        verticalLayout_3 = new QVBoxLayout(page_IMAGE_DOS_HEADER);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);

        pushButtonSave_IMAGE_DOS_HEADER = new QPushButton(page_IMAGE_DOS_HEADER);
        pushButtonSave_IMAGE_DOS_HEADER->setObjectName("pushButtonSave_IMAGE_DOS_HEADER");

        horizontalLayout_13->addWidget(pushButtonSave_IMAGE_DOS_HEADER);


        verticalLayout_3->addLayout(horizontalLayout_13);

        splitter_3 = new QSplitter(page_IMAGE_DOS_HEADER);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Vertical);
        tableWidget_IMAGE_DOS_HEADER = new QTableWidget(splitter_3);
        tableWidget_IMAGE_DOS_HEADER->setObjectName("tableWidget_IMAGE_DOS_HEADER");
        tableWidget_IMAGE_DOS_HEADER->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_IMAGE_DOS_HEADER->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_IMAGE_DOS_HEADER->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_3->addWidget(tableWidget_IMAGE_DOS_HEADER);
        tableWidget_IMAGE_DOS_HEADER->horizontalHeader()->setVisible(false);
        tableWidget_IMAGE_DOS_HEADER->verticalHeader()->setVisible(false);
        tableWidget_IMAGE_DOS_HEADER->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_IMAGE_DOS_HEADER = new ToolsWidget(splitter_3);
        widgetHex_IMAGE_DOS_HEADER->setObjectName("widgetHex_IMAGE_DOS_HEADER");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetHex_IMAGE_DOS_HEADER->sizePolicy().hasHeightForWidth());
        widgetHex_IMAGE_DOS_HEADER->setSizePolicy(sizePolicy1);
        splitter_3->addWidget(widgetHex_IMAGE_DOS_HEADER);

        verticalLayout_3->addWidget(splitter_3);

        stackedWidgetInfo->addWidget(page_IMAGE_DOS_HEADER);
        page_DosStub = new QWidget();
        page_DosStub->setObjectName("page_DosStub");
        verticalLayout_45 = new QVBoxLayout(page_DosStub);
        verticalLayout_45->setObjectName("verticalLayout_45");
        verticalLayout_45->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        pushButtonDump_DosStub = new QPushButton(page_DosStub);
        pushButtonDump_DosStub->setObjectName("pushButtonDump_DosStub");

        horizontalLayout_12->addWidget(pushButtonDump_DosStub);


        verticalLayout_45->addLayout(horizontalLayout_12);

        splitter_14 = new QSplitter(page_DosStub);
        splitter_14->setObjectName("splitter_14");
        splitter_14->setOrientation(Qt::Vertical);
        widgetDisasm_DosStub = new XDisasmView(splitter_14);
        widgetDisasm_DosStub->setObjectName("widgetDisasm_DosStub");
        splitter_14->addWidget(widgetDisasm_DosStub);
        widgetHex_DosStub = new ToolsWidget(splitter_14);
        widgetHex_DosStub->setObjectName("widgetHex_DosStub");
        splitter_14->addWidget(widgetHex_DosStub);

        verticalLayout_45->addWidget(splitter_14);

        stackedWidgetInfo->addWidget(page_DosStub);
        page_IMAGE_NT_HEADERS = new QWidget();
        page_IMAGE_NT_HEADERS->setObjectName("page_IMAGE_NT_HEADERS");
        verticalLayout_48 = new QVBoxLayout(page_IMAGE_NT_HEADERS);
        verticalLayout_48->setObjectName("verticalLayout_48");
        verticalLayout_48->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(page_IMAGE_NT_HEADERS);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter_4);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_15);

        pushButtonSave_IMAGE_NT_HEADERS = new QPushButton(layoutWidget);
        pushButtonSave_IMAGE_NT_HEADERS->setObjectName("pushButtonSave_IMAGE_NT_HEADERS");

        horizontalLayout_15->addWidget(pushButtonSave_IMAGE_NT_HEADERS);


        verticalLayout_4->addLayout(horizontalLayout_15);

        tableWidget_IMAGE_NT_HEADERS = new QTableWidget(layoutWidget);
        tableWidget_IMAGE_NT_HEADERS->setObjectName("tableWidget_IMAGE_NT_HEADERS");
        tableWidget_IMAGE_NT_HEADERS->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_IMAGE_NT_HEADERS->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_IMAGE_NT_HEADERS->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_IMAGE_NT_HEADERS->horizontalHeader()->setVisible(false);
        tableWidget_IMAGE_NT_HEADERS->verticalHeader()->setVisible(false);
        tableWidget_IMAGE_NT_HEADERS->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_4->addWidget(tableWidget_IMAGE_NT_HEADERS);

        splitter_4->addWidget(layoutWidget);
        widgetHex_IMAGE_NT_HEADERS = new ToolsWidget(splitter_4);
        widgetHex_IMAGE_NT_HEADERS->setObjectName("widgetHex_IMAGE_NT_HEADERS");
        splitter_4->addWidget(widgetHex_IMAGE_NT_HEADERS);

        verticalLayout_48->addWidget(splitter_4);

        stackedWidgetInfo->addWidget(page_IMAGE_NT_HEADERS);
        page_IMAGE_FILE_HEADER = new QWidget();
        page_IMAGE_FILE_HEADER->setObjectName("page_IMAGE_FILE_HEADER");
        verticalLayout_49 = new QVBoxLayout(page_IMAGE_FILE_HEADER);
        verticalLayout_49->setObjectName("verticalLayout_49");
        verticalLayout_49->setContentsMargins(0, 0, 0, 0);
        splitter_5 = new QSplitter(page_IMAGE_FILE_HEADER);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setOrientation(Qt::Vertical);
        layoutWidget_2 = new QWidget(splitter_5);
        layoutWidget_2->setObjectName("layoutWidget_2");
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_16);

        pushButtonSave_IMAGE_FILE_HEADER = new QPushButton(layoutWidget_2);
        pushButtonSave_IMAGE_FILE_HEADER->setObjectName("pushButtonSave_IMAGE_FILE_HEADER");

        horizontalLayout_16->addWidget(pushButtonSave_IMAGE_FILE_HEADER);


        verticalLayout_2->addLayout(horizontalLayout_16);

        tableWidget_IMAGE_FILE_HEADER = new QTableWidget(layoutWidget_2);
        tableWidget_IMAGE_FILE_HEADER->setObjectName("tableWidget_IMAGE_FILE_HEADER");
        tableWidget_IMAGE_FILE_HEADER->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_IMAGE_FILE_HEADER->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_IMAGE_FILE_HEADER->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_IMAGE_FILE_HEADER->horizontalHeader()->setVisible(false);
        tableWidget_IMAGE_FILE_HEADER->verticalHeader()->setVisible(false);
        tableWidget_IMAGE_FILE_HEADER->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_2->addWidget(tableWidget_IMAGE_FILE_HEADER);

        splitter_5->addWidget(layoutWidget_2);
        widgetHex_IMAGE_FILE_HEADER = new ToolsWidget(splitter_5);
        widgetHex_IMAGE_FILE_HEADER->setObjectName("widgetHex_IMAGE_FILE_HEADER");
        splitter_5->addWidget(widgetHex_IMAGE_FILE_HEADER);

        verticalLayout_49->addWidget(splitter_5);

        stackedWidgetInfo->addWidget(page_IMAGE_FILE_HEADER);
        page_IMAGE_OPTIONAL_HEADER = new QWidget();
        page_IMAGE_OPTIONAL_HEADER->setObjectName("page_IMAGE_OPTIONAL_HEADER");
        verticalLayout_47 = new QVBoxLayout(page_IMAGE_OPTIONAL_HEADER);
        verticalLayout_47->setObjectName("verticalLayout_47");
        verticalLayout_47->setContentsMargins(0, 0, 0, 0);
        splitter_6 = new QSplitter(page_IMAGE_OPTIONAL_HEADER);
        splitter_6->setObjectName("splitter_6");
        splitter_6->setOrientation(Qt::Vertical);
        layoutWidget_3 = new QWidget(splitter_6);
        layoutWidget_3->setObjectName("layoutWidget_3");
        verticalLayout_5 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);

        pushButtonSave_IMAGE_OPTIONAL_HEADER = new QPushButton(layoutWidget_3);
        pushButtonSave_IMAGE_OPTIONAL_HEADER->setObjectName("pushButtonSave_IMAGE_OPTIONAL_HEADER");

        horizontalLayout_14->addWidget(pushButtonSave_IMAGE_OPTIONAL_HEADER);


        verticalLayout_5->addLayout(horizontalLayout_14);

        tableWidget_IMAGE_OPTIONAL_HEADER = new QTableWidget(layoutWidget_3);
        tableWidget_IMAGE_OPTIONAL_HEADER->setObjectName("tableWidget_IMAGE_OPTIONAL_HEADER");
        tableWidget_IMAGE_OPTIONAL_HEADER->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_IMAGE_OPTIONAL_HEADER->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_IMAGE_OPTIONAL_HEADER->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_IMAGE_OPTIONAL_HEADER->horizontalHeader()->setVisible(false);
        tableWidget_IMAGE_OPTIONAL_HEADER->verticalHeader()->setVisible(false);
        tableWidget_IMAGE_OPTIONAL_HEADER->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_5->addWidget(tableWidget_IMAGE_OPTIONAL_HEADER);

        splitter_6->addWidget(layoutWidget_3);
        widgetHex_IMAGE_OPTIONAL_HEADER = new ToolsWidget(splitter_6);
        widgetHex_IMAGE_OPTIONAL_HEADER->setObjectName("widgetHex_IMAGE_OPTIONAL_HEADER");
        splitter_6->addWidget(widgetHex_IMAGE_OPTIONAL_HEADER);

        verticalLayout_47->addWidget(splitter_6);

        stackedWidgetInfo->addWidget(page_IMAGE_OPTIONAL_HEADER);
        page_IMAGE_DIRECTORY_ENTRIES = new QWidget();
        page_IMAGE_DIRECTORY_ENTRIES->setObjectName("page_IMAGE_DIRECTORY_ENTRIES");
        verticalLayout_6 = new QVBoxLayout(page_IMAGE_DIRECTORY_ENTRIES);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        pushButtonSave_IMAGE_DIRECTORY_ENTRIES = new QPushButton(page_IMAGE_DIRECTORY_ENTRIES);
        pushButtonSave_IMAGE_DIRECTORY_ENTRIES->setObjectName("pushButtonSave_IMAGE_DIRECTORY_ENTRIES");

        horizontalLayout_9->addWidget(pushButtonSave_IMAGE_DIRECTORY_ENTRIES);


        verticalLayout_6->addLayout(horizontalLayout_9);

        splitter_7 = new QSplitter(page_IMAGE_DIRECTORY_ENTRIES);
        splitter_7->setObjectName("splitter_7");
        splitter_7->setOrientation(Qt::Vertical);
        tableWidget_IMAGE_DIRECTORY_ENTRIES = new QTableWidget(splitter_7);
        tableWidget_IMAGE_DIRECTORY_ENTRIES->setObjectName("tableWidget_IMAGE_DIRECTORY_ENTRIES");
        tableWidget_IMAGE_DIRECTORY_ENTRIES->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_IMAGE_DIRECTORY_ENTRIES->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_IMAGE_DIRECTORY_ENTRIES->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_IMAGE_DIRECTORY_ENTRIES->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_7->addWidget(tableWidget_IMAGE_DIRECTORY_ENTRIES);
        tableWidget_IMAGE_DIRECTORY_ENTRIES->horizontalHeader()->setVisible(false);
        tableWidget_IMAGE_DIRECTORY_ENTRIES->verticalHeader()->setVisible(false);
        tableWidget_IMAGE_DIRECTORY_ENTRIES->verticalHeader()->setDefaultSectionSize(24);
        widgetHex_IMAGE_DIRECTORY_ENTRIES = new ToolsWidget(splitter_7);
        widgetHex_IMAGE_DIRECTORY_ENTRIES->setObjectName("widgetHex_IMAGE_DIRECTORY_ENTRIES");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetHex_IMAGE_DIRECTORY_ENTRIES->sizePolicy().hasHeightForWidth());
        widgetHex_IMAGE_DIRECTORY_ENTRIES->setSizePolicy(sizePolicy2);
        splitter_7->addWidget(widgetHex_IMAGE_DIRECTORY_ENTRIES);

        verticalLayout_6->addWidget(splitter_7);

        stackedWidgetInfo->addWidget(page_IMAGE_DIRECTORY_ENTRIES);
        page_RICH = new QWidget();
        page_RICH->setObjectName("page_RICH");
        verticalLayout_41 = new QVBoxLayout(page_RICH);
        verticalLayout_41->setObjectName("verticalLayout_41");
        verticalLayout_41->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_22);

        pushButtonSave_RICH = new QPushButton(page_RICH);
        pushButtonSave_RICH->setObjectName("pushButtonSave_RICH");

        horizontalLayout_22->addWidget(pushButtonSave_RICH);


        verticalLayout_41->addLayout(horizontalLayout_22);

        tableView_RICH = new XTableView(page_RICH);
        tableView_RICH->setObjectName("tableView_RICH");
        tableView_RICH->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_RICH->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_RICH->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_RICH->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_RICH->setSortingEnabled(false);
        tableView_RICH->horizontalHeader()->setDefaultSectionSize(57);
        tableView_RICH->verticalHeader()->setVisible(false);
        tableView_RICH->verticalHeader()->setMinimumSectionSize(20);
        tableView_RICH->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_41->addWidget(tableView_RICH);

        stackedWidgetInfo->addWidget(page_RICH);
        page_Sections = new QWidget();
        page_Sections->setObjectName("page_Sections");
        verticalLayout_7 = new QVBoxLayout(page_Sections);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        checkBoxSectionsStringTable = new QCheckBox(page_Sections);
        checkBoxSectionsStringTable->setObjectName("checkBoxSectionsStringTable");

        horizontalLayout_6->addWidget(checkBoxSectionsStringTable);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        pushButtonDumpAll_Sections = new QPushButton(page_Sections);
        pushButtonDumpAll_Sections->setObjectName("pushButtonDumpAll_Sections");

        horizontalLayout_6->addWidget(pushButtonDumpAll_Sections);

        pushButtonSave_Sections = new QPushButton(page_Sections);
        pushButtonSave_Sections->setObjectName("pushButtonSave_Sections");

        horizontalLayout_6->addWidget(pushButtonSave_Sections);


        verticalLayout->addLayout(horizontalLayout_6);

        tableView_Sections = new XTableView(page_Sections);
        tableView_Sections->setObjectName("tableView_Sections");
        tableView_Sections->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Sections->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Sections->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Sections->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Sections->setSortingEnabled(false);
        tableView_Sections->horizontalHeader()->setDefaultSectionSize(57);
        tableView_Sections->verticalHeader()->setVisible(false);
        tableView_Sections->verticalHeader()->setMinimumSectionSize(20);
        tableView_Sections->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(tableView_Sections);

        widgetHex_Section = new ToolsWidget(page_Sections);
        widgetHex_Section->setObjectName("widgetHex_Section");
        sizePolicy2.setHeightForWidth(widgetHex_Section->sizePolicy().hasHeightForWidth());
        widgetHex_Section->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(widgetHex_Section);


        verticalLayout_7->addLayout(verticalLayout);

        stackedWidgetInfo->addWidget(page_Sections);
        page_Sections_Info = new QWidget();
        page_Sections_Info->setObjectName("page_Sections_Info");
        verticalLayout_46 = new QVBoxLayout(page_Sections_Info);
        verticalLayout_46->setObjectName("verticalLayout_46");
        verticalLayout_46->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        pushButtonExpand_Sections_Info = new QPushButton(page_Sections_Info);
        pushButtonExpand_Sections_Info->setObjectName("pushButtonExpand_Sections_Info");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonExpand_Sections_Info->sizePolicy().hasHeightForWidth());
        pushButtonExpand_Sections_Info->setSizePolicy(sizePolicy3);
        pushButtonExpand_Sections_Info->setMaximumSize(QSize(24, 24));
        pushButtonExpand_Sections_Info->setText(QString::fromUtf8("+"));

        horizontalLayout_18->addWidget(pushButtonExpand_Sections_Info);

        pushButtonCollapse_Sections_Info = new QPushButton(page_Sections_Info);
        pushButtonCollapse_Sections_Info->setObjectName("pushButtonCollapse_Sections_Info");
        sizePolicy3.setHeightForWidth(pushButtonCollapse_Sections_Info->sizePolicy().hasHeightForWidth());
        pushButtonCollapse_Sections_Info->setSizePolicy(sizePolicy3);
        pushButtonCollapse_Sections_Info->setMaximumSize(QSize(24, 24));
        pushButtonCollapse_Sections_Info->setText(QString::fromUtf8("-"));

        horizontalLayout_18->addWidget(pushButtonCollapse_Sections_Info);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);

        pushButtonSave_Sections_Info = new QPushButton(page_Sections_Info);
        pushButtonSave_Sections_Info->setObjectName("pushButtonSave_Sections_Info");

        horizontalLayout_18->addWidget(pushButtonSave_Sections_Info);


        verticalLayout_46->addLayout(horizontalLayout_18);

        treeView_Sections_Info = new QTreeView(page_Sections_Info);
        treeView_Sections_Info->setObjectName("treeView_Sections_Info");
        treeView_Sections_Info->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView_Sections_Info->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView_Sections_Info->setSelectionMode(QAbstractItemView::SingleSelection);
        treeView_Sections_Info->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_46->addWidget(treeView_Sections_Info);

        stackedWidgetInfo->addWidget(page_Sections_Info);
        page_Export = new QWidget();
        page_Export->setObjectName("page_Export");
        verticalLayout_60 = new QVBoxLayout(page_Export);
        verticalLayout_60->setObjectName("verticalLayout_60");
        verticalLayout_60->setContentsMargins(0, 0, 0, 0);
        splitter_9 = new QSplitter(page_Export);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setOrientation(Qt::Vertical);
        layoutWidget_4 = new QWidget(splitter_9);
        layoutWidget_4->setObjectName("layoutWidget_4");
        verticalLayout_8 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_31);

        pushButtonSave_ExportHeader = new QPushButton(layoutWidget_4);
        pushButtonSave_ExportHeader->setObjectName("pushButtonSave_ExportHeader");

        horizontalLayout_3->addWidget(pushButtonSave_ExportHeader);


        verticalLayout_8->addLayout(horizontalLayout_3);

        tableWidget_ExportHeader = new QTableWidget(layoutWidget_4);
        tableWidget_ExportHeader->setObjectName("tableWidget_ExportHeader");
        tableWidget_ExportHeader->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_ExportHeader->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_ExportHeader->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_ExportHeader->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_ExportHeader->setSortingEnabled(false);
        tableWidget_ExportHeader->horizontalHeader()->setVisible(false);
        tableWidget_ExportHeader->verticalHeader()->setVisible(false);
        tableWidget_ExportHeader->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_8->addWidget(tableWidget_ExportHeader);

        splitter_9->addWidget(layoutWidget_4);
        layoutWidget_5 = new QWidget(splitter_9);
        layoutWidget_5->setObjectName("layoutWidget_5");
        verticalLayout_34 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_34->setObjectName("verticalLayout_34");
        verticalLayout_34->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        checkBoxExportShowValid = new QCheckBox(layoutWidget_5);
        checkBoxExportShowValid->setObjectName("checkBoxExportShowValid");

        horizontalLayout_31->addWidget(checkBoxExportShowValid);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_3);

        pushButtonSave_ExportFunctions = new QPushButton(layoutWidget_5);
        pushButtonSave_ExportFunctions->setObjectName("pushButtonSave_ExportFunctions");

        horizontalLayout_31->addWidget(pushButtonSave_ExportFunctions);


        verticalLayout_34->addLayout(horizontalLayout_31);

        tableView_ExportFunctions = new XTableView(layoutWidget_5);
        tableView_ExportFunctions->setObjectName("tableView_ExportFunctions");
        tableView_ExportFunctions->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_ExportFunctions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_ExportFunctions->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_ExportFunctions->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_ExportFunctions->setSortingEnabled(true);
        tableView_ExportFunctions->horizontalHeader()->setDefaultSectionSize(57);
        tableView_ExportFunctions->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableView_ExportFunctions->horizontalHeader()->setStretchLastSection(true);
        tableView_ExportFunctions->verticalHeader()->setVisible(false);
        tableView_ExportFunctions->verticalHeader()->setMinimumSectionSize(20);
        tableView_ExportFunctions->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_34->addWidget(tableView_ExportFunctions);

        splitter_9->addWidget(layoutWidget_5);

        verticalLayout_60->addWidget(splitter_9);

        stackedWidgetInfo->addWidget(page_Export);
        page_Import = new QWidget();
        page_Import->setObjectName("page_Import");
        verticalLayout_52 = new QVBoxLayout(page_Import);
        verticalLayout_52->setObjectName("verticalLayout_52");
        verticalLayout_52->setContentsMargins(0, 0, 0, 0);
        splitter_10 = new QSplitter(page_Import);
        splitter_10->setObjectName("splitter_10");
        splitter_10->setOrientation(Qt::Vertical);
        layoutWidget_6 = new QWidget(splitter_10);
        layoutWidget_6->setObjectName("layoutWidget_6");
        verticalLayout_30 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_30->setObjectName("verticalLayout_30");
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBoxHash64 = new QGroupBox(layoutWidget_6);
        groupBoxHash64->setObjectName("groupBoxHash64");
        groupBoxHash64->setMaximumSize(QSize(150, 16777215));
        groupBoxHash64->setTitle(QString::fromUtf8("Hash 64"));
        verticalLayout_9 = new QVBoxLayout(groupBoxHash64);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        lineEditHash64 = new XLineEditHEX(groupBoxHash64);
        lineEditHash64->setObjectName("lineEditHash64");
        lineEditHash64->setAlignment(Qt::AlignCenter);
        lineEditHash64->setReadOnly(true);

        verticalLayout_9->addWidget(lineEditHash64);


        horizontalLayout_2->addWidget(groupBoxHash64);

        groupBoxHash32 = new QGroupBox(layoutWidget_6);
        groupBoxHash32->setObjectName("groupBoxHash32");
        groupBoxHash32->setMaximumSize(QSize(120, 16777215));
        groupBoxHash32->setTitle(QString::fromUtf8("Hash 32"));
        verticalLayout_29 = new QVBoxLayout(groupBoxHash32);
        verticalLayout_29->setObjectName("verticalLayout_29");
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        lineEditHash32 = new XLineEditHEX(groupBoxHash32);
        lineEditHash32->setObjectName("lineEditHash32");
        lineEditHash32->setAlignment(Qt::AlignCenter);
        lineEditHash32->setReadOnly(true);

        verticalLayout_29->addWidget(lineEditHash32);


        horizontalLayout_2->addWidget(groupBoxHash32);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonSave_ImportLibraries = new QPushButton(layoutWidget_6);
        pushButtonSave_ImportLibraries->setObjectName("pushButtonSave_ImportLibraries");

        horizontalLayout_2->addWidget(pushButtonSave_ImportLibraries);


        verticalLayout_30->addLayout(horizontalLayout_2);

        tableView_ImportLibraries = new XTableView(layoutWidget_6);
        tableView_ImportLibraries->setObjectName("tableView_ImportLibraries");
        tableView_ImportLibraries->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_ImportLibraries->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_ImportLibraries->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_ImportLibraries->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_ImportLibraries->horizontalHeader()->setDefaultSectionSize(57);
        tableView_ImportLibraries->verticalHeader()->setVisible(false);
        tableView_ImportLibraries->verticalHeader()->setMinimumSectionSize(20);
        tableView_ImportLibraries->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_30->addWidget(tableView_ImportLibraries);

        splitter_10->addWidget(layoutWidget_6);
        layoutWidget_7 = new QWidget(splitter_10);
        layoutWidget_7->setObjectName("layoutWidget_7");
        verticalLayout_35 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_35->setObjectName("verticalLayout_35");
        verticalLayout_35->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_21);

        pushButtonSave_ImportFunctions = new QPushButton(layoutWidget_7);
        pushButtonSave_ImportFunctions->setObjectName("pushButtonSave_ImportFunctions");

        horizontalLayout_21->addWidget(pushButtonSave_ImportFunctions);


        verticalLayout_35->addLayout(horizontalLayout_21);

        tableView_ImportFunctions = new XTableView(layoutWidget_7);
        tableView_ImportFunctions->setObjectName("tableView_ImportFunctions");
        tableView_ImportFunctions->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_ImportFunctions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_ImportFunctions->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_ImportFunctions->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_ImportFunctions->horizontalHeader()->setDefaultSectionSize(57);
        tableView_ImportFunctions->verticalHeader()->setVisible(false);
        tableView_ImportFunctions->verticalHeader()->setMinimumSectionSize(20);
        tableView_ImportFunctions->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_35->addWidget(tableView_ImportFunctions);

        splitter_10->addWidget(layoutWidget_7);

        verticalLayout_52->addWidget(splitter_10);

        stackedWidgetInfo->addWidget(page_Import);
        page_Import_info = new QWidget();
        page_Import_info->setObjectName("page_Import_info");
        verticalLayout_65 = new QVBoxLayout(page_Import_info);
        verticalLayout_65->setObjectName("verticalLayout_65");
        verticalLayout_65->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName("horizontalLayout_34");
        pushButtonExpand_Import_Info = new QPushButton(page_Import_info);
        pushButtonExpand_Import_Info->setObjectName("pushButtonExpand_Import_Info");
        sizePolicy3.setHeightForWidth(pushButtonExpand_Import_Info->sizePolicy().hasHeightForWidth());
        pushButtonExpand_Import_Info->setSizePolicy(sizePolicy3);
        pushButtonExpand_Import_Info->setMaximumSize(QSize(24, 24));
        pushButtonExpand_Import_Info->setText(QString::fromUtf8("+"));

        horizontalLayout_34->addWidget(pushButtonExpand_Import_Info);

        pushButtonCollapse_Import_Info = new QPushButton(page_Import_info);
        pushButtonCollapse_Import_Info->setObjectName("pushButtonCollapse_Import_Info");
        sizePolicy3.setHeightForWidth(pushButtonCollapse_Import_Info->sizePolicy().hasHeightForWidth());
        pushButtonCollapse_Import_Info->setSizePolicy(sizePolicy3);
        pushButtonCollapse_Import_Info->setMaximumSize(QSize(24, 24));
        pushButtonCollapse_Import_Info->setText(QString::fromUtf8("-"));

        horizontalLayout_34->addWidget(pushButtonCollapse_Import_Info);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_34);

        pushButtonSave_Import_Info = new QPushButton(page_Import_info);
        pushButtonSave_Import_Info->setObjectName("pushButtonSave_Import_Info");

        horizontalLayout_34->addWidget(pushButtonSave_Import_Info);


        verticalLayout_65->addLayout(horizontalLayout_34);

        treeView_Import_Info = new QTreeView(page_Import_info);
        treeView_Import_Info->setObjectName("treeView_Import_Info");
        treeView_Import_Info->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView_Import_Info->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView_Import_Info->setSelectionMode(QAbstractItemView::SingleSelection);
        treeView_Import_Info->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_65->addWidget(treeView_Import_Info);

        stackedWidgetInfo->addWidget(page_Import_info);
        page_Resources = new QWidget();
        page_Resources->setObjectName("page_Resources");
        verticalLayout_39 = new QVBoxLayout(page_Resources);
        verticalLayout_39->setObjectName("verticalLayout_39");
        verticalLayout_39->setContentsMargins(0, 0, 0, 0);
        splitter_11 = new QSplitter(page_Resources);
        splitter_11->setObjectName("splitter_11");
        splitter_11->setOrientation(Qt::Vertical);
        tabWidgetResources = new QTabWidget(splitter_11);
        tabWidgetResources->setObjectName("tabWidgetResources");
        tabTable = new QWidget();
        tabTable->setObjectName("tabTable");
        verticalLayout_40 = new QVBoxLayout(tabTable);
        verticalLayout_40->setObjectName("verticalLayout_40");
        verticalLayout_40->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        pushButtonExtractAllIcons_Resources = new QPushButton(tabTable);
        pushButtonExtractAllIcons_Resources->setObjectName("pushButtonExtractAllIcons_Resources");

        horizontalLayout_10->addWidget(pushButtonExtractAllIcons_Resources);

        pushButtonExtractAllCursors_Resources = new QPushButton(tabTable);
        pushButtonExtractAllCursors_Resources->setObjectName("pushButtonExtractAllCursors_Resources");

        horizontalLayout_10->addWidget(pushButtonExtractAllCursors_Resources);

        pushButtonDumpAll_Resources = new QPushButton(tabTable);
        pushButtonDumpAll_Resources->setObjectName("pushButtonDumpAll_Resources");

        horizontalLayout_10->addWidget(pushButtonDumpAll_Resources);

        pushButtonSave_Resources = new QPushButton(tabTable);
        pushButtonSave_Resources->setObjectName("pushButtonSave_Resources");

        horizontalLayout_10->addWidget(pushButtonSave_Resources);


        verticalLayout_40->addLayout(horizontalLayout_10);

        tableView_Resources = new XTableView(tabTable);
        tableView_Resources->setObjectName("tableView_Resources");
        tableView_Resources->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Resources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Resources->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Resources->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Resources->horizontalHeader()->setDefaultSectionSize(57);
        tableView_Resources->verticalHeader()->setVisible(false);
        tableView_Resources->verticalHeader()->setMinimumSectionSize(20);
        tableView_Resources->verticalHeader()->setDefaultSectionSize(20);
        tableView_Resources->verticalHeader()->setHighlightSections(false);

        verticalLayout_40->addWidget(tableView_Resources);

        tabWidgetResources->addTab(tabTable, QString());
        tabTree = new QWidget();
        tabTree->setObjectName("tabTree");
        verticalLayout_12 = new QVBoxLayout(tabTree);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(tabTree);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        treeView_Resources = new QTreeView(splitter_2);
        treeView_Resources->setObjectName("treeView_Resources");
        treeView_Resources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        splitter_2->addWidget(treeView_Resources);
        treeView_Resources->header()->setVisible(false);
        treeView_Resources->header()->setDefaultSectionSize(57);
        tableWidget_Resources = new QTableWidget(splitter_2);
        tableWidget_Resources->setObjectName("tableWidget_Resources");
        tableWidget_Resources->setMaximumSize(QSize(300, 16777215));
        tableWidget_Resources->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_Resources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Resources->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Resources->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_Resources->setSortingEnabled(true);
        splitter_2->addWidget(tableWidget_Resources);
        tableWidget_Resources->horizontalHeader()->setVisible(false);
        tableWidget_Resources->horizontalHeader()->setHighlightSections(true);
        tableWidget_Resources->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_Resources->verticalHeader()->setVisible(false);
        tableWidget_Resources->verticalHeader()->setMinimumSectionSize(20);
        tableWidget_Resources->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_12->addWidget(splitter_2);

        tabWidgetResources->addTab(tabTree, QString());
        splitter_11->addWidget(tabWidgetResources);
        widgetHex_Resources = new ToolsWidget(splitter_11);
        widgetHex_Resources->setObjectName("widgetHex_Resources");
        sizePolicy2.setHeightForWidth(widgetHex_Resources->sizePolicy().hasHeightForWidth());
        widgetHex_Resources->setSizePolicy(sizePolicy2);
        splitter_11->addWidget(widgetHex_Resources);

        verticalLayout_39->addWidget(splitter_11);

        stackedWidgetInfo->addWidget(page_Resources);
        page_Resources_StringTable = new QWidget();
        page_Resources_StringTable->setObjectName("page_Resources_StringTable");
        verticalLayout_59 = new QVBoxLayout(page_Resources_StringTable);
        verticalLayout_59->setObjectName("verticalLayout_59");
        verticalLayout_59->setContentsMargins(0, 0, 0, 0);
        verticalLayout_44 = new QVBoxLayout();
        verticalLayout_44->setObjectName("verticalLayout_44");
        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_30);

        pushButtonSave_Resources_StringTable = new QPushButton(page_Resources_StringTable);
        pushButtonSave_Resources_StringTable->setObjectName("pushButtonSave_Resources_StringTable");

        horizontalLayout_30->addWidget(pushButtonSave_Resources_StringTable);


        verticalLayout_44->addLayout(horizontalLayout_30);

        tableView_Resources_StringTable = new XTableView(page_Resources_StringTable);
        tableView_Resources_StringTable->setObjectName("tableView_Resources_StringTable");
        tableView_Resources_StringTable->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Resources_StringTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Resources_StringTable->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Resources_StringTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Resources_StringTable->horizontalHeader()->setDefaultSectionSize(57);
        tableView_Resources_StringTable->verticalHeader()->setVisible(false);
        tableView_Resources_StringTable->verticalHeader()->setMinimumSectionSize(20);
        tableView_Resources_StringTable->verticalHeader()->setDefaultSectionSize(20);
        tableView_Resources_StringTable->verticalHeader()->setHighlightSections(false);

        verticalLayout_44->addWidget(tableView_Resources_StringTable);


        verticalLayout_59->addLayout(verticalLayout_44);

        stackedWidgetInfo->addWidget(page_Resources_StringTable);
        page_Resources_Version = new QWidget();
        page_Resources_Version->setObjectName("page_Resources_Version");
        verticalLayout_58 = new QVBoxLayout(page_Resources_Version);
        verticalLayout_58->setObjectName("verticalLayout_58");
        verticalLayout_58->setContentsMargins(0, 0, 0, 0);
        splitter_21 = new QSplitter(page_Resources_Version);
        splitter_21->setObjectName("splitter_21");
        splitter_21->setOrientation(Qt::Vertical);
        layoutWidget_8 = new QWidget(splitter_21);
        layoutWidget_8->setObjectName("layoutWidget_8");
        verticalLayout_21 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_28);

        pushButtonSave_Resources_Version_Header = new QPushButton(layoutWidget_8);
        pushButtonSave_Resources_Version_Header->setObjectName("pushButtonSave_Resources_Version_Header");

        horizontalLayout_28->addWidget(pushButtonSave_Resources_Version_Header);


        verticalLayout_21->addLayout(horizontalLayout_28);

        tableWidget_Resources_Version = new QTableWidget(layoutWidget_8);
        tableWidget_Resources_Version->setObjectName("tableWidget_Resources_Version");
        tableWidget_Resources_Version->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Resources_Version->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Resources_Version->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_Resources_Version->horizontalHeader()->setVisible(false);
        tableWidget_Resources_Version->verticalHeader()->setVisible(false);
        tableWidget_Resources_Version->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_21->addWidget(tableWidget_Resources_Version);

        splitter_21->addWidget(layoutWidget_8);
        layoutWidget_9 = new QWidget(splitter_21);
        layoutWidget_9->setObjectName("layoutWidget_9");
        verticalLayout_57 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_57->setObjectName("verticalLayout_57");
        verticalLayout_57->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_29);

        pushButtonSave_Resources_Version = new QPushButton(layoutWidget_9);
        pushButtonSave_Resources_Version->setObjectName("pushButtonSave_Resources_Version");

        horizontalLayout_29->addWidget(pushButtonSave_Resources_Version);


        verticalLayout_57->addLayout(horizontalLayout_29);

        textEditResources_Version = new QTextEdit(layoutWidget_9);
        textEditResources_Version->setObjectName("textEditResources_Version");
        textEditResources_Version->setReadOnly(true);

        verticalLayout_57->addWidget(textEditResources_Version);

        splitter_21->addWidget(layoutWidget_9);

        verticalLayout_58->addWidget(splitter_21);

        stackedWidgetInfo->addWidget(page_Resources_Version);
        page_Resources_Manifest = new QWidget();
        page_Resources_Manifest->setObjectName("page_Resources_Manifest");
        verticalLayout_19 = new QVBoxLayout(page_Resources_Manifest);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        checkBox_ManifestFormat = new QCheckBox(page_Resources_Manifest);
        checkBox_ManifestFormat->setObjectName("checkBox_ManifestFormat");

        horizontalLayout_5->addWidget(checkBox_ManifestFormat);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        pushButtonSave_Manifest = new QPushButton(page_Resources_Manifest);
        pushButtonSave_Manifest->setObjectName("pushButtonSave_Manifest");

        horizontalLayout_5->addWidget(pushButtonSave_Manifest);


        verticalLayout_19->addLayout(horizontalLayout_5);

        textEditResources_Manifest = new QTextEdit(page_Resources_Manifest);
        textEditResources_Manifest->setObjectName("textEditResources_Manifest");
        textEditResources_Manifest->setReadOnly(true);

        verticalLayout_19->addWidget(textEditResources_Manifest);

        stackedWidgetInfo->addWidget(page_Resources_Manifest);
        page_Exception = new QWidget();
        page_Exception->setObjectName("page_Exception");
        verticalLayout_16 = new QVBoxLayout(page_Exception);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        pushButtonSave_Exception = new QPushButton(page_Exception);
        pushButtonSave_Exception->setObjectName("pushButtonSave_Exception");

        horizontalLayout_8->addWidget(pushButtonSave_Exception);


        verticalLayout_16->addLayout(horizontalLayout_8);

        splitter_12 = new QSplitter(page_Exception);
        splitter_12->setObjectName("splitter_12");
        splitter_12->setOrientation(Qt::Vertical);
        tableView_Exceptions = new XTableView(splitter_12);
        tableView_Exceptions->setObjectName("tableView_Exceptions");
        tableView_Exceptions->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Exceptions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Exceptions->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Exceptions->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_12->addWidget(tableView_Exceptions);
        tableView_Exceptions->horizontalHeader()->setDefaultSectionSize(57);
        tableView_Exceptions->verticalHeader()->setVisible(false);
        tableView_Exceptions->verticalHeader()->setMinimumSectionSize(20);
        tableView_Exceptions->verticalHeader()->setDefaultSectionSize(20);
        tableView_Exceptions->verticalHeader()->setHighlightSections(false);
        widgetHex_Exception = new ToolsWidget(splitter_12);
        widgetHex_Exception->setObjectName("widgetHex_Exception");
        sizePolicy2.setHeightForWidth(widgetHex_Exception->sizePolicy().hasHeightForWidth());
        widgetHex_Exception->setSizePolicy(sizePolicy2);
        splitter_12->addWidget(widgetHex_Exception);

        verticalLayout_16->addWidget(splitter_12);

        stackedWidgetInfo->addWidget(page_Exception);
        page_Relocs = new QWidget();
        page_Relocs->setObjectName("page_Relocs");
        verticalLayout_54 = new QVBoxLayout(page_Relocs);
        verticalLayout_54->setObjectName("verticalLayout_54");
        verticalLayout_54->setContentsMargins(0, 0, 0, 0);
        splitter_13 = new QSplitter(page_Relocs);
        splitter_13->setObjectName("splitter_13");
        splitter_13->setOrientation(Qt::Vertical);
        layoutWidget_10 = new QWidget(splitter_13);
        layoutWidget_10->setObjectName("layoutWidget_10");
        verticalLayout_10 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_23);

        pushButtonSave_Relocs = new QPushButton(layoutWidget_10);
        pushButtonSave_Relocs->setObjectName("pushButtonSave_Relocs");

        horizontalLayout_23->addWidget(pushButtonSave_Relocs);


        verticalLayout_10->addLayout(horizontalLayout_23);

        tableView_Relocs = new XTableView(layoutWidget_10);
        tableView_Relocs->setObjectName("tableView_Relocs");
        tableView_Relocs->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Relocs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Relocs->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Relocs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Relocs->horizontalHeader()->setDefaultSectionSize(57);
        tableView_Relocs->verticalHeader()->setVisible(false);
        tableView_Relocs->verticalHeader()->setMinimumSectionSize(20);
        tableView_Relocs->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_10->addWidget(tableView_Relocs);

        splitter_13->addWidget(layoutWidget_10);
        layoutWidget_11 = new QWidget(splitter_13);
        layoutWidget_11->setObjectName("layoutWidget_11");
        verticalLayout_53 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_53->setObjectName("verticalLayout_53");
        verticalLayout_53->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_24);

        pushButtonSave_RelocsPositions = new QPushButton(layoutWidget_11);
        pushButtonSave_RelocsPositions->setObjectName("pushButtonSave_RelocsPositions");

        horizontalLayout_24->addWidget(pushButtonSave_RelocsPositions);


        verticalLayout_53->addLayout(horizontalLayout_24);

        tableView_RelocsPositions = new XTableView(layoutWidget_11);
        tableView_RelocsPositions->setObjectName("tableView_RelocsPositions");
        tableView_RelocsPositions->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_RelocsPositions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_RelocsPositions->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_RelocsPositions->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_RelocsPositions->horizontalHeader()->setDefaultSectionSize(57);
        tableView_RelocsPositions->verticalHeader()->setVisible(false);
        tableView_RelocsPositions->verticalHeader()->setMinimumSectionSize(20);
        tableView_RelocsPositions->verticalHeader()->setDefaultSectionSize(20);
        tableView_RelocsPositions->verticalHeader()->setHighlightSections(true);

        verticalLayout_53->addWidget(tableView_RelocsPositions);

        splitter_13->addWidget(layoutWidget_11);

        verticalLayout_54->addWidget(splitter_13);

        stackedWidgetInfo->addWidget(page_Relocs);
        page_Debug = new QWidget();
        page_Debug->setObjectName("page_Debug");
        verticalLayout_17 = new QVBoxLayout(page_Debug);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        pushButtonSave_Debug = new QPushButton(page_Debug);
        pushButtonSave_Debug->setObjectName("pushButtonSave_Debug");

        horizontalLayout_7->addWidget(pushButtonSave_Debug);


        verticalLayout_17->addLayout(horizontalLayout_7);

        splitter_8 = new QSplitter(page_Debug);
        splitter_8->setObjectName("splitter_8");
        splitter_8->setOrientation(Qt::Vertical);
        tableView_Debug = new XTableView(splitter_8);
        tableView_Debug->setObjectName("tableView_Debug");
        tableView_Debug->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Debug->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Debug->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Debug->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_8->addWidget(tableView_Debug);
        tableView_Debug->horizontalHeader()->setDefaultSectionSize(57);
        tableView_Debug->verticalHeader()->setVisible(false);
        tableView_Debug->verticalHeader()->setMinimumSectionSize(20);
        tableView_Debug->verticalHeader()->setDefaultSectionSize(20);
        tableView_Debug->verticalHeader()->setHighlightSections(false);
        widgetHex_Debug = new ToolsWidget(splitter_8);
        widgetHex_Debug->setObjectName("widgetHex_Debug");
        sizePolicy2.setHeightForWidth(widgetHex_Debug->sizePolicy().hasHeightForWidth());
        widgetHex_Debug->setSizePolicy(sizePolicy2);
        splitter_8->addWidget(widgetHex_Debug);

        verticalLayout_17->addWidget(splitter_8);

        stackedWidgetInfo->addWidget(page_Debug);
        page_TLS = new QWidget();
        page_TLS->setObjectName("page_TLS");
        verticalLayout_56 = new QVBoxLayout(page_TLS);
        verticalLayout_56->setObjectName("verticalLayout_56");
        verticalLayout_56->setContentsMargins(0, 0, 0, 0);
        splitter_15 = new QSplitter(page_TLS);
        splitter_15->setObjectName("splitter_15");
        splitter_15->setOrientation(Qt::Vertical);
        layoutWidget_12 = new QWidget(splitter_15);
        layoutWidget_12->setObjectName("layoutWidget_12");
        verticalLayout_14 = new QVBoxLayout(layoutWidget_12);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_27);

        pushButtonSave_TLS = new QPushButton(layoutWidget_12);
        pushButtonSave_TLS->setObjectName("pushButtonSave_TLS");

        horizontalLayout_27->addWidget(pushButtonSave_TLS);


        verticalLayout_14->addLayout(horizontalLayout_27);

        tableWidget_TLS = new QTableWidget(layoutWidget_12);
        tableWidget_TLS->setObjectName("tableWidget_TLS");
        tableWidget_TLS->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_TLS->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_TLS->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_TLS->horizontalHeader()->setVisible(false);
        tableWidget_TLS->verticalHeader()->setVisible(false);
        tableWidget_TLS->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_14->addWidget(tableWidget_TLS);

        splitter_15->addWidget(layoutWidget_12);
        widgetHex_TLS = new ToolsWidget(splitter_15);
        widgetHex_TLS->setObjectName("widgetHex_TLS");
        splitter_15->addWidget(widgetHex_TLS);

        verticalLayout_56->addWidget(splitter_15);

        stackedWidgetInfo->addWidget(page_TLS);
        page_TLSCallbacks = new QWidget();
        page_TLSCallbacks->setObjectName("page_TLSCallbacks");
        verticalLayout_38 = new QVBoxLayout(page_TLSCallbacks);
        verticalLayout_38->setObjectName("verticalLayout_38");
        verticalLayout_38->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_26);

        pushButtonSave_TLSCallbacks = new QPushButton(page_TLSCallbacks);
        pushButtonSave_TLSCallbacks->setObjectName("pushButtonSave_TLSCallbacks");

        horizontalLayout_26->addWidget(pushButtonSave_TLSCallbacks);


        verticalLayout_38->addLayout(horizontalLayout_26);

        tableView_TLSCallbacks = new XTableView(page_TLSCallbacks);
        tableView_TLSCallbacks->setObjectName("tableView_TLSCallbacks");
        tableView_TLSCallbacks->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_TLSCallbacks->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_TLSCallbacks->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_TLSCallbacks->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_TLSCallbacks->horizontalHeader()->setDefaultSectionSize(57);
        tableView_TLSCallbacks->verticalHeader()->setVisible(false);
        tableView_TLSCallbacks->verticalHeader()->setMinimumSectionSize(20);
        tableView_TLSCallbacks->verticalHeader()->setDefaultSectionSize(20);
        tableView_TLSCallbacks->verticalHeader()->setHighlightSections(true);

        verticalLayout_38->addWidget(tableView_TLSCallbacks);

        stackedWidgetInfo->addWidget(page_TLSCallbacks);
        page_LoadConfig = new QWidget();
        page_LoadConfig->setObjectName("page_LoadConfig");
        verticalLayout_55 = new QVBoxLayout(page_LoadConfig);
        verticalLayout_55->setObjectName("verticalLayout_55");
        verticalLayout_55->setContentsMargins(0, 0, 0, 0);
        splitter_16 = new QSplitter(page_LoadConfig);
        splitter_16->setObjectName("splitter_16");
        splitter_16->setOrientation(Qt::Vertical);
        layoutWidget_13 = new QWidget(splitter_16);
        layoutWidget_13->setObjectName("layoutWidget_13");
        verticalLayout_15 = new QVBoxLayout(layoutWidget_13);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_25);

        pushButtonSave_LoadConfig = new QPushButton(layoutWidget_13);
        pushButtonSave_LoadConfig->setObjectName("pushButtonSave_LoadConfig");

        horizontalLayout_25->addWidget(pushButtonSave_LoadConfig);


        verticalLayout_15->addLayout(horizontalLayout_25);

        tableWidget_LoadConfig = new QTableWidget(layoutWidget_13);
        tableWidget_LoadConfig->setObjectName("tableWidget_LoadConfig");
        tableWidget_LoadConfig->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_LoadConfig->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_LoadConfig->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_LoadConfig->horizontalHeader()->setVisible(false);
        tableWidget_LoadConfig->verticalHeader()->setVisible(false);
        tableWidget_LoadConfig->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_15->addWidget(tableWidget_LoadConfig);

        splitter_16->addWidget(layoutWidget_13);
        widgetHex_LoadConfig = new ToolsWidget(splitter_16);
        widgetHex_LoadConfig->setObjectName("widgetHex_LoadConfig");
        splitter_16->addWidget(widgetHex_LoadConfig);

        verticalLayout_55->addWidget(splitter_16);

        stackedWidgetInfo->addWidget(page_LoadConfig);
        page_BoundImport = new QWidget();
        page_BoundImport->setObjectName("page_BoundImport");
        verticalLayout_31 = new QVBoxLayout(page_BoundImport);
        verticalLayout_31->setObjectName("verticalLayout_31");
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_17);

        pushButtonSave_BoundImport = new QPushButton(page_BoundImport);
        pushButtonSave_BoundImport->setObjectName("pushButtonSave_BoundImport");

        horizontalLayout_17->addWidget(pushButtonSave_BoundImport);


        verticalLayout_31->addLayout(horizontalLayout_17);

        tableView_BoundImport = new XTableView(page_BoundImport);
        tableView_BoundImport->setObjectName("tableView_BoundImport");
        tableView_BoundImport->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_BoundImport->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_BoundImport->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_BoundImport->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_BoundImport->horizontalHeader()->setDefaultSectionSize(57);
        tableView_BoundImport->verticalHeader()->setVisible(false);
        tableView_BoundImport->verticalHeader()->setMinimumSectionSize(20);
        tableView_BoundImport->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_31->addWidget(tableView_BoundImport);

        stackedWidgetInfo->addWidget(page_BoundImport);
        page_DelayImport = new QWidget();
        page_DelayImport->setObjectName("page_DelayImport");
        verticalLayout_51 = new QVBoxLayout(page_DelayImport);
        verticalLayout_51->setObjectName("verticalLayout_51");
        verticalLayout_51->setContentsMargins(0, 0, 0, 0);
        splitter_17 = new QSplitter(page_DelayImport);
        splitter_17->setObjectName("splitter_17");
        splitter_17->setOrientation(Qt::Vertical);
        layoutWidget_14 = new QWidget(splitter_17);
        layoutWidget_14->setObjectName("layoutWidget_14");
        verticalLayout_18 = new QVBoxLayout(layoutWidget_14);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_20);

        pushButtonSave_DelayImportLibraries = new QPushButton(layoutWidget_14);
        pushButtonSave_DelayImportLibraries->setObjectName("pushButtonSave_DelayImportLibraries");

        horizontalLayout_20->addWidget(pushButtonSave_DelayImportLibraries);


        verticalLayout_18->addLayout(horizontalLayout_20);

        tableView_DelayImportLibraries = new XTableView(layoutWidget_14);
        tableView_DelayImportLibraries->setObjectName("tableView_DelayImportLibraries");
        tableView_DelayImportLibraries->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DelayImportLibraries->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DelayImportLibraries->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DelayImportLibraries->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_DelayImportLibraries->horizontalHeader()->setDefaultSectionSize(57);
        tableView_DelayImportLibraries->verticalHeader()->setVisible(false);
        tableView_DelayImportLibraries->verticalHeader()->setMinimumSectionSize(20);
        tableView_DelayImportLibraries->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_18->addWidget(tableView_DelayImportLibraries);

        splitter_17->addWidget(layoutWidget_14);
        layoutWidget_15 = new QWidget(splitter_17);
        layoutWidget_15->setObjectName("layoutWidget_15");
        verticalLayout_50 = new QVBoxLayout(layoutWidget_15);
        verticalLayout_50->setObjectName("verticalLayout_50");
        verticalLayout_50->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_19);

        pushButtonSave_DelayImportFunctions = new QPushButton(layoutWidget_15);
        pushButtonSave_DelayImportFunctions->setObjectName("pushButtonSave_DelayImportFunctions");

        horizontalLayout_19->addWidget(pushButtonSave_DelayImportFunctions);


        verticalLayout_50->addLayout(horizontalLayout_19);

        tableView_DelayImportFunctions = new XTableView(layoutWidget_15);
        tableView_DelayImportFunctions->setObjectName("tableView_DelayImportFunctions");
        tableView_DelayImportFunctions->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_DelayImportFunctions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_DelayImportFunctions->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_DelayImportFunctions->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_DelayImportFunctions->horizontalHeader()->setDefaultSectionSize(57);
        tableView_DelayImportFunctions->verticalHeader()->setVisible(false);
        tableView_DelayImportFunctions->verticalHeader()->setMinimumSectionSize(20);
        tableView_DelayImportFunctions->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout_50->addWidget(tableView_DelayImportFunctions);

        splitter_17->addWidget(layoutWidget_15);

        verticalLayout_51->addWidget(splitter_17);

        stackedWidgetInfo->addWidget(page_DelayImport);
        page_NetHeader = new QWidget();
        page_NetHeader->setObjectName("page_NetHeader");
        verticalLayout_61 = new QVBoxLayout(page_NetHeader);
        verticalLayout_61->setObjectName("verticalLayout_61");
        verticalLayout_61->setContentsMargins(0, 0, 0, 0);
        splitter_18 = new QSplitter(page_NetHeader);
        splitter_18->setObjectName("splitter_18");
        splitter_18->setOrientation(Qt::Vertical);
        layoutWidget_16 = new QWidget(splitter_18);
        layoutWidget_16->setObjectName("layoutWidget_16");
        verticalLayout_20 = new QVBoxLayout(layoutWidget_16);
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName("horizontalLayout_32");
        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_32);

        pushButtonSave_NetHeader = new QPushButton(layoutWidget_16);
        pushButtonSave_NetHeader->setObjectName("pushButtonSave_NetHeader");

        horizontalLayout_32->addWidget(pushButtonSave_NetHeader);


        verticalLayout_20->addLayout(horizontalLayout_32);

        tableWidget_NetHeader = new QTableWidget(layoutWidget_16);
        tableWidget_NetHeader->setObjectName("tableWidget_NetHeader");
        tableWidget_NetHeader->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_NetHeader->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_NetHeader->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_NetHeader->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_NetHeader->horizontalHeader()->setVisible(false);
        tableWidget_NetHeader->verticalHeader()->setVisible(false);
        tableWidget_NetHeader->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_20->addWidget(tableWidget_NetHeader);

        splitter_18->addWidget(layoutWidget_16);
        widgetHex_NetHeader = new ToolsWidget(splitter_18);
        widgetHex_NetHeader->setObjectName("widgetHex_NetHeader");
        splitter_18->addWidget(widgetHex_NetHeader);

        verticalLayout_61->addWidget(splitter_18);

        stackedWidgetInfo->addWidget(page_NetHeader);
        page_Net_Metadata = new QWidget();
        page_Net_Metadata->setObjectName("page_Net_Metadata");
        verticalLayout_62 = new QVBoxLayout(page_Net_Metadata);
        verticalLayout_62->setObjectName("verticalLayout_62");
        verticalLayout_62->setContentsMargins(0, 0, 0, 0);
        splitter_19 = new QSplitter(page_Net_Metadata);
        splitter_19->setObjectName("splitter_19");
        splitter_19->setOrientation(Qt::Vertical);
        layoutWidget_17 = new QWidget(splitter_19);
        layoutWidget_17->setObjectName("layoutWidget_17");
        verticalLayout_27 = new QVBoxLayout(layoutWidget_17);
        verticalLayout_27->setObjectName("verticalLayout_27");
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName("horizontalLayout_33");
        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_33);

        pushButtonSave_Net_Metadata = new QPushButton(layoutWidget_17);
        pushButtonSave_Net_Metadata->setObjectName("pushButtonSave_Net_Metadata");

        horizontalLayout_33->addWidget(pushButtonSave_Net_Metadata);


        verticalLayout_27->addLayout(horizontalLayout_33);

        tableWidget_Net_Metadata = new QTableWidget(layoutWidget_17);
        tableWidget_Net_Metadata->setObjectName("tableWidget_Net_Metadata");
        tableWidget_Net_Metadata->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Net_Metadata->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Net_Metadata->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_Net_Metadata->horizontalHeader()->setVisible(false);
        tableWidget_Net_Metadata->verticalHeader()->setVisible(false);
        tableWidget_Net_Metadata->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_27->addWidget(tableWidget_Net_Metadata);

        splitter_19->addWidget(layoutWidget_17);
        widgetHex_Net_Metadata = new ToolsWidget(splitter_19);
        widgetHex_Net_Metadata->setObjectName("widgetHex_Net_Metadata");
        splitter_19->addWidget(widgetHex_Net_Metadata);

        verticalLayout_62->addWidget(splitter_19);

        stackedWidgetInfo->addWidget(page_Net_Metadata);
        page_Net_Metadata_Stream = new QWidget();
        page_Net_Metadata_Stream->setObjectName("page_Net_Metadata_Stream");
        verticalLayout_28 = new QVBoxLayout(page_Net_Metadata_Stream);
        verticalLayout_28->setObjectName("verticalLayout_28");
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        widgetHex_Net_Metadata_Stream = new ToolsWidget(page_Net_Metadata_Stream);
        widgetHex_Net_Metadata_Stream->setObjectName("widgetHex_Net_Metadata_Stream");
        sizePolicy.setHeightForWidth(widgetHex_Net_Metadata_Stream->sizePolicy().hasHeightForWidth());
        widgetHex_Net_Metadata_Stream->setSizePolicy(sizePolicy);

        verticalLayout_28->addWidget(widgetHex_Net_Metadata_Stream);

        stackedWidgetInfo->addWidget(page_Net_Metadata_Stream);
        page_Net_Metadata_Table = new QWidget();
        page_Net_Metadata_Table->setObjectName("page_Net_Metadata_Table");
        verticalLayout_66 = new QVBoxLayout(page_Net_Metadata_Table);
        verticalLayout_66->setObjectName("verticalLayout_66");
        verticalLayout_66->setContentsMargins(0, 0, 0, 0);
        splitter_22 = new QSplitter(page_Net_Metadata_Table);
        splitter_22->setObjectName("splitter_22");
        splitter_22->setOrientation(Qt::Vertical);
        tableView_Net_Metadata_Table = new XTableView(splitter_22);
        tableView_Net_Metadata_Table->setObjectName("tableView_Net_Metadata_Table");
        tableView_Net_Metadata_Table->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Net_Metadata_Table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Net_Metadata_Table->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Net_Metadata_Table->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Net_Metadata_Table->setSortingEnabled(false);
        splitter_22->addWidget(tableView_Net_Metadata_Table);
        tableView_Net_Metadata_Table->horizontalHeader()->setDefaultSectionSize(57);
        tableView_Net_Metadata_Table->verticalHeader()->setVisible(false);
        tableView_Net_Metadata_Table->verticalHeader()->setMinimumSectionSize(20);
        tableView_Net_Metadata_Table->verticalHeader()->setDefaultSectionSize(20);
        widgetHex_Net_Metadata_Table = new ToolsWidget(splitter_22);
        widgetHex_Net_Metadata_Table->setObjectName("widgetHex_Net_Metadata_Table");
        sizePolicy2.setHeightForWidth(widgetHex_Net_Metadata_Table->sizePolicy().hasHeightForWidth());
        widgetHex_Net_Metadata_Table->setSizePolicy(sizePolicy2);
        splitter_22->addWidget(widgetHex_Net_Metadata_Table);

        verticalLayout_66->addWidget(splitter_22);

        stackedWidgetInfo->addWidget(page_Net_Metadata_Table);
        page_Certificate = new QWidget();
        page_Certificate->setObjectName("page_Certificate");
        verticalLayout_37 = new QVBoxLayout(page_Certificate);
        verticalLayout_37->setObjectName("verticalLayout_37");
        verticalLayout_37->setContentsMargins(0, 0, 0, 0);
        splitter_20 = new QSplitter(page_Certificate);
        splitter_20->setObjectName("splitter_20");
        splitter_20->setOrientation(Qt::Vertical);
        layoutWidget_18 = new QWidget(splitter_20);
        layoutWidget_18->setObjectName("layoutWidget_18");
        verticalLayout_36 = new QVBoxLayout(layoutWidget_18);
        verticalLayout_36->setObjectName("verticalLayout_36");
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        widgetCertificateCheck = new QWidget(layoutWidget_18);
        widgetCertificateCheck->setObjectName("widgetCertificateCheck");
        horizontalLayout_4 = new QHBoxLayout(widgetCertificateCheck);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonCertificateCheck = new QPushButton(widgetCertificateCheck);
        pushButtonCertificateCheck->setObjectName("pushButtonCertificateCheck");

        horizontalLayout_4->addWidget(pushButtonCertificateCheck);

        horizontalSpacer_4 = new QSpacerItem(494, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButtonSave_Certificate = new QPushButton(widgetCertificateCheck);
        pushButtonSave_Certificate->setObjectName("pushButtonSave_Certificate");

        horizontalLayout_4->addWidget(pushButtonSave_Certificate);


        verticalLayout_36->addWidget(widgetCertificateCheck);

        treeView_Certificate = new QTreeView(layoutWidget_18);
        treeView_Certificate->setObjectName("treeView_Certificate");
        treeView_Certificate->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView_Certificate->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView_Certificate->header()->setVisible(false);
        treeView_Certificate->header()->setDefaultSectionSize(57);

        verticalLayout_36->addWidget(treeView_Certificate);

        splitter_20->addWidget(layoutWidget_18);
        widgetHex_Certificate = new ToolsWidget(splitter_20);
        widgetHex_Certificate->setObjectName("widgetHex_Certificate");
        sizePolicy2.setHeightForWidth(widgetHex_Certificate->sizePolicy().hasHeightForWidth());
        widgetHex_Certificate->setSizePolicy(sizePolicy2);
        splitter_20->addWidget(widgetHex_Certificate);

        verticalLayout_37->addWidget(splitter_20);

        stackedWidgetInfo->addWidget(page_Certificate);
        page_Overlay = new QWidget();
        page_Overlay->setObjectName("page_Overlay");
        verticalLayout_11 = new QVBoxLayout(page_Overlay);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        pushButtonDump_Overlay = new QPushButton(page_Overlay);
        pushButtonDump_Overlay->setObjectName("pushButtonDump_Overlay");

        horizontalLayout_11->addWidget(pushButtonDump_Overlay);


        verticalLayout_11->addLayout(horizontalLayout_11);

        widgetHex_Overlay = new ToolsWidget(page_Overlay);
        widgetHex_Overlay->setObjectName("widgetHex_Overlay");
        sizePolicy.setHeightForWidth(widgetHex_Overlay->sizePolicy().hasHeightForWidth());
        widgetHex_Overlay->setSizePolicy(sizePolicy);

        verticalLayout_11->addWidget(widgetHex_Overlay);

        stackedWidgetInfo->addWidget(page_Overlay);
        splitter->addWidget(stackedWidgetInfo);

        verticalLayout_42->addWidget(splitter);


        retranslateUi(PEWidget);

        stackedWidgetInfo->setCurrentIndex(24);
        tabWidgetResources->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PEWidget);
    } // setupUi

    void retranslateUi(QWidget *PEWidget)
    {
        toolButtonReload->setText(QCoreApplication::translate("PEWidget", "Reload", nullptr));
        checkBoxReadonly->setText(QCoreApplication::translate("PEWidget", "Readonly", nullptr));
        pushButtonSave_IMAGE_DOS_HEADER->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonDump_DosStub->setText(QCoreApplication::translate("PEWidget", "Dump", nullptr));
        pushButtonSave_IMAGE_NT_HEADERS->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_IMAGE_FILE_HEADER->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_IMAGE_OPTIONAL_HEADER->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_IMAGE_DIRECTORY_ENTRIES->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_RICH->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        checkBoxSectionsStringTable->setText(QCoreApplication::translate("PEWidget", "String table", nullptr));
        pushButtonDumpAll_Sections->setText(QCoreApplication::translate("PEWidget", "Dump all", nullptr));
        pushButtonSave_Sections->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_Sections_Info->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_ExportHeader->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        checkBoxExportShowValid->setText(QCoreApplication::translate("PEWidget", "Show valid", nullptr));
        pushButtonSave_ExportFunctions->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_ImportLibraries->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_ImportFunctions->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_Import_Info->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonExtractAllIcons_Resources->setText(QCoreApplication::translate("PEWidget", "Extract all icons", nullptr));
        pushButtonExtractAllCursors_Resources->setText(QCoreApplication::translate("PEWidget", "Extract all cursors", nullptr));
        pushButtonDumpAll_Resources->setText(QCoreApplication::translate("PEWidget", "Dump all", nullptr));
        pushButtonSave_Resources->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        tabWidgetResources->setTabText(tabWidgetResources->indexOf(tabTable), QCoreApplication::translate("PEWidget", "Table", nullptr));
        tabWidgetResources->setTabText(tabWidgetResources->indexOf(tabTree), QCoreApplication::translate("PEWidget", "Tree", nullptr));
        pushButtonSave_Resources_StringTable->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_Resources_Version_Header->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_Resources_Version->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        checkBox_ManifestFormat->setText(QCoreApplication::translate("PEWidget", "Format", nullptr));
        pushButtonSave_Manifest->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_Exception->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_Relocs->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_RelocsPositions->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_Debug->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_TLS->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_TLSCallbacks->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_LoadConfig->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_BoundImport->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_DelayImportLibraries->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_DelayImportFunctions->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_NetHeader->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonSave_Net_Metadata->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonCertificateCheck->setText(QCoreApplication::translate("PEWidget", "Check", nullptr));
        pushButtonSave_Certificate->setText(QCoreApplication::translate("PEWidget", "Save", nullptr));
        pushButtonDump_Overlay->setText(QCoreApplication::translate("PEWidget", "Dump", nullptr));
        (void)PEWidget;
    } // retranslateUi

};

namespace Ui {
    class PEWidget: public Ui_PEWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEWIDGET_H
