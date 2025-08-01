/********************************************************************************
** Form generated from reading UI file 'binarywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINARYWIDGET_H
#define UI_BINARYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "diewidgetadvanced.h"
#include "nfdwidgetadvanced.h"
#include "searchsignatureswidget.h"
#include "searchstringswidget.h"
#include "searchvalueswidget.h"
#include "xentropywidget.h"
#include "xextractorwidget.h"
#include "xfileinfowidget.h"
#include "xhashwidget.h"
#include "xhexviewwidget.h"
#include "xmemorymapwidget.h"
#include "xmultidisasmwidget.h"
#include "xvirustotalwidget.h"
#include "xvisualizationwidget.h"
#include "yarawidgetadvanced.h"

QT_BEGIN_NAMESPACE

class Ui_BinaryWidget
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
    QVBoxLayout *verticalLayout_4;
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
    QVBoxLayout *verticalLayout_3;
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

    void setupUi(QWidget *BinaryWidget)
    {
        if (BinaryWidget->objectName().isEmpty())
            BinaryWidget->setObjectName(QString::fromUtf8("BinaryWidget"));
        BinaryWidget->resize(1002, 204);
        BinaryWidget->setWindowTitle(QString::fromUtf8("Binary"));
        verticalLayout = new QVBoxLayout(BinaryWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButtonReload = new QToolButton(BinaryWidget);
        toolButtonReload->setObjectName(QString::fromUtf8("toolButtonReload"));

        horizontalLayout->addWidget(toolButtonReload);

        toolButtonPrev = new QToolButton(BinaryWidget);
        toolButtonPrev->setObjectName(QString::fromUtf8("toolButtonPrev"));
        toolButtonPrev->setText(QString::fromUtf8("<"));

        horizontalLayout->addWidget(toolButtonPrev);

        toolButtonNext = new QToolButton(BinaryWidget);
        toolButtonNext->setObjectName(QString::fromUtf8("toolButtonNext"));
        toolButtonNext->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(toolButtonNext);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxReadonly = new QCheckBox(BinaryWidget);
        checkBoxReadonly->setObjectName(QString::fromUtf8("checkBoxReadonly"));

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(BinaryWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeWidgetNavi = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidgetNavi->setHeaderItem(__qtreewidgetitem);
        treeWidgetNavi->setObjectName(QString::fromUtf8("treeWidgetNavi"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidgetNavi->sizePolicy().hasHeightForWidth());
        treeWidgetNavi->setSizePolicy(sizePolicy);
        treeWidgetNavi->setMaximumSize(QSize(250, 16777215));
        splitter->addWidget(treeWidgetNavi);
        treeWidgetNavi->header()->setVisible(false);
        stackedWidgetInfo = new QStackedWidget(splitter);
        stackedWidgetInfo->setObjectName(QString::fromUtf8("stackedWidgetInfo"));
        page_Info = new QWidget();
        page_Info->setObjectName(QString::fromUtf8("page_Info"));
        verticalLayout_24 = new QVBoxLayout(page_Info);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        widgetInfo = new XFileInfoWidget(page_Info);
        widgetInfo->setObjectName(QString::fromUtf8("widgetInfo"));

        verticalLayout_24->addWidget(widgetInfo);

        stackedWidgetInfo->addWidget(page_Info);
        page_Visualization = new QWidget();
        page_Visualization->setObjectName(QString::fromUtf8("page_Visualization"));
        verticalLayout_4 = new QVBoxLayout(page_Visualization);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widgetVisualization = new XVisualizationWidget(page_Visualization);
        widgetVisualization->setObjectName(QString::fromUtf8("widgetVisualization"));

        verticalLayout_4->addWidget(widgetVisualization);

        stackedWidgetInfo->addWidget(page_Visualization);
        page_VirusTotal = new QWidget();
        page_VirusTotal->setObjectName(QString::fromUtf8("page_VirusTotal"));
        verticalLayout_24_2 = new QVBoxLayout(page_VirusTotal);
        verticalLayout_24_2->setObjectName(QString::fromUtf8("verticalLayout_24_2"));
        verticalLayout_24_2->setContentsMargins(0, 0, 0, 0);
        widgetVirusTotal = new XVirusTotalWidget(page_VirusTotal);
        widgetVirusTotal->setObjectName(QString::fromUtf8("widgetVirusTotal"));

        verticalLayout_24_2->addWidget(widgetVirusTotal);

        stackedWidgetInfo->addWidget(page_VirusTotal);
        page_HEX = new QWidget();
        page_HEX->setObjectName(QString::fromUtf8("page_HEX"));
        verticalLayout_2 = new QVBoxLayout(page_HEX);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetHex = new XHexViewWidget(page_HEX);
        widgetHex->setObjectName(QString::fromUtf8("widgetHex"));

        verticalLayout_2->addWidget(widgetHex);

        stackedWidgetInfo->addWidget(page_HEX);
        page_Disasm = new QWidget();
        page_Disasm->setObjectName(QString::fromUtf8("page_Disasm"));
        verticalLayout_19 = new QVBoxLayout(page_Disasm);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        widgetDisasm = new XMultiDisasmWidget(page_Disasm);
        widgetDisasm->setObjectName(QString::fromUtf8("widgetDisasm"));

        verticalLayout_19->addWidget(widgetDisasm);

        stackedWidgetInfo->addWidget(page_Disasm);
        page_Hash = new QWidget();
        page_Hash->setObjectName(QString::fromUtf8("page_Hash"));
        verticalLayout_21 = new QVBoxLayout(page_Hash);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        widgetHash = new XHashWidget(page_Hash);
        widgetHash->setObjectName(QString::fromUtf8("widgetHash"));

        verticalLayout_21->addWidget(widgetHash);

        stackedWidgetInfo->addWidget(page_Hash);
        page_Strings = new QWidget();
        page_Strings->setObjectName(QString::fromUtf8("page_Strings"));
        verticalLayout_8 = new QVBoxLayout(page_Strings);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        widgetStrings = new SearchStringsWidget(page_Strings);
        widgetStrings->setObjectName(QString::fromUtf8("widgetStrings"));

        verticalLayout_8->addWidget(widgetStrings);

        stackedWidgetInfo->addWidget(page_Strings);
        page_Signatures = new QWidget();
        page_Signatures->setObjectName(QString::fromUtf8("page_Signatures"));
        verticalLayout_20 = new QVBoxLayout(page_Signatures);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        widgetSignatures = new SearchSignaturesWidget(page_Signatures);
        widgetSignatures->setObjectName(QString::fromUtf8("widgetSignatures"));

        verticalLayout_20->addWidget(widgetSignatures);

        stackedWidgetInfo->addWidget(page_Signatures);
        page_MemoryMap = new QWidget();
        page_MemoryMap->setObjectName(QString::fromUtf8("page_MemoryMap"));
        verticalLayout_7 = new QVBoxLayout(page_MemoryMap);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widgetMemoryMap = new XMemoryMapWidget(page_MemoryMap);
        widgetMemoryMap->setObjectName(QString::fromUtf8("widgetMemoryMap"));

        verticalLayout_7->addWidget(widgetMemoryMap);

        stackedWidgetInfo->addWidget(page_MemoryMap);
        page_Entropy = new QWidget();
        page_Entropy->setObjectName(QString::fromUtf8("page_Entropy"));
        verticalLayout_17 = new QVBoxLayout(page_Entropy);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        widgetEntropy = new XEntropyWidget(page_Entropy);
        widgetEntropy->setObjectName(QString::fromUtf8("widgetEntropy"));

        verticalLayout_17->addWidget(widgetEntropy);

        stackedWidgetInfo->addWidget(page_Entropy);
        page_HeuristicScan = new QWidget();
        page_HeuristicScan->setObjectName(QString::fromUtf8("page_HeuristicScan"));
        verticalLayout_18 = new QVBoxLayout(page_HeuristicScan);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        widgetHeuristicScan = new NFDWidgetAdvanced(page_HeuristicScan);
        widgetHeuristicScan->setObjectName(QString::fromUtf8("widgetHeuristicScan"));

        verticalLayout_18->addWidget(widgetHeuristicScan);

        stackedWidgetInfo->addWidget(page_HeuristicScan);
        page_Extractor = new QWidget();
        page_Extractor->setObjectName(QString::fromUtf8("page_Extractor"));
        verticalLayout_3 = new QVBoxLayout(page_Extractor);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widgetExtractor = new XExtractorWidget(page_Extractor);
        widgetExtractor->setObjectName(QString::fromUtf8("widgetExtractor"));

        verticalLayout_3->addWidget(widgetExtractor);

        stackedWidgetInfo->addWidget(page_Extractor);
        page_Search = new QWidget();
        page_Search->setObjectName(QString::fromUtf8("page_Search"));
        verticalLayout_63 = new QVBoxLayout(page_Search);
        verticalLayout_63->setObjectName(QString::fromUtf8("verticalLayout_63"));
        verticalLayout_63->setContentsMargins(0, 0, 0, 0);
        widgetSearch = new SearchValuesWidget(page_Search);
        widgetSearch->setObjectName(QString::fromUtf8("widgetSearch"));

        verticalLayout_63->addWidget(widgetSearch);

        stackedWidgetInfo->addWidget(page_Search);
        page_DIEScan = new QWidget();
        page_DIEScan->setObjectName(QString::fromUtf8("page_DIEScan"));
        verticalLayout_5dd = new QVBoxLayout(page_DIEScan);
        verticalLayout_5dd->setObjectName(QString::fromUtf8("verticalLayout_5dd"));
        verticalLayout_5dd->setContentsMargins(0, 0, 0, 0);
        widgetDIEScan = new DIEWidgetAdvanced(page_DIEScan);
        widgetDIEScan->setObjectName(QString::fromUtf8("widgetDIEScan"));

        verticalLayout_5dd->addWidget(widgetDIEScan);

        stackedWidgetInfo->addWidget(page_DIEScan);
        page_YARAScan = new QWidget();
        page_YARAScan->setObjectName(QString::fromUtf8("page_YARAScan"));
        verticalLayout_6dd = new QVBoxLayout(page_YARAScan);
        verticalLayout_6dd->setObjectName(QString::fromUtf8("verticalLayout_6dd"));
        verticalLayout_6dd->setContentsMargins(0, 0, 0, 0);
        widgetYARAScan = new YARAWidgetAdvanced(page_YARAScan);
        widgetYARAScan->setObjectName(QString::fromUtf8("widgetYARAScan"));

        verticalLayout_6dd->addWidget(widgetYARAScan);

        stackedWidgetInfo->addWidget(page_YARAScan);
        splitter->addWidget(stackedWidgetInfo);

        verticalLayout->addWidget(splitter);


        retranslateUi(BinaryWidget);

        QMetaObject::connectSlotsByName(BinaryWidget);
    } // setupUi

    void retranslateUi(QWidget *BinaryWidget)
    {
        toolButtonReload->setText(QCoreApplication::translate("BinaryWidget", "Reload", nullptr));
        checkBoxReadonly->setText(QCoreApplication::translate("BinaryWidget", "Readonly", nullptr));
        (void)BinaryWidget;
    } // retranslateUi

};

namespace Ui {
    class BinaryWidget: public Ui_BinaryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINARYWIDGET_H
