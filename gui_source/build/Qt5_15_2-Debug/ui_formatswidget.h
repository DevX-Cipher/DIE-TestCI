/********************************************************************************
** Form generated from reading UI file 'formatswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMATSWIDGET_H
#define UI_FORMATSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "die_widget.h"
#include "nfd_widget.h"
#include "xlineedithex.h"
#include "yara_widget.h"

QT_BEGIN_NAMESPACE

class Ui_FormatsWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBoxFileType;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBoxFileType;
    QGroupBox *groupBoxFileSize;
    QVBoxLayout *verticalLayout_18;
    XLineEditHEX *lineEditFileSize;
    QSpacerItem *horizontalSpacer_23;
    QGroupBox *groupBoxBaseAddress;
    QHBoxLayout *horizontalLayout_3;
    XLineEditHEX *lineEditBaseAddress;
    QGroupBox *groupBoxEntryPoint;
    QHBoxLayout *horizontalLayout_2;
    XLineEditHEX *lineEditEntryPoint;
    QToolButton *toolButtonEntryPoint;
    QGroupBox *groupBoxTools;
    QGridLayout *gridLayout;
    QToolButton *toolButtonMemoryMap;
    QToolButton *toolButtonSearch;
    QToolButton *toolButtonFileInfo;
    QToolButton *toolButtonVirusTotal;
    QSpacerItem *horizontalSpacer_19;
    QToolButton *toolButtonStrings;
    QToolButton *toolButtonHash;
    QToolButton *toolButtonDisasm;
    QToolButton *toolButtonEntropy;
    QToolButton *toolButtonExtractor;
    QToolButton *toolButtonSignatures;
    QToolButton *toolButtonMIME;
    QToolButton *toolButtonYARA;
    QToolButton *toolButtonHex;
    QToolButton *toolButtonVisualization;
    QStackedWidget *stackedWidgetMain;
    QWidget *pageBinary;
    QVBoxLayout *verticalLayout_21;
    QGroupBox *groupBoxBinary;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_27;
    QToolButton *toolButtonBinary;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *verticalSpacer_10;
    QWidget *pageArchive;
    QVBoxLayout *verticalLayout_28;
    QGroupBox *groupBoxArchive;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_23;
    QToolButton *toolButtonArchive;
    QToolButton *toolButtonMANIFESTMF;
    QToolButton *toolButtonAndroidManifest;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *toolButtonFiles;
    QToolButton *toolButtonUnpack;
    QSpacerItem *verticalSpacer_3;
    QWidget *pageCOM;
    QWidget *pageDEX;
    QVBoxLayout *verticalLayout_19;
    QGroupBox *groupBoxDEX;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_20;
    QToolButton *toolButtonDEX;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *pageNE;
    QVBoxLayout *verticalLayout_26;
    QGroupBox *groupBoxNE;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QToolButton *toolButtonNE;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_5;
    QWidget *pageLE;
    QVBoxLayout *verticalLayout_22;
    QGroupBox *groupBoxLE;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_12;
    QToolButton *toolButtonLE;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_6;
    QWidget *pageMSDOS;
    QVBoxLayout *verticalLayout_25;
    QGroupBox *groupBoxMSDOS;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *toolButtonMSDOS;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *toolButtonMSDOSOverlay;
    QSpacerItem *verticalSpacer_2;
    QWidget *pagePE;
    QVBoxLayout *verticalLayout_27;
    QGroupBox *groupBoxPE;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButtonPE;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButtonPEExport;
    QToolButton *toolButtonPEImport;
    QToolButton *toolButtonPEResources;
    QToolButton *toolButtonPENET;
    QToolButton *toolButtonPETLS;
    QToolButton *toolButtonPEOverlay;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBoxPESections;
    QHBoxLayout *horizontalLayout_5;
    XLineEditHEX *lineEditPESections;
    QToolButton *toolButtonPESections;
    QGroupBox *groupBoxPETimeDateStamp;
    QHBoxLayout *horizontalLayout_40;
    XLineEditHEX *lineEditPETimeDateStamp;
    QGroupBox *groupBoxPESizeOfImage;
    QHBoxLayout *horizontalLayout_41;
    XLineEditHEX *lineEditPESizeOfImage;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBoxPEResources;
    QHBoxLayout *horizontalLayout_19;
    QToolButton *toolButtonPEManifest;
    QToolButton *toolButtonPEVersion;
    QSpacerItem *verticalSpacer_9;
    QWidget *pageELF;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *groupBoxELF;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QToolButton *toolButtonELF;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_14;
    QGroupBox *groupBoxELFPrograms;
    QHBoxLayout *horizontalLayout_16;
    XLineEditHEX *lineEditELFPrograms;
    QToolButton *toolButtonELFPrograms;
    QGroupBox *groupBoxELFSections;
    QHBoxLayout *horizontalLayout_13;
    XLineEditHEX *lineEditELFSections;
    QToolButton *toolButtonELFSections;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_7;
    QWidget *pageMACH;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *groupBoxMACH;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *toolButtonMACH;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_18;
    QGroupBox *groupBoxMACHCommands;
    QHBoxLayout *horizontalLayout_21;
    XLineEditHEX *lineEditMACHCommands;
    QToolButton *toolButtonMACHCommands;
    QGroupBox *groupBoxMACHSegments;
    QHBoxLayout *horizontalLayout_17;
    XLineEditHEX *lineEditMACHSegments;
    QToolButton *toolButtonMACHSegments;
    QGroupBox *groupBoxMACHSections;
    QHBoxLayout *horizontalLayout_15;
    XLineEditHEX *lineEditMACHSections;
    QToolButton *toolButtonMACHSections;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_16;
    QGroupBox *groupBoxMACHLibraries;
    QHBoxLayout *horizontalLayout_22;
    XLineEditHEX *lineEditMACHLibraries;
    QToolButton *toolButtonMACHLibraries;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_26;
    QGroupBox *groupBoxScanEngine;
    QVBoxLayout *verticalLayout_9;
    QComboBox *comboBoxScanEngine;
    QGroupBox *groupBoxEndianness;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *lineEditEndianness;
    QGroupBox *groupBoxMode;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *lineEditMode;
    QGroupBox *groupBoxArch;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *lineEditArch;
    QGroupBox *groupBoxType;
    QVBoxLayout *verticalLayout_13;
    QLineEdit *lineEditType;
    QStackedWidget *stackedWidgetScan;
    DIE_Widget *pageScanDIE;
    NFD_Widget *pageScanNFD;
    YARA_Widget *pageScanYARA;

    void setupUi(QWidget *FormatsWidget)
    {
        if (FormatsWidget->objectName().isEmpty())
            FormatsWidget->setObjectName(QString::fromUtf8("FormatsWidget"));
        FormatsWidget->resize(807, 494);
        FormatsWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_3 = new QVBoxLayout(FormatsWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBoxFileType = new QGroupBox(FormatsWidget);
        groupBoxFileType->setObjectName(QString::fromUtf8("groupBoxFileType"));
        groupBoxFileType->setMinimumSize(QSize(120, 0));
        groupBoxFileType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout = new QVBoxLayout(groupBoxFileType);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        comboBoxFileType = new QComboBox(groupBoxFileType);
        comboBoxFileType->setObjectName(QString::fromUtf8("comboBoxFileType"));

        verticalLayout->addWidget(comboBoxFileType);


        horizontalLayout_7->addWidget(groupBoxFileType);

        groupBoxFileSize = new QGroupBox(FormatsWidget);
        groupBoxFileSize->setObjectName(QString::fromUtf8("groupBoxFileSize"));
        groupBoxFileSize->setMinimumSize(QSize(130, 0));
        groupBoxFileSize->setMaximumSize(QSize(130, 16777215));
        groupBoxFileSize->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout_18 = new QVBoxLayout(groupBoxFileSize);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(2, 2, 2, 2);
        lineEditFileSize = new XLineEditHEX(groupBoxFileSize);
        lineEditFileSize->setObjectName(QString::fromUtf8("lineEditFileSize"));
        lineEditFileSize->setMinimumSize(QSize(100, 0));
        lineEditFileSize->setAlignment(Qt::AlignCenter);
        lineEditFileSize->setReadOnly(true);

        verticalLayout_18->addWidget(lineEditFileSize);


        horizontalLayout_7->addWidget(groupBoxFileSize);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_23);

        groupBoxBaseAddress = new QGroupBox(FormatsWidget);
        groupBoxBaseAddress->setObjectName(QString::fromUtf8("groupBoxBaseAddress"));
        groupBoxBaseAddress->setMinimumSize(QSize(140, 0));
        groupBoxBaseAddress->setMaximumSize(QSize(140, 16777215));
        groupBoxBaseAddress->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayout_3 = new QHBoxLayout(groupBoxBaseAddress);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        lineEditBaseAddress = new XLineEditHEX(groupBoxBaseAddress);
        lineEditBaseAddress->setObjectName(QString::fromUtf8("lineEditBaseAddress"));
        lineEditBaseAddress->setAlignment(Qt::AlignCenter);
        lineEditBaseAddress->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditBaseAddress);


        horizontalLayout_7->addWidget(groupBoxBaseAddress);

        groupBoxEntryPoint = new QGroupBox(FormatsWidget);
        groupBoxEntryPoint->setObjectName(QString::fromUtf8("groupBoxEntryPoint"));
        groupBoxEntryPoint->setMinimumSize(QSize(180, 0));
        groupBoxEntryPoint->setMaximumSize(QSize(180, 16777215));
        groupBoxEntryPoint->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayout_2 = new QHBoxLayout(groupBoxEntryPoint);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        lineEditEntryPoint = new XLineEditHEX(groupBoxEntryPoint);
        lineEditEntryPoint->setObjectName(QString::fromUtf8("lineEditEntryPoint"));
        lineEditEntryPoint->setAlignment(Qt::AlignCenter);
        lineEditEntryPoint->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditEntryPoint);

        toolButtonEntryPoint = new QToolButton(groupBoxEntryPoint);
        toolButtonEntryPoint->setObjectName(QString::fromUtf8("toolButtonEntryPoint"));
        toolButtonEntryPoint->setMaximumSize(QSize(30, 16777215));
        toolButtonEntryPoint->setText(QString::fromUtf8(">"));

        horizontalLayout_2->addWidget(toolButtonEntryPoint);


        horizontalLayout_7->addWidget(groupBoxEntryPoint);


        verticalLayout_3->addLayout(horizontalLayout_7);

        groupBoxTools = new QGroupBox(FormatsWidget);
        groupBoxTools->setObjectName(QString::fromUtf8("groupBoxTools"));
        gridLayout = new QGridLayout(groupBoxTools);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolButtonMemoryMap = new QToolButton(groupBoxTools);
        toolButtonMemoryMap->setObjectName(QString::fromUtf8("toolButtonMemoryMap"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonMemoryMap->sizePolicy().hasHeightForWidth());
        toolButtonMemoryMap->setSizePolicy(sizePolicy);
        toolButtonMemoryMap->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonMemoryMap, 0, 2, 1, 1);

        toolButtonSearch = new QToolButton(groupBoxTools);
        toolButtonSearch->setObjectName(QString::fromUtf8("toolButtonSearch"));
        sizePolicy.setHeightForWidth(toolButtonSearch->sizePolicy().hasHeightForWidth());
        toolButtonSearch->setSizePolicy(sizePolicy);
        toolButtonSearch->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonSearch, 1, 3, 1, 1);

        toolButtonFileInfo = new QToolButton(groupBoxTools);
        toolButtonFileInfo->setObjectName(QString::fromUtf8("toolButtonFileInfo"));
        sizePolicy.setHeightForWidth(toolButtonFileInfo->sizePolicy().hasHeightForWidth());
        toolButtonFileInfo->setSizePolicy(sizePolicy);
        toolButtonFileInfo->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonFileInfo, 0, 0, 1, 1);

        toolButtonVirusTotal = new QToolButton(groupBoxTools);
        toolButtonVirusTotal->setObjectName(QString::fromUtf8("toolButtonVirusTotal"));
        sizePolicy.setHeightForWidth(toolButtonVirusTotal->sizePolicy().hasHeightForWidth());
        toolButtonVirusTotal->setSizePolicy(sizePolicy);
        toolButtonVirusTotal->setText(QString::fromUtf8("VirusTotal"));
        toolButtonVirusTotal->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonVirusTotal, 0, 7, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(177, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_19, 0, 1, 1, 1);

        toolButtonStrings = new QToolButton(groupBoxTools);
        toolButtonStrings->setObjectName(QString::fromUtf8("toolButtonStrings"));
        sizePolicy.setHeightForWidth(toolButtonStrings->sizePolicy().hasHeightForWidth());
        toolButtonStrings->setSizePolicy(sizePolicy);
        toolButtonStrings->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonStrings, 0, 5, 1, 1);

        toolButtonHash = new QToolButton(groupBoxTools);
        toolButtonHash->setObjectName(QString::fromUtf8("toolButtonHash"));
        sizePolicy.setHeightForWidth(toolButtonHash->sizePolicy().hasHeightForWidth());
        toolButtonHash->setSizePolicy(sizePolicy);
        toolButtonHash->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonHash, 1, 4, 1, 1);

        toolButtonDisasm = new QToolButton(groupBoxTools);
        toolButtonDisasm->setObjectName(QString::fromUtf8("toolButtonDisasm"));
        sizePolicy.setHeightForWidth(toolButtonDisasm->sizePolicy().hasHeightForWidth());
        toolButtonDisasm->setSizePolicy(sizePolicy);
        toolButtonDisasm->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonDisasm, 0, 3, 1, 1);

        toolButtonEntropy = new QToolButton(groupBoxTools);
        toolButtonEntropy->setObjectName(QString::fromUtf8("toolButtonEntropy"));
        sizePolicy.setHeightForWidth(toolButtonEntropy->sizePolicy().hasHeightForWidth());
        toolButtonEntropy->setSizePolicy(sizePolicy);
        toolButtonEntropy->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonEntropy, 1, 5, 1, 1);

        toolButtonExtractor = new QToolButton(groupBoxTools);
        toolButtonExtractor->setObjectName(QString::fromUtf8("toolButtonExtractor"));
        sizePolicy.setHeightForWidth(toolButtonExtractor->sizePolicy().hasHeightForWidth());
        toolButtonExtractor->setSizePolicy(sizePolicy);
        toolButtonExtractor->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonExtractor, 1, 6, 1, 1);

        toolButtonSignatures = new QToolButton(groupBoxTools);
        toolButtonSignatures->setObjectName(QString::fromUtf8("toolButtonSignatures"));
        sizePolicy.setHeightForWidth(toolButtonSignatures->sizePolicy().hasHeightForWidth());
        toolButtonSignatures->setSizePolicy(sizePolicy);
        toolButtonSignatures->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonSignatures, 0, 6, 1, 1);

        toolButtonMIME = new QToolButton(groupBoxTools);
        toolButtonMIME->setObjectName(QString::fromUtf8("toolButtonMIME"));
        sizePolicy.setHeightForWidth(toolButtonMIME->sizePolicy().hasHeightForWidth());
        toolButtonMIME->setSizePolicy(sizePolicy);
        toolButtonMIME->setText(QString::fromUtf8("MIME"));
        toolButtonMIME->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonMIME, 1, 0, 1, 1);

        toolButtonYARA = new QToolButton(groupBoxTools);
        toolButtonYARA->setObjectName(QString::fromUtf8("toolButtonYARA"));
        sizePolicy.setHeightForWidth(toolButtonYARA->sizePolicy().hasHeightForWidth());
        toolButtonYARA->setSizePolicy(sizePolicy);
        toolButtonYARA->setText(QString::fromUtf8("YARA"));
        toolButtonYARA->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonYARA, 1, 7, 1, 1);

        toolButtonHex = new QToolButton(groupBoxTools);
        toolButtonHex->setObjectName(QString::fromUtf8("toolButtonHex"));
        sizePolicy.setHeightForWidth(toolButtonHex->sizePolicy().hasHeightForWidth());
        toolButtonHex->setSizePolicy(sizePolicy);
        toolButtonHex->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonHex, 0, 4, 1, 1);

        toolButtonVisualization = new QToolButton(groupBoxTools);
        toolButtonVisualization->setObjectName(QString::fromUtf8("toolButtonVisualization"));
        sizePolicy.setHeightForWidth(toolButtonVisualization->sizePolicy().hasHeightForWidth());
        toolButtonVisualization->setSizePolicy(sizePolicy);
        toolButtonVisualization->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButtonVisualization, 1, 2, 1, 1);


        verticalLayout_3->addWidget(groupBoxTools);

        stackedWidgetMain = new QStackedWidget(FormatsWidget);
        stackedWidgetMain->setObjectName(QString::fromUtf8("stackedWidgetMain"));
        stackedWidgetMain->setMaximumSize(QSize(16777215, 150));
        stackedWidgetMain->setFrameShape(QFrame::NoFrame);
        pageBinary = new QWidget();
        pageBinary->setObjectName(QString::fromUtf8("pageBinary"));
        verticalLayout_21 = new QVBoxLayout(pageBinary);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        groupBoxBinary = new QGroupBox(pageBinary);
        groupBoxBinary->setObjectName(QString::fromUtf8("groupBoxBinary"));
        verticalLayout_17 = new QVBoxLayout(groupBoxBinary);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        toolButtonBinary = new QToolButton(groupBoxBinary);
        toolButtonBinary->setObjectName(QString::fromUtf8("toolButtonBinary"));
        toolButtonBinary->setText(QString::fromUtf8("Binary"));

        horizontalLayout_27->addWidget(toolButtonBinary);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_24);


        verticalLayout_17->addLayout(horizontalLayout_27);

        verticalSpacer_10 = new QSpacerItem(20, 105, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_10);


        verticalLayout_21->addWidget(groupBoxBinary);

        stackedWidgetMain->addWidget(pageBinary);
        pageArchive = new QWidget();
        pageArchive->setObjectName(QString::fromUtf8("pageArchive"));
        verticalLayout_28 = new QVBoxLayout(pageArchive);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        groupBoxArchive = new QGroupBox(pageArchive);
        groupBoxArchive->setObjectName(QString::fromUtf8("groupBoxArchive"));
        verticalLayout_15 = new QVBoxLayout(groupBoxArchive);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        toolButtonArchive = new QToolButton(groupBoxArchive);
        toolButtonArchive->setObjectName(QString::fromUtf8("toolButtonArchive"));
        toolButtonArchive->setEnabled(true);
        toolButtonArchive->setText(QString::fromUtf8(""));

        horizontalLayout_23->addWidget(toolButtonArchive);

        toolButtonMANIFESTMF = new QToolButton(groupBoxArchive);
        toolButtonMANIFESTMF->setObjectName(QString::fromUtf8("toolButtonMANIFESTMF"));
        toolButtonMANIFESTMF->setText(QString::fromUtf8("MANIFEST.MF"));

        horizontalLayout_23->addWidget(toolButtonMANIFESTMF);

        toolButtonAndroidManifest = new QToolButton(groupBoxArchive);
        toolButtonAndroidManifest->setObjectName(QString::fromUtf8("toolButtonAndroidManifest"));
        toolButtonAndroidManifest->setText(QString::fromUtf8("AndroidManifest.xml"));

        horizontalLayout_23->addWidget(toolButtonAndroidManifest);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_5);

        toolButtonFiles = new QToolButton(groupBoxArchive);
        toolButtonFiles->setObjectName(QString::fromUtf8("toolButtonFiles"));

        horizontalLayout_23->addWidget(toolButtonFiles);

        toolButtonUnpack = new QToolButton(groupBoxArchive);
        toolButtonUnpack->setObjectName(QString::fromUtf8("toolButtonUnpack"));

        horizontalLayout_23->addWidget(toolButtonUnpack);


        verticalLayout_15->addLayout(horizontalLayout_23);

        verticalSpacer_3 = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_3);


        verticalLayout_28->addWidget(groupBoxArchive);

        stackedWidgetMain->addWidget(pageArchive);
        pageCOM = new QWidget();
        pageCOM->setObjectName(QString::fromUtf8("pageCOM"));
        stackedWidgetMain->addWidget(pageCOM);
        pageDEX = new QWidget();
        pageDEX->setObjectName(QString::fromUtf8("pageDEX"));
        verticalLayout_19 = new QVBoxLayout(pageDEX);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        groupBoxDEX = new QGroupBox(pageDEX);
        groupBoxDEX->setObjectName(QString::fromUtf8("groupBoxDEX"));
        verticalLayout_14 = new QVBoxLayout(groupBoxDEX);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        toolButtonDEX = new QToolButton(groupBoxDEX);
        toolButtonDEX->setObjectName(QString::fromUtf8("toolButtonDEX"));
        toolButtonDEX->setText(QString::fromUtf8("DEX"));

        horizontalLayout_20->addWidget(toolButtonDEX);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_3);


        verticalLayout_14->addLayout(horizontalLayout_20);

        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer);


        verticalLayout_19->addWidget(groupBoxDEX);

        stackedWidgetMain->addWidget(pageDEX);
        pageNE = new QWidget();
        pageNE->setObjectName(QString::fromUtf8("pageNE"));
        verticalLayout_26 = new QVBoxLayout(pageNE);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        groupBoxNE = new QGroupBox(pageNE);
        groupBoxNE->setObjectName(QString::fromUtf8("groupBoxNE"));
        verticalLayout_7 = new QVBoxLayout(groupBoxNE);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        toolButtonNE = new QToolButton(groupBoxNE);
        toolButtonNE->setObjectName(QString::fromUtf8("toolButtonNE"));
        toolButtonNE->setText(QString::fromUtf8("NE"));

        horizontalLayout_11->addWidget(toolButtonNE);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);


        verticalLayout_7->addLayout(horizontalLayout_11);

        verticalSpacer_5 = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);


        verticalLayout_26->addWidget(groupBoxNE);

        stackedWidgetMain->addWidget(pageNE);
        pageLE = new QWidget();
        pageLE->setObjectName(QString::fromUtf8("pageLE"));
        verticalLayout_22 = new QVBoxLayout(pageLE);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        groupBoxLE = new QGroupBox(pageLE);
        groupBoxLE->setObjectName(QString::fromUtf8("groupBoxLE"));
        verticalLayout_8 = new QVBoxLayout(groupBoxLE);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        toolButtonLE = new QToolButton(groupBoxLE);
        toolButtonLE->setObjectName(QString::fromUtf8("toolButtonLE"));
        toolButtonLE->setText(QString::fromUtf8("LE"));

        horizontalLayout_12->addWidget(toolButtonLE);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);


        verticalLayout_8->addLayout(horizontalLayout_12);

        verticalSpacer_6 = new QSpacerItem(20, 105, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);


        verticalLayout_22->addWidget(groupBoxLE);

        stackedWidgetMain->addWidget(pageLE);
        pageMSDOS = new QWidget();
        pageMSDOS->setObjectName(QString::fromUtf8("pageMSDOS"));
        verticalLayout_25 = new QVBoxLayout(pageMSDOS);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        groupBoxMSDOS = new QGroupBox(pageMSDOS);
        groupBoxMSDOS->setObjectName(QString::fromUtf8("groupBoxMSDOS"));
        verticalLayout_4 = new QVBoxLayout(groupBoxMSDOS);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        toolButtonMSDOS = new QToolButton(groupBoxMSDOS);
        toolButtonMSDOS->setObjectName(QString::fromUtf8("toolButtonMSDOS"));
        toolButtonMSDOS->setText(QString::fromUtf8("MSDOS"));

        horizontalLayout_8->addWidget(toolButtonMSDOS);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        toolButtonMSDOSOverlay = new QToolButton(groupBoxMSDOS);
        toolButtonMSDOSOverlay->setObjectName(QString::fromUtf8("toolButtonMSDOSOverlay"));

        horizontalLayout_8->addWidget(toolButtonMSDOSOverlay);


        verticalLayout_4->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        verticalLayout_25->addWidget(groupBoxMSDOS);

        stackedWidgetMain->addWidget(pageMSDOS);
        pagePE = new QWidget();
        pagePE->setObjectName(QString::fromUtf8("pagePE"));
        verticalLayout_27 = new QVBoxLayout(pagePE);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        groupBoxPE = new QGroupBox(pagePE);
        groupBoxPE->setObjectName(QString::fromUtf8("groupBoxPE"));
        verticalLayout_2 = new QVBoxLayout(groupBoxPE);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        toolButtonPE = new QToolButton(groupBoxPE);
        toolButtonPE->setObjectName(QString::fromUtf8("toolButtonPE"));
        toolButtonPE->setText(QString::fromUtf8("PE"));

        horizontalLayout_4->addWidget(toolButtonPE);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        toolButtonPEExport = new QToolButton(groupBoxPE);
        toolButtonPEExport->setObjectName(QString::fromUtf8("toolButtonPEExport"));

        horizontalLayout_4->addWidget(toolButtonPEExport);

        toolButtonPEImport = new QToolButton(groupBoxPE);
        toolButtonPEImport->setObjectName(QString::fromUtf8("toolButtonPEImport"));

        horizontalLayout_4->addWidget(toolButtonPEImport);

        toolButtonPEResources = new QToolButton(groupBoxPE);
        toolButtonPEResources->setObjectName(QString::fromUtf8("toolButtonPEResources"));

        horizontalLayout_4->addWidget(toolButtonPEResources);

        toolButtonPENET = new QToolButton(groupBoxPE);
        toolButtonPENET->setObjectName(QString::fromUtf8("toolButtonPENET"));
        toolButtonPENET->setText(QString::fromUtf8(".NET"));

        horizontalLayout_4->addWidget(toolButtonPENET);

        toolButtonPETLS = new QToolButton(groupBoxPE);
        toolButtonPETLS->setObjectName(QString::fromUtf8("toolButtonPETLS"));
        toolButtonPETLS->setText(QString::fromUtf8("TLS"));

        horizontalLayout_4->addWidget(toolButtonPETLS);

        toolButtonPEOverlay = new QToolButton(groupBoxPE);
        toolButtonPEOverlay->setObjectName(QString::fromUtf8("toolButtonPEOverlay"));

        horizontalLayout_4->addWidget(toolButtonPEOverlay);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        groupBoxPESections = new QGroupBox(groupBoxPE);
        groupBoxPESections->setObjectName(QString::fromUtf8("groupBoxPESections"));
        horizontalLayout_5 = new QHBoxLayout(groupBoxPESections);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        lineEditPESections = new XLineEditHEX(groupBoxPESections);
        lineEditPESections->setObjectName(QString::fromUtf8("lineEditPESections"));
        lineEditPESections->setMinimumSize(QSize(80, 0));
        lineEditPESections->setAlignment(Qt::AlignCenter);
        lineEditPESections->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEditPESections);

        toolButtonPESections = new QToolButton(groupBoxPESections);
        toolButtonPESections->setObjectName(QString::fromUtf8("toolButtonPESections"));
        toolButtonPESections->setMinimumSize(QSize(30, 0));
        toolButtonPESections->setMaximumSize(QSize(30, 16777215));
        toolButtonPESections->setText(QString::fromUtf8(">"));

        horizontalLayout_5->addWidget(toolButtonPESections);


        horizontalLayout_6->addWidget(groupBoxPESections);

        groupBoxPETimeDateStamp = new QGroupBox(groupBoxPE);
        groupBoxPETimeDateStamp->setObjectName(QString::fromUtf8("groupBoxPETimeDateStamp"));
        horizontalLayout_40 = new QHBoxLayout(groupBoxPETimeDateStamp);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        horizontalLayout_40->setContentsMargins(2, 2, 2, 2);
        lineEditPETimeDateStamp = new XLineEditHEX(groupBoxPETimeDateStamp);
        lineEditPETimeDateStamp->setObjectName(QString::fromUtf8("lineEditPETimeDateStamp"));
        lineEditPETimeDateStamp->setMinimumSize(QSize(150, 0));
        lineEditPETimeDateStamp->setAlignment(Qt::AlignCenter);
        lineEditPETimeDateStamp->setReadOnly(true);

        horizontalLayout_40->addWidget(lineEditPETimeDateStamp);


        horizontalLayout_6->addWidget(groupBoxPETimeDateStamp);

        groupBoxPESizeOfImage = new QGroupBox(groupBoxPE);
        groupBoxPESizeOfImage->setObjectName(QString::fromUtf8("groupBoxPESizeOfImage"));
        horizontalLayout_41 = new QHBoxLayout(groupBoxPESizeOfImage);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        horizontalLayout_41->setContentsMargins(2, 2, 2, 2);
        lineEditPESizeOfImage = new XLineEditHEX(groupBoxPESizeOfImage);
        lineEditPESizeOfImage->setObjectName(QString::fromUtf8("lineEditPESizeOfImage"));
        lineEditPESizeOfImage->setMinimumSize(QSize(100, 0));
        lineEditPESizeOfImage->setAlignment(Qt::AlignCenter);
        lineEditPESizeOfImage->setReadOnly(true);

        horizontalLayout_41->addWidget(lineEditPESizeOfImage);


        horizontalLayout_6->addWidget(groupBoxPESizeOfImage);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_21);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_22);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        groupBoxPEResources = new QGroupBox(groupBoxPE);
        groupBoxPEResources->setObjectName(QString::fromUtf8("groupBoxPEResources"));
        horizontalLayout_19 = new QHBoxLayout(groupBoxPEResources);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(2, 2, 2, 2);
        toolButtonPEManifest = new QToolButton(groupBoxPEResources);
        toolButtonPEManifest->setObjectName(QString::fromUtf8("toolButtonPEManifest"));

        horizontalLayout_19->addWidget(toolButtonPEManifest);

        toolButtonPEVersion = new QToolButton(groupBoxPEResources);
        toolButtonPEVersion->setObjectName(QString::fromUtf8("toolButtonPEVersion"));

        horizontalLayout_19->addWidget(toolButtonPEVersion);


        horizontalLayout_6->addWidget(groupBoxPEResources);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);


        verticalLayout_27->addWidget(groupBoxPE);

        stackedWidgetMain->addWidget(pagePE);
        pageELF = new QWidget();
        pageELF->setObjectName(QString::fromUtf8("pageELF"));
        verticalLayout_20 = new QVBoxLayout(pageELF);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        groupBoxELF = new QGroupBox(pageELF);
        groupBoxELF->setObjectName(QString::fromUtf8("groupBoxELF"));
        verticalLayout_5 = new QVBoxLayout(groupBoxELF);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        toolButtonELF = new QToolButton(groupBoxELF);
        toolButtonELF->setObjectName(QString::fromUtf8("toolButtonELF"));
        toolButtonELF->setText(QString::fromUtf8("ELF"));

        horizontalLayout_9->addWidget(toolButtonELF);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        groupBoxELFPrograms = new QGroupBox(groupBoxELF);
        groupBoxELFPrograms->setObjectName(QString::fromUtf8("groupBoxELFPrograms"));
        horizontalLayout_16 = new QHBoxLayout(groupBoxELFPrograms);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(2, 2, 2, 2);
        lineEditELFPrograms = new XLineEditHEX(groupBoxELFPrograms);
        lineEditELFPrograms->setObjectName(QString::fromUtf8("lineEditELFPrograms"));
        lineEditELFPrograms->setMinimumSize(QSize(80, 0));
        lineEditELFPrograms->setMaximumSize(QSize(80, 16777215));
        lineEditELFPrograms->setAlignment(Qt::AlignCenter);
        lineEditELFPrograms->setReadOnly(true);

        horizontalLayout_16->addWidget(lineEditELFPrograms);

        toolButtonELFPrograms = new QToolButton(groupBoxELFPrograms);
        toolButtonELFPrograms->setObjectName(QString::fromUtf8("toolButtonELFPrograms"));
        toolButtonELFPrograms->setMinimumSize(QSize(30, 0));
        toolButtonELFPrograms->setMaximumSize(QSize(30, 16777215));
        toolButtonELFPrograms->setText(QString::fromUtf8(">"));

        horizontalLayout_16->addWidget(toolButtonELFPrograms);


        horizontalLayout_14->addWidget(groupBoxELFPrograms);

        groupBoxELFSections = new QGroupBox(groupBoxELF);
        groupBoxELFSections->setObjectName(QString::fromUtf8("groupBoxELFSections"));
        horizontalLayout_13 = new QHBoxLayout(groupBoxELFSections);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(2, 2, 2, 2);
        lineEditELFSections = new XLineEditHEX(groupBoxELFSections);
        lineEditELFSections->setObjectName(QString::fromUtf8("lineEditELFSections"));
        lineEditELFSections->setMinimumSize(QSize(80, 0));
        lineEditELFSections->setMaximumSize(QSize(80, 16777215));
        lineEditELFSections->setAlignment(Qt::AlignCenter);
        lineEditELFSections->setReadOnly(true);

        horizontalLayout_13->addWidget(lineEditELFSections);

        toolButtonELFSections = new QToolButton(groupBoxELFSections);
        toolButtonELFSections->setObjectName(QString::fromUtf8("toolButtonELFSections"));
        toolButtonELFSections->setMinimumSize(QSize(30, 0));
        toolButtonELFSections->setMaximumSize(QSize(30, 16777215));
        toolButtonELFSections->setText(QString::fromUtf8(">"));

        horizontalLayout_13->addWidget(toolButtonELFSections);


        horizontalLayout_14->addWidget(groupBoxELFSections);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_7);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_6);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);


        verticalLayout_5->addLayout(horizontalLayout_14);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);


        verticalLayout_20->addWidget(groupBoxELF);

        stackedWidgetMain->addWidget(pageELF);
        pageMACH = new QWidget();
        pageMACH->setObjectName(QString::fromUtf8("pageMACH"));
        verticalLayout_23 = new QVBoxLayout(pageMACH);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        groupBoxMACH = new QGroupBox(pageMACH);
        groupBoxMACH->setObjectName(QString::fromUtf8("groupBoxMACH"));
        verticalLayout_6 = new QVBoxLayout(groupBoxMACH);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        toolButtonMACH = new QToolButton(groupBoxMACH);
        toolButtonMACH->setObjectName(QString::fromUtf8("toolButtonMACH"));
        toolButtonMACH->setText(QString::fromUtf8("Mach-O"));

        horizontalLayout_10->addWidget(toolButtonMACH);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        groupBoxMACHCommands = new QGroupBox(groupBoxMACH);
        groupBoxMACHCommands->setObjectName(QString::fromUtf8("groupBoxMACHCommands"));
        horizontalLayout_21 = new QHBoxLayout(groupBoxMACHCommands);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(2, 2, 2, 2);
        lineEditMACHCommands = new XLineEditHEX(groupBoxMACHCommands);
        lineEditMACHCommands->setObjectName(QString::fromUtf8("lineEditMACHCommands"));
        lineEditMACHCommands->setMinimumSize(QSize(80, 0));
        lineEditMACHCommands->setMaximumSize(QSize(80, 16777215));
        lineEditMACHCommands->setAlignment(Qt::AlignCenter);
        lineEditMACHCommands->setReadOnly(true);

        horizontalLayout_21->addWidget(lineEditMACHCommands);

        toolButtonMACHCommands = new QToolButton(groupBoxMACHCommands);
        toolButtonMACHCommands->setObjectName(QString::fromUtf8("toolButtonMACHCommands"));
        toolButtonMACHCommands->setMinimumSize(QSize(30, 0));
        toolButtonMACHCommands->setMaximumSize(QSize(30, 16777215));
        toolButtonMACHCommands->setText(QString::fromUtf8(">"));

        horizontalLayout_21->addWidget(toolButtonMACHCommands);


        horizontalLayout_18->addWidget(groupBoxMACHCommands);

        groupBoxMACHSegments = new QGroupBox(groupBoxMACH);
        groupBoxMACHSegments->setObjectName(QString::fromUtf8("groupBoxMACHSegments"));
        horizontalLayout_17 = new QHBoxLayout(groupBoxMACHSegments);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(2, 2, 2, 2);
        lineEditMACHSegments = new XLineEditHEX(groupBoxMACHSegments);
        lineEditMACHSegments->setObjectName(QString::fromUtf8("lineEditMACHSegments"));
        lineEditMACHSegments->setMinimumSize(QSize(80, 0));
        lineEditMACHSegments->setMaximumSize(QSize(80, 16777215));
        lineEditMACHSegments->setAlignment(Qt::AlignCenter);
        lineEditMACHSegments->setReadOnly(true);

        horizontalLayout_17->addWidget(lineEditMACHSegments);

        toolButtonMACHSegments = new QToolButton(groupBoxMACHSegments);
        toolButtonMACHSegments->setObjectName(QString::fromUtf8("toolButtonMACHSegments"));
        toolButtonMACHSegments->setMinimumSize(QSize(30, 0));
        toolButtonMACHSegments->setMaximumSize(QSize(30, 16777215));
        toolButtonMACHSegments->setText(QString::fromUtf8(">"));

        horizontalLayout_17->addWidget(toolButtonMACHSegments);


        horizontalLayout_18->addWidget(groupBoxMACHSegments);

        groupBoxMACHSections = new QGroupBox(groupBoxMACH);
        groupBoxMACHSections->setObjectName(QString::fromUtf8("groupBoxMACHSections"));
        horizontalLayout_15 = new QHBoxLayout(groupBoxMACHSections);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(2, 2, 2, 2);
        lineEditMACHSections = new XLineEditHEX(groupBoxMACHSections);
        lineEditMACHSections->setObjectName(QString::fromUtf8("lineEditMACHSections"));
        lineEditMACHSections->setMinimumSize(QSize(80, 0));
        lineEditMACHSections->setMaximumSize(QSize(80, 16777215));
        lineEditMACHSections->setAlignment(Qt::AlignCenter);
        lineEditMACHSections->setReadOnly(true);

        horizontalLayout_15->addWidget(lineEditMACHSections);

        toolButtonMACHSections = new QToolButton(groupBoxMACHSections);
        toolButtonMACHSections->setObjectName(QString::fromUtf8("toolButtonMACHSections"));
        toolButtonMACHSections->setMinimumSize(QSize(30, 0));
        toolButtonMACHSections->setMaximumSize(QSize(30, 16777215));
        toolButtonMACHSections->setText(QString::fromUtf8(">"));

        horizontalLayout_15->addWidget(toolButtonMACHSections);


        horizontalLayout_18->addWidget(groupBoxMACHSections);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_17);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_16);

        groupBoxMACHLibraries = new QGroupBox(groupBoxMACH);
        groupBoxMACHLibraries->setObjectName(QString::fromUtf8("groupBoxMACHLibraries"));
        horizontalLayout_22 = new QHBoxLayout(groupBoxMACHLibraries);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(2, 2, 2, 2);
        lineEditMACHLibraries = new XLineEditHEX(groupBoxMACHLibraries);
        lineEditMACHLibraries->setObjectName(QString::fromUtf8("lineEditMACHLibraries"));
        lineEditMACHLibraries->setMinimumSize(QSize(80, 0));
        lineEditMACHLibraries->setMaximumSize(QSize(80, 16777215));
        lineEditMACHLibraries->setAlignment(Qt::AlignCenter);
        lineEditMACHLibraries->setReadOnly(true);

        horizontalLayout_22->addWidget(lineEditMACHLibraries);

        toolButtonMACHLibraries = new QToolButton(groupBoxMACHLibraries);
        toolButtonMACHLibraries->setObjectName(QString::fromUtf8("toolButtonMACHLibraries"));
        toolButtonMACHLibraries->setMinimumSize(QSize(30, 0));
        toolButtonMACHLibraries->setMaximumSize(QSize(30, 16777215));
        toolButtonMACHLibraries->setText(QString::fromUtf8(">"));

        horizontalLayout_22->addWidget(toolButtonMACHLibraries);


        horizontalLayout_18->addWidget(groupBoxMACHLibraries);


        verticalLayout_6->addLayout(horizontalLayout_18);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_8);


        verticalLayout_23->addWidget(groupBoxMACH);

        stackedWidgetMain->addWidget(pageMACH);

        verticalLayout_3->addWidget(stackedWidgetMain);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        groupBoxScanEngine = new QGroupBox(FormatsWidget);
        groupBoxScanEngine->setObjectName(QString::fromUtf8("groupBoxScanEngine"));
        groupBoxScanEngine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout_9 = new QVBoxLayout(groupBoxScanEngine);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(2, 2, 2, 2);
        comboBoxScanEngine = new QComboBox(groupBoxScanEngine);
        comboBoxScanEngine->setObjectName(QString::fromUtf8("comboBoxScanEngine"));
        comboBoxScanEngine->setMinimumSize(QSize(200, 0));

        verticalLayout_9->addWidget(comboBoxScanEngine);


        horizontalLayout_26->addWidget(groupBoxScanEngine);

        groupBoxEndianness = new QGroupBox(FormatsWidget);
        groupBoxEndianness->setObjectName(QString::fromUtf8("groupBoxEndianness"));
        groupBoxEndianness->setMaximumSize(QSize(80, 16777215));
        groupBoxEndianness->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout_12 = new QVBoxLayout(groupBoxEndianness);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(2, 2, 2, 2);
        lineEditEndianness = new QLineEdit(groupBoxEndianness);
        lineEditEndianness->setObjectName(QString::fromUtf8("lineEditEndianness"));
        lineEditEndianness->setAlignment(Qt::AlignCenter);
        lineEditEndianness->setReadOnly(true);

        verticalLayout_12->addWidget(lineEditEndianness);


        horizontalLayout_26->addWidget(groupBoxEndianness);

        groupBoxMode = new QGroupBox(FormatsWidget);
        groupBoxMode->setObjectName(QString::fromUtf8("groupBoxMode"));
        groupBoxMode->setMaximumSize(QSize(90, 16777215));
        groupBoxMode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout_11 = new QVBoxLayout(groupBoxMode);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(2, 2, 2, 2);
        lineEditMode = new QLineEdit(groupBoxMode);
        lineEditMode->setObjectName(QString::fromUtf8("lineEditMode"));
        lineEditMode->setAlignment(Qt::AlignCenter);
        lineEditMode->setReadOnly(true);

        verticalLayout_11->addWidget(lineEditMode);


        horizontalLayout_26->addWidget(groupBoxMode);

        groupBoxArch = new QGroupBox(FormatsWidget);
        groupBoxArch->setObjectName(QString::fromUtf8("groupBoxArch"));
        groupBoxArch->setMaximumSize(QSize(120, 16777215));
        groupBoxArch->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout_10 = new QVBoxLayout(groupBoxArch);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(2, 2, 2, 2);
        lineEditArch = new QLineEdit(groupBoxArch);
        lineEditArch->setObjectName(QString::fromUtf8("lineEditArch"));
        lineEditArch->setAlignment(Qt::AlignCenter);
        lineEditArch->setReadOnly(true);

        verticalLayout_10->addWidget(lineEditArch);


        horizontalLayout_26->addWidget(groupBoxArch);

        groupBoxType = new QGroupBox(FormatsWidget);
        groupBoxType->setObjectName(QString::fromUtf8("groupBoxType"));
        groupBoxType->setMaximumSize(QSize(120, 16777215));
        groupBoxType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout_13 = new QVBoxLayout(groupBoxType);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(2, 2, 2, 2);
        lineEditType = new QLineEdit(groupBoxType);
        lineEditType->setObjectName(QString::fromUtf8("lineEditType"));
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);

        verticalLayout_13->addWidget(lineEditType);


        horizontalLayout_26->addWidget(groupBoxType);


        verticalLayout_3->addLayout(horizontalLayout_26);

        stackedWidgetScan = new QStackedWidget(FormatsWidget);
        stackedWidgetScan->setObjectName(QString::fromUtf8("stackedWidgetScan"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidgetScan->sizePolicy().hasHeightForWidth());
        stackedWidgetScan->setSizePolicy(sizePolicy1);
        stackedWidgetScan->setMinimumSize(QSize(0, 120));
        pageScanDIE = new DIE_Widget();
        pageScanDIE->setObjectName(QString::fromUtf8("pageScanDIE"));
        stackedWidgetScan->addWidget(pageScanDIE);
        pageScanNFD = new NFD_Widget();
        pageScanNFD->setObjectName(QString::fromUtf8("pageScanNFD"));
        stackedWidgetScan->addWidget(pageScanNFD);
        pageScanYARA = new YARA_Widget();
        pageScanYARA->setObjectName(QString::fromUtf8("pageScanYARA"));
        stackedWidgetScan->addWidget(pageScanYARA);

        verticalLayout_3->addWidget(stackedWidgetScan);


        retranslateUi(FormatsWidget);

        stackedWidgetMain->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FormatsWidget);
    } // setupUi

    void retranslateUi(QWidget *FormatsWidget)
    {
        groupBoxFileType->setTitle(QCoreApplication::translate("FormatsWidget", "File type", nullptr));
        groupBoxFileSize->setTitle(QCoreApplication::translate("FormatsWidget", "File size", nullptr));
        groupBoxBaseAddress->setTitle(QCoreApplication::translate("FormatsWidget", "Base address", nullptr));
        groupBoxEntryPoint->setTitle(QCoreApplication::translate("FormatsWidget", "Entry point", nullptr));
        groupBoxTools->setTitle(QString());
        toolButtonMemoryMap->setText(QCoreApplication::translate("FormatsWidget", "Memory map", nullptr));
        toolButtonSearch->setText(QCoreApplication::translate("FormatsWidget", "Search", nullptr));
        toolButtonFileInfo->setText(QCoreApplication::translate("FormatsWidget", "File info", nullptr));
        toolButtonStrings->setText(QCoreApplication::translate("FormatsWidget", "Strings", nullptr));
        toolButtonHash->setText(QCoreApplication::translate("FormatsWidget", "Hash", nullptr));
        toolButtonDisasm->setText(QCoreApplication::translate("FormatsWidget", "Disasm", nullptr));
        toolButtonEntropy->setText(QCoreApplication::translate("FormatsWidget", "Entropy", nullptr));
        toolButtonExtractor->setText(QCoreApplication::translate("FormatsWidget", "Extractor", nullptr));
        toolButtonSignatures->setText(QCoreApplication::translate("FormatsWidget", "Signatures", nullptr));
        toolButtonHex->setText(QCoreApplication::translate("FormatsWidget", "Hex", nullptr));
        toolButtonVisualization->setText(QCoreApplication::translate("FormatsWidget", "Visualization", nullptr));
        groupBoxBinary->setTitle(QString());
        groupBoxArchive->setTitle(QString());
        toolButtonFiles->setText(QCoreApplication::translate("FormatsWidget", "Files", nullptr));
        toolButtonUnpack->setText(QCoreApplication::translate("FormatsWidget", "Unpack", nullptr));
        groupBoxDEX->setTitle(QString());
        groupBoxNE->setTitle(QString());
        groupBoxLE->setTitle(QString());
        groupBoxMSDOS->setTitle(QString());
        toolButtonMSDOSOverlay->setText(QCoreApplication::translate("FormatsWidget", "Overlay", nullptr));
        groupBoxPE->setTitle(QString());
        toolButtonPEExport->setText(QCoreApplication::translate("FormatsWidget", "Export", nullptr));
        toolButtonPEImport->setText(QCoreApplication::translate("FormatsWidget", "Import", nullptr));
        toolButtonPEResources->setText(QCoreApplication::translate("FormatsWidget", "Resources", nullptr));
        toolButtonPEOverlay->setText(QCoreApplication::translate("FormatsWidget", "Overlay", nullptr));
        groupBoxPESections->setTitle(QCoreApplication::translate("FormatsWidget", "Sections", nullptr));
        groupBoxPETimeDateStamp->setTitle(QCoreApplication::translate("FormatsWidget", "Time date stamp", nullptr));
        groupBoxPESizeOfImage->setTitle(QCoreApplication::translate("FormatsWidget", "Size of image", nullptr));
        groupBoxPEResources->setTitle(QCoreApplication::translate("FormatsWidget", "Resources", nullptr));
        toolButtonPEManifest->setText(QCoreApplication::translate("FormatsWidget", "Manifest", nullptr));
        toolButtonPEVersion->setText(QCoreApplication::translate("FormatsWidget", "Version", nullptr));
        groupBoxELF->setTitle(QString());
        groupBoxELFPrograms->setTitle(QCoreApplication::translate("FormatsWidget", "Programs", nullptr));
        groupBoxELFSections->setTitle(QCoreApplication::translate("FormatsWidget", "Sections", nullptr));
        groupBoxMACH->setTitle(QString());
        groupBoxMACHCommands->setTitle(QCoreApplication::translate("FormatsWidget", "Commands", nullptr));
        groupBoxMACHSegments->setTitle(QCoreApplication::translate("FormatsWidget", "Segments", nullptr));
        groupBoxMACHSections->setTitle(QCoreApplication::translate("FormatsWidget", "Sections", nullptr));
        groupBoxMACHLibraries->setTitle(QCoreApplication::translate("FormatsWidget", "Libraries", nullptr));
        groupBoxScanEngine->setTitle(QCoreApplication::translate("FormatsWidget", "Scan", nullptr));
        groupBoxEndianness->setTitle(QCoreApplication::translate("FormatsWidget", "Endianness", nullptr));
        groupBoxMode->setTitle(QCoreApplication::translate("FormatsWidget", "Mode", nullptr));
        groupBoxArch->setTitle(QCoreApplication::translate("FormatsWidget", "Architecture", nullptr));
        groupBoxType->setTitle(QCoreApplication::translate("FormatsWidget", "Type", nullptr));
        (void)FormatsWidget;
    } // retranslateUi

};

namespace Ui {
    class FormatsWidget: public Ui_FormatsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMATSWIDGET_H
