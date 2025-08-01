/********************************************************************************
** Form generated from reading UI file 'dieoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIEOPTIONSWIDGET_H
#define UI_DIEOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DIEOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollAreaDIE;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBoxScanAfterOpen;
    QGroupBox *groupBoxScanFlags;
    QFormLayout *formLayout;
    QCheckBox *checkBoxRecursiveScan;
    QCheckBox *checkBoxAggressiveScan;
    QCheckBox *checkBoxDeepScan;
    QCheckBox *checkBoxVerbose;
    QCheckBox *checkBoxHeuristicScan;
    QCheckBox *checkBoxAllTypesScan;
    QGroupBox *groupBoxFlags2;
    QFormLayout *formLayout_2;
    QCheckBox *checkBoxSort;
    QCheckBox *checkBoxHighlight;
    QCheckBox *checkBoxFormatResult;
    QCheckBox *checkBoxProfiling;
    QCheckBox *checkBoxHideUnknown;
    QGroupBox *groupBoxBufferSize;
    QVBoxLayout *verticalLayout_10;
    QComboBox *comboBoxBufferSize;
    QGroupBox *groupBoxScanEngine;
    QVBoxLayout *verticalLayout_9;
    QComboBox *comboBoxScanEngine;
    QGroupBox *groupBoxDIEDatabase;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditDIEDatabase;
    QToolButton *toolButtonDIEDatabase;
    QGroupBox *groupBoxDIEDatabaseExtra;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEditDIEDatabaseExtra;
    QToolButton *toolButtonDIEDatabaseExtra;
    QGroupBox *groupBoxDIEDatabaseCustom;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEditDIEDatabaseCustom;
    QToolButton *toolButtonDIEDatabaseCustom;
    QGroupBox *groupBoxYaraRules;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditYaraRules;
    QToolButton *toolButtonYaraRules;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DIEOptionsWidget)
    {
        if (DIEOptionsWidget->objectName().isEmpty())
            DIEOptionsWidget->setObjectName("DIEOptionsWidget");
        DIEOptionsWidget->resize(466, 567);
        DIEOptionsWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(DIEOptionsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollAreaDIE = new QScrollArea(DIEOptionsWidget);
        scrollAreaDIE->setObjectName("scrollAreaDIE");
        scrollAreaDIE->setFrameShape(QFrame::Shape::NoFrame);
        scrollAreaDIE->setFrameShadow(QFrame::Shadow::Plain);
        scrollAreaDIE->setLineWidth(0);
        scrollAreaDIE->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 466, 567));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBoxScanAfterOpen = new QCheckBox(scrollAreaWidgetContents);
        checkBoxScanAfterOpen->setObjectName("checkBoxScanAfterOpen");

        verticalLayout_3->addWidget(checkBoxScanAfterOpen);

        groupBoxScanFlags = new QGroupBox(scrollAreaWidgetContents);
        groupBoxScanFlags->setObjectName("groupBoxScanFlags");
        formLayout = new QFormLayout(groupBoxScanFlags);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(1, 1, 1, 1);
        checkBoxRecursiveScan = new QCheckBox(groupBoxScanFlags);
        checkBoxRecursiveScan->setObjectName("checkBoxRecursiveScan");

        formLayout->setWidget(0, QFormLayout::LabelRole, checkBoxRecursiveScan);

        checkBoxAggressiveScan = new QCheckBox(groupBoxScanFlags);
        checkBoxAggressiveScan->setObjectName("checkBoxAggressiveScan");

        formLayout->setWidget(0, QFormLayout::FieldRole, checkBoxAggressiveScan);

        checkBoxDeepScan = new QCheckBox(groupBoxScanFlags);
        checkBoxDeepScan->setObjectName("checkBoxDeepScan");

        formLayout->setWidget(1, QFormLayout::LabelRole, checkBoxDeepScan);

        checkBoxVerbose = new QCheckBox(groupBoxScanFlags);
        checkBoxVerbose->setObjectName("checkBoxVerbose");

        formLayout->setWidget(1, QFormLayout::FieldRole, checkBoxVerbose);

        checkBoxHeuristicScan = new QCheckBox(groupBoxScanFlags);
        checkBoxHeuristicScan->setObjectName("checkBoxHeuristicScan");

        formLayout->setWidget(2, QFormLayout::LabelRole, checkBoxHeuristicScan);

        checkBoxAllTypesScan = new QCheckBox(groupBoxScanFlags);
        checkBoxAllTypesScan->setObjectName("checkBoxAllTypesScan");

        formLayout->setWidget(2, QFormLayout::FieldRole, checkBoxAllTypesScan);


        verticalLayout_3->addWidget(groupBoxScanFlags);

        groupBoxFlags2 = new QGroupBox(scrollAreaWidgetContents);
        groupBoxFlags2->setObjectName("groupBoxFlags2");
        groupBoxFlags2->setMinimumSize(QSize(0, 50));
        formLayout_2 = new QFormLayout(groupBoxFlags2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(1, 1, 1, 1);
        checkBoxSort = new QCheckBox(groupBoxFlags2);
        checkBoxSort->setObjectName("checkBoxSort");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, checkBoxSort);

        checkBoxHighlight = new QCheckBox(groupBoxFlags2);
        checkBoxHighlight->setObjectName("checkBoxHighlight");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, checkBoxHighlight);

        checkBoxFormatResult = new QCheckBox(groupBoxFlags2);
        checkBoxFormatResult->setObjectName("checkBoxFormatResult");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, checkBoxFormatResult);

        checkBoxProfiling = new QCheckBox(groupBoxFlags2);
        checkBoxProfiling->setObjectName("checkBoxProfiling");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, checkBoxProfiling);

        checkBoxHideUnknown = new QCheckBox(groupBoxFlags2);
        checkBoxHideUnknown->setObjectName("checkBoxHideUnknown");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, checkBoxHideUnknown);


        verticalLayout_3->addWidget(groupBoxFlags2);

        groupBoxBufferSize = new QGroupBox(scrollAreaWidgetContents);
        groupBoxBufferSize->setObjectName("groupBoxBufferSize");
        groupBoxBufferSize->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        verticalLayout_10 = new QVBoxLayout(groupBoxBufferSize);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(2, 2, 2, 2);
        comboBoxBufferSize = new QComboBox(groupBoxBufferSize);
        comboBoxBufferSize->setObjectName("comboBoxBufferSize");
        comboBoxBufferSize->setMinimumSize(QSize(200, 0));

        verticalLayout_10->addWidget(comboBoxBufferSize);


        verticalLayout_3->addWidget(groupBoxBufferSize);

        groupBoxScanEngine = new QGroupBox(scrollAreaWidgetContents);
        groupBoxScanEngine->setObjectName("groupBoxScanEngine");
        groupBoxScanEngine->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        verticalLayout_9 = new QVBoxLayout(groupBoxScanEngine);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(2, 2, 2, 2);
        comboBoxScanEngine = new QComboBox(groupBoxScanEngine);
        comboBoxScanEngine->setObjectName("comboBoxScanEngine");
        comboBoxScanEngine->setMinimumSize(QSize(200, 0));

        verticalLayout_9->addWidget(comboBoxScanEngine);


        verticalLayout_3->addWidget(groupBoxScanEngine);

        groupBoxDIEDatabase = new QGroupBox(scrollAreaWidgetContents);
        groupBoxDIEDatabase->setObjectName("groupBoxDIEDatabase");
        horizontalLayout_3 = new QHBoxLayout(groupBoxDIEDatabase);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        lineEditDIEDatabase = new QLineEdit(groupBoxDIEDatabase);
        lineEditDIEDatabase->setObjectName("lineEditDIEDatabase");

        horizontalLayout_3->addWidget(lineEditDIEDatabase);

        toolButtonDIEDatabase = new QToolButton(groupBoxDIEDatabase);
        toolButtonDIEDatabase->setObjectName("toolButtonDIEDatabase");
        toolButtonDIEDatabase->setText(QString::fromUtf8("..."));

        horizontalLayout_3->addWidget(toolButtonDIEDatabase);


        verticalLayout_3->addWidget(groupBoxDIEDatabase);

        groupBoxDIEDatabaseExtra = new QGroupBox(scrollAreaWidgetContents);
        groupBoxDIEDatabaseExtra->setObjectName("groupBoxDIEDatabaseExtra");
        groupBoxDIEDatabaseExtra->setCheckable(true);
        horizontalLayout_6 = new QHBoxLayout(groupBoxDIEDatabaseExtra);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        lineEditDIEDatabaseExtra = new QLineEdit(groupBoxDIEDatabaseExtra);
        lineEditDIEDatabaseExtra->setObjectName("lineEditDIEDatabaseExtra");

        horizontalLayout_6->addWidget(lineEditDIEDatabaseExtra);

        toolButtonDIEDatabaseExtra = new QToolButton(groupBoxDIEDatabaseExtra);
        toolButtonDIEDatabaseExtra->setObjectName("toolButtonDIEDatabaseExtra");
        toolButtonDIEDatabaseExtra->setText(QString::fromUtf8("..."));

        horizontalLayout_6->addWidget(toolButtonDIEDatabaseExtra);


        verticalLayout_3->addWidget(groupBoxDIEDatabaseExtra);

        groupBoxDIEDatabaseCustom = new QGroupBox(scrollAreaWidgetContents);
        groupBoxDIEDatabaseCustom->setObjectName("groupBoxDIEDatabaseCustom");
        groupBoxDIEDatabaseCustom->setCheckable(true);
        horizontalLayout_5 = new QHBoxLayout(groupBoxDIEDatabaseCustom);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        lineEditDIEDatabaseCustom = new QLineEdit(groupBoxDIEDatabaseCustom);
        lineEditDIEDatabaseCustom->setObjectName("lineEditDIEDatabaseCustom");

        horizontalLayout_5->addWidget(lineEditDIEDatabaseCustom);

        toolButtonDIEDatabaseCustom = new QToolButton(groupBoxDIEDatabaseCustom);
        toolButtonDIEDatabaseCustom->setObjectName("toolButtonDIEDatabaseCustom");
        toolButtonDIEDatabaseCustom->setText(QString::fromUtf8("..."));

        horizontalLayout_5->addWidget(toolButtonDIEDatabaseCustom);


        verticalLayout_3->addWidget(groupBoxDIEDatabaseCustom);

        groupBoxYaraRules = new QGroupBox(scrollAreaWidgetContents);
        groupBoxYaraRules->setObjectName("groupBoxYaraRules");
        groupBoxYaraRules->setTitle(QString::fromUtf8("YARA"));
        horizontalLayout_4 = new QHBoxLayout(groupBoxYaraRules);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        lineEditYaraRules = new QLineEdit(groupBoxYaraRules);
        lineEditYaraRules->setObjectName("lineEditYaraRules");

        horizontalLayout_4->addWidget(lineEditYaraRules);

        toolButtonYaraRules = new QToolButton(groupBoxYaraRules);
        toolButtonYaraRules->setObjectName("toolButtonYaraRules");
        toolButtonYaraRules->setText(QString::fromUtf8("..."));

        horizontalLayout_4->addWidget(toolButtonYaraRules);


        verticalLayout_3->addWidget(groupBoxYaraRules);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollAreaDIE->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollAreaDIE);


        retranslateUi(DIEOptionsWidget);

        QMetaObject::connectSlotsByName(DIEOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *DIEOptionsWidget)
    {
        checkBoxScanAfterOpen->setText(QCoreApplication::translate("DIEOptionsWidget", "Scan after open", nullptr));
        groupBoxScanFlags->setTitle(QCoreApplication::translate("DIEOptionsWidget", "Flags", nullptr));
        checkBoxRecursiveScan->setText(QCoreApplication::translate("DIEOptionsWidget", "Recursive scan", nullptr));
        checkBoxAggressiveScan->setText(QCoreApplication::translate("DIEOptionsWidget", "Aggressive scan", nullptr));
        checkBoxDeepScan->setText(QCoreApplication::translate("DIEOptionsWidget", "Deep scan", nullptr));
        checkBoxVerbose->setText(QCoreApplication::translate("DIEOptionsWidget", "Verbose", nullptr));
        checkBoxHeuristicScan->setText(QCoreApplication::translate("DIEOptionsWidget", "Heuristic scan", nullptr));
        checkBoxAllTypesScan->setText(QCoreApplication::translate("DIEOptionsWidget", "All types", nullptr));
        groupBoxFlags2->setTitle(QString());
        checkBoxSort->setText(QCoreApplication::translate("DIEOptionsWidget", "Sort", nullptr));
        checkBoxHighlight->setText(QCoreApplication::translate("DIEOptionsWidget", "Highlight", nullptr));
        checkBoxFormatResult->setText(QCoreApplication::translate("DIEOptionsWidget", "Format result", nullptr));
        checkBoxProfiling->setText(QCoreApplication::translate("DIEOptionsWidget", "Profiling", nullptr));
        checkBoxHideUnknown->setText(QCoreApplication::translate("DIEOptionsWidget", "Hide unknown", nullptr));
        groupBoxBufferSize->setTitle(QCoreApplication::translate("DIEOptionsWidget", "Buffer size", nullptr));
        groupBoxScanEngine->setTitle(QCoreApplication::translate("DIEOptionsWidget", "Scan", nullptr));
        groupBoxDIEDatabase->setTitle(QCoreApplication::translate("DIEOptionsWidget", "Database", nullptr));
        groupBoxDIEDatabaseExtra->setTitle(QCoreApplication::translate("DIEOptionsWidget", "Extra database", nullptr));
        groupBoxDIEDatabaseCustom->setTitle(QCoreApplication::translate("DIEOptionsWidget", "Custom database", nullptr));
        (void)DIEOptionsWidget;
    } // retranslateUi

};

namespace Ui {
    class DIEOptionsWidget: public Ui_DIEOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIEOPTIONSWIDGET_H
