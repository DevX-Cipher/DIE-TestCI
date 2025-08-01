/********************************************************************************
** Form generated from reading UI file 'xoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XOPTIONSWIDGET_H
#define UI_XOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QListWidget *listWidgetOptions;
    QStackedWidget *stackedWidgetOptions;
    QWidget *pageView;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollAreaView;
    QWidget *scrollAreaWidgetView;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *checkBoxViewStayOnTop;
    QCheckBox *checkBoxViewSingleApplication;
    QGroupBox *groupBoxViewStyle;
    QVBoxLayout *verticalLayout_4;
    QComboBox *comboBoxViewStyle;
    QGroupBox *groupBoxViewQss;
    QVBoxLayout *verticalLayout_7;
    QComboBox *comboBoxViewQss;
    QGroupBox *groupBoxViewLanguage;
    QVBoxLayout *verticalLayout_5;
    QComboBox *comboBoxViewLanguage;
    QCheckBox *checkBoxViewShowLogo;
    QSpacerItem *verticalSpacer;
    QWidget *pageFile;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollAreaFile;
    QWidget *scrollAreaWidgetFile;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkBoxFileSaveLastDirectory;
    QCheckBox *checkBoxFileSaveBackup;
    QCheckBox *checkBoxFileSaveHistory;
    QCheckBox *checkBoxFileContext;
    QCheckBox *checkBoxFileSetEnvVar;
    QCheckBox *checkBoxEnableTrayMonitoring;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageFonts;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBoxViewFontControls;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditViewFontControls;
    QToolButton *toolButtonViewFontControls;
    QGroupBox *groupBoxViewFontTables;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditViewFontTables;
    QToolButton *toolButtonViewFontTables;
    QGroupBox *groupBoxViewFontTrees;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEditViewFontTrees;
    QToolButton *toolButtonViewFontTrees;
    QGroupBox *groupBoxHexFont;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEditHexFont;
    QToolButton *toolButtonHexFont;
    QGroupBox *groupBoxDisasmFont;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditDisasmFont;
    QToolButton *toolButtonDisasmFont;
    QGroupBox *groupBoxViewFontTextEdits;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEditViewFontTextEdits;
    QToolButton *toolButtonViewFontTextEdits;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonDefault;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QWidget *XOptionsWidget)
    {
        if (XOptionsWidget->objectName().isEmpty())
            XOptionsWidget->setObjectName("XOptionsWidget");
        XOptionsWidget->resize(621, 416);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XOptionsWidget->sizePolicy().hasHeightForWidth());
        XOptionsWidget->setSizePolicy(sizePolicy);
        XOptionsWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(XOptionsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(XOptionsWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        listWidgetOptions = new QListWidget(splitter);
        listWidgetOptions->setObjectName("listWidgetOptions");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidgetOptions->sizePolicy().hasHeightForWidth());
        listWidgetOptions->setSizePolicy(sizePolicy1);
        listWidgetOptions->setBaseSize(QSize(200, 100));
        splitter->addWidget(listWidgetOptions);
        stackedWidgetOptions = new QStackedWidget(splitter);
        stackedWidgetOptions->setObjectName("stackedWidgetOptions");
        sizePolicy.setHeightForWidth(stackedWidgetOptions->sizePolicy().hasHeightForWidth());
        stackedWidgetOptions->setSizePolicy(sizePolicy);
        pageView = new QWidget();
        pageView->setObjectName("pageView");
        verticalLayout_2 = new QVBoxLayout(pageView);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollAreaView = new QScrollArea(pageView);
        scrollAreaView->setObjectName("scrollAreaView");
        scrollAreaView->setFrameShape(QFrame::NoFrame);
        scrollAreaView->setFrameShadow(QFrame::Plain);
        scrollAreaView->setWidgetResizable(true);
        scrollAreaWidgetView = new QWidget();
        scrollAreaWidgetView->setObjectName("scrollAreaWidgetView");
        scrollAreaWidgetView->setGeometry(QRect(0, 0, 258, 383));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetView);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        checkBoxViewStayOnTop = new QCheckBox(scrollAreaWidgetView);
        checkBoxViewStayOnTop->setObjectName("checkBoxViewStayOnTop");

        verticalLayout_8->addWidget(checkBoxViewStayOnTop);

        checkBoxViewSingleApplication = new QCheckBox(scrollAreaWidgetView);
        checkBoxViewSingleApplication->setObjectName("checkBoxViewSingleApplication");

        verticalLayout_8->addWidget(checkBoxViewSingleApplication);

        groupBoxViewStyle = new QGroupBox(scrollAreaWidgetView);
        groupBoxViewStyle->setObjectName("groupBoxViewStyle");
        verticalLayout_4 = new QVBoxLayout(groupBoxViewStyle);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(2, 2, 2, 6);
        comboBoxViewStyle = new QComboBox(groupBoxViewStyle);
        comboBoxViewStyle->setObjectName("comboBoxViewStyle");

        verticalLayout_4->addWidget(comboBoxViewStyle);


        verticalLayout_8->addWidget(groupBoxViewStyle);

        groupBoxViewQss = new QGroupBox(scrollAreaWidgetView);
        groupBoxViewQss->setObjectName("groupBoxViewQss");
        groupBoxViewQss->setTitle(QString::fromUtf8("QSS"));
        verticalLayout_7 = new QVBoxLayout(groupBoxViewQss);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(2, 2, 2, 2);
        comboBoxViewQss = new QComboBox(groupBoxViewQss);
        comboBoxViewQss->setObjectName("comboBoxViewQss");

        verticalLayout_7->addWidget(comboBoxViewQss);


        verticalLayout_8->addWidget(groupBoxViewQss);

        groupBoxViewLanguage = new QGroupBox(scrollAreaWidgetView);
        groupBoxViewLanguage->setObjectName("groupBoxViewLanguage");
        verticalLayout_5 = new QVBoxLayout(groupBoxViewLanguage);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(2, 2, 2, 2);
        comboBoxViewLanguage = new QComboBox(groupBoxViewLanguage);
        comboBoxViewLanguage->setObjectName("comboBoxViewLanguage");

        verticalLayout_5->addWidget(comboBoxViewLanguage);


        verticalLayout_8->addWidget(groupBoxViewLanguage);

        checkBoxViewShowLogo = new QCheckBox(scrollAreaWidgetView);
        checkBoxViewShowLogo->setObjectName("checkBoxViewShowLogo");

        verticalLayout_8->addWidget(checkBoxViewShowLogo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        scrollAreaView->setWidget(scrollAreaWidgetView);

        verticalLayout_2->addWidget(scrollAreaView);

        stackedWidgetOptions->addWidget(pageView);
        pageFile = new QWidget();
        pageFile->setObjectName("pageFile");
        verticalLayout_3 = new QVBoxLayout(pageFile);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollAreaFile = new QScrollArea(pageFile);
        scrollAreaFile->setObjectName("scrollAreaFile");
        scrollAreaFile->setFrameShape(QFrame::NoFrame);
        scrollAreaFile->setFrameShadow(QFrame::Plain);
        scrollAreaFile->setWidgetResizable(true);
        scrollAreaWidgetFile = new QWidget();
        scrollAreaWidgetFile->setObjectName("scrollAreaWidgetFile");
        scrollAreaWidgetFile->setGeometry(QRect(0, 0, 169, 125));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetFile);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, -1, 0, 0);
        checkBoxFileSaveLastDirectory = new QCheckBox(scrollAreaWidgetFile);
        checkBoxFileSaveLastDirectory->setObjectName("checkBoxFileSaveLastDirectory");

        verticalLayout_6->addWidget(checkBoxFileSaveLastDirectory);

        checkBoxFileSaveBackup = new QCheckBox(scrollAreaWidgetFile);
        checkBoxFileSaveBackup->setObjectName("checkBoxFileSaveBackup");

        verticalLayout_6->addWidget(checkBoxFileSaveBackup);

        checkBoxFileSaveHistory = new QCheckBox(scrollAreaWidgetFile);
        checkBoxFileSaveHistory->setObjectName("checkBoxFileSaveHistory");

        verticalLayout_6->addWidget(checkBoxFileSaveHistory);

        checkBoxFileContext = new QCheckBox(scrollAreaWidgetFile);
        checkBoxFileContext->setObjectName("checkBoxFileContext");

        verticalLayout_6->addWidget(checkBoxFileContext);

        checkBoxFileSetEnvVar = new QCheckBox(scrollAreaWidgetFile);
        checkBoxFileSetEnvVar->setObjectName("checkBoxFileSetEnvVar");

        verticalLayout_6->addWidget(checkBoxFileSetEnvVar);

        checkBoxEnableTrayMonitoring = new QCheckBox(scrollAreaWidgetFile);
        checkBoxEnableTrayMonitoring->setObjectName("checkBoxEnableTrayMonitoring");

        verticalLayout_6->addWidget(checkBoxEnableTrayMonitoring);

        verticalSpacer_2 = new QSpacerItem(20, 248, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        scrollAreaFile->setWidget(scrollAreaWidgetFile);

        verticalLayout_3->addWidget(scrollAreaFile);

        stackedWidgetOptions->addWidget(pageFile);
        pageFonts = new QWidget();
        pageFonts->setObjectName("pageFonts");
        verticalLayout_9 = new QVBoxLayout(pageFonts);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        groupBoxViewFontControls = new QGroupBox(pageFonts);
        groupBoxViewFontControls->setObjectName("groupBoxViewFontControls");
        horizontalLayout_3 = new QHBoxLayout(groupBoxViewFontControls);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        lineEditViewFontControls = new QLineEdit(groupBoxViewFontControls);
        lineEditViewFontControls->setObjectName("lineEditViewFontControls");
        lineEditViewFontControls->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditViewFontControls);

        toolButtonViewFontControls = new QToolButton(groupBoxViewFontControls);
        toolButtonViewFontControls->setObjectName("toolButtonViewFontControls");
        toolButtonViewFontControls->setText(QString::fromUtf8("..."));

        horizontalLayout_3->addWidget(toolButtonViewFontControls);


        verticalLayout_9->addWidget(groupBoxViewFontControls);

        groupBoxViewFontTables = new QGroupBox(pageFonts);
        groupBoxViewFontTables->setObjectName("groupBoxViewFontTables");
        horizontalLayout_4 = new QHBoxLayout(groupBoxViewFontTables);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        lineEditViewFontTables = new QLineEdit(groupBoxViewFontTables);
        lineEditViewFontTables->setObjectName("lineEditViewFontTables");
        lineEditViewFontTables->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEditViewFontTables);

        toolButtonViewFontTables = new QToolButton(groupBoxViewFontTables);
        toolButtonViewFontTables->setObjectName("toolButtonViewFontTables");
        toolButtonViewFontTables->setText(QString::fromUtf8("..."));

        horizontalLayout_4->addWidget(toolButtonViewFontTables);


        verticalLayout_9->addWidget(groupBoxViewFontTables);

        groupBoxViewFontTrees = new QGroupBox(pageFonts);
        groupBoxViewFontTrees->setObjectName("groupBoxViewFontTrees");
        horizontalLayout_6 = new QHBoxLayout(groupBoxViewFontTrees);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        lineEditViewFontTrees = new QLineEdit(groupBoxViewFontTrees);
        lineEditViewFontTrees->setObjectName("lineEditViewFontTrees");
        lineEditViewFontTrees->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEditViewFontTrees);

        toolButtonViewFontTrees = new QToolButton(groupBoxViewFontTrees);
        toolButtonViewFontTrees->setObjectName("toolButtonViewFontTrees");
        toolButtonViewFontTrees->setText(QString::fromUtf8("..."));

        horizontalLayout_6->addWidget(toolButtonViewFontTrees);


        verticalLayout_9->addWidget(groupBoxViewFontTrees);

        groupBoxHexFont = new QGroupBox(pageFonts);
        groupBoxHexFont->setObjectName("groupBoxHexFont");
        horizontalLayout_5 = new QHBoxLayout(groupBoxHexFont);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        lineEditHexFont = new QLineEdit(groupBoxHexFont);
        lineEditHexFont->setObjectName("lineEditHexFont");
        lineEditHexFont->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEditHexFont);

        toolButtonHexFont = new QToolButton(groupBoxHexFont);
        toolButtonHexFont->setObjectName("toolButtonHexFont");
        toolButtonHexFont->setText(QString::fromUtf8("..."));

        horizontalLayout_5->addWidget(toolButtonHexFont);


        verticalLayout_9->addWidget(groupBoxHexFont);

        groupBoxDisasmFont = new QGroupBox(pageFonts);
        groupBoxDisasmFont->setObjectName("groupBoxDisasmFont");
        horizontalLayout = new QHBoxLayout(groupBoxDisasmFont);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        lineEditDisasmFont = new QLineEdit(groupBoxDisasmFont);
        lineEditDisasmFont->setObjectName("lineEditDisasmFont");
        lineEditDisasmFont->setReadOnly(true);

        horizontalLayout->addWidget(lineEditDisasmFont);

        toolButtonDisasmFont = new QToolButton(groupBoxDisasmFont);
        toolButtonDisasmFont->setObjectName("toolButtonDisasmFont");
        toolButtonDisasmFont->setText(QString::fromUtf8("..."));

        horizontalLayout->addWidget(toolButtonDisasmFont);


        verticalLayout_9->addWidget(groupBoxDisasmFont);

        groupBoxViewFontTextEdits = new QGroupBox(pageFonts);
        groupBoxViewFontTextEdits->setObjectName("groupBoxViewFontTextEdits");
        horizontalLayout_7 = new QHBoxLayout(groupBoxViewFontTextEdits);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(2, 2, 2, 2);
        lineEditViewFontTextEdits = new QLineEdit(groupBoxViewFontTextEdits);
        lineEditViewFontTextEdits->setObjectName("lineEditViewFontTextEdits");
        lineEditViewFontTextEdits->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEditViewFontTextEdits);

        toolButtonViewFontTextEdits = new QToolButton(groupBoxViewFontTextEdits);
        toolButtonViewFontTextEdits->setObjectName("toolButtonViewFontTextEdits");
        toolButtonViewFontTextEdits->setText(QString::fromUtf8("..."));

        horizontalLayout_7->addWidget(toolButtonViewFontTextEdits);


        verticalLayout_9->addWidget(groupBoxViewFontTextEdits);

        verticalSpacer_3 = new QSpacerItem(20, 258, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);

        stackedWidgetOptions->addWidget(pageFonts);
        splitter->addWidget(stackedWidgetOptions);

        verticalLayout->addWidget(splitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonDefault = new QPushButton(XOptionsWidget);
        pushButtonDefault->setObjectName("pushButtonDefault");

        horizontalLayout_2->addWidget(pushButtonDefault);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(XOptionsWidget);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout_2->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(XOptionsWidget);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout_2->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(XOptionsWidget);

        stackedWidgetOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *XOptionsWidget)
    {
        checkBoxViewStayOnTop->setText(QCoreApplication::translate("XOptionsWidget", "Stay on top", nullptr));
        checkBoxViewSingleApplication->setText(QCoreApplication::translate("XOptionsWidget", "Single application", nullptr));
        groupBoxViewStyle->setTitle(QCoreApplication::translate("XOptionsWidget", "Style", nullptr));
        groupBoxViewLanguage->setTitle(QCoreApplication::translate("XOptionsWidget", "Language", nullptr));
        checkBoxViewShowLogo->setText(QCoreApplication::translate("XOptionsWidget", "Show logo", nullptr));
        checkBoxFileSaveLastDirectory->setText(QCoreApplication::translate("XOptionsWidget", "Save last directory", nullptr));
        checkBoxFileSaveBackup->setText(QCoreApplication::translate("XOptionsWidget", "Save backup", nullptr));
        checkBoxFileSaveHistory->setText(QCoreApplication::translate("XOptionsWidget", "Save history", nullptr));
        checkBoxFileContext->setText(QCoreApplication::translate("XOptionsWidget", "Add to context menu", nullptr));
        checkBoxFileSetEnvVar->setText(QCoreApplication::translate("XOptionsWidget", "Set system environment variable", nullptr));
        checkBoxEnableTrayMonitoring->setText(QCoreApplication::translate("XOptionsWidget", "Enable tray monitoring", nullptr));
        groupBoxViewFontControls->setTitle(QCoreApplication::translate("XOptionsWidget", "Controls", nullptr));
        groupBoxViewFontTables->setTitle(QCoreApplication::translate("XOptionsWidget", "Table views", nullptr));
        groupBoxViewFontTrees->setTitle(QCoreApplication::translate("XOptionsWidget", "Tree views", nullptr));
        groupBoxHexFont->setTitle(QCoreApplication::translate("XOptionsWidget", "Hex", nullptr));
        groupBoxDisasmFont->setTitle(QCoreApplication::translate("XOptionsWidget", "Disasm", nullptr));
        groupBoxViewFontTextEdits->setTitle(QCoreApplication::translate("XOptionsWidget", "Text editors", nullptr));
        pushButtonDefault->setText(QCoreApplication::translate("XOptionsWidget", "Default", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("XOptionsWidget", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("XOptionsWidget", "Cancel", nullptr));
        (void)XOptionsWidget;
    } // retranslateUi

};

namespace Ui {
    class XOptionsWidget: public Ui_XOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XOPTIONSWIDGET_H
