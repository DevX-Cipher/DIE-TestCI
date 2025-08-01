/********************************************************************************
** Form generated from reading UI file 'dialogdiesignatures.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDIESIGNATURES_H
#define UI_DIALOGDIESIGNATURES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "die_signatureedit.h"

QT_BEGIN_NAMESPACE

class Ui_DialogDIESignatures
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *widgetPanel;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidgetSignatures;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSave;
    QCheckBox *checkBoxReadOnly;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBoxFunction;
    QPushButton *pushButtonRun;
    QPushButton *pushButtonDebug;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxRecursiveScan;
    QCheckBox *checkBoxDeepScan;
    QCheckBox *checkBoxVerbose;
    QCheckBox *checkBoxHeuristicScan;
    QCheckBox *checkBoxProfiling;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonFind;
    QPushButton *pushButtonFindNext;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBoxDetect;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxShowType;
    QCheckBox *checkBoxShowVersion;
    QCheckBox *checkBoxShowInfo;
    DIE_SignatureEdit *plainTextEditSignature;
    QPlainTextEdit *plainTextEditResult;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditElapsedTime;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonClearResult;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogDIESignatures)
    {
        if (DialogDIESignatures->objectName().isEmpty())
            DialogDIESignatures->setObjectName("DialogDIESignatures");
        DialogDIESignatures->setWindowModality(Qt::WindowModal);
        DialogDIESignatures->resize(1001, 509);
        DialogDIESignatures->setModal(true);
        verticalLayout_3 = new QVBoxLayout(DialogDIESignatures);
        verticalLayout_3->setObjectName("verticalLayout_3");
        splitter = new QSplitter(DialogDIESignatures);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        widgetPanel = new QWidget(splitter);
        widgetPanel->setObjectName("widgetPanel");
        widgetPanel->setMinimumSize(QSize(200, 0));
        widgetPanel->setMaximumSize(QSize(400, 16777215));
        verticalLayout_2 = new QVBoxLayout(widgetPanel);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeWidgetSignatures = new QTreeWidget(widgetPanel);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidgetSignatures->setHeaderItem(__qtreewidgetitem);
        treeWidgetSignatures->setObjectName("treeWidgetSignatures");
        treeWidgetSignatures->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidgetSignatures->header()->setVisible(false);

        verticalLayout_2->addWidget(treeWidgetSignatures);

        splitter->addWidget(widgetPanel);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSave = new QPushButton(layoutWidget);
        pushButtonSave->setObjectName("pushButtonSave");

        horizontalLayout->addWidget(pushButtonSave);

        checkBoxReadOnly = new QCheckBox(layoutWidget);
        checkBoxReadOnly->setObjectName("checkBoxReadOnly");

        horizontalLayout->addWidget(checkBoxReadOnly);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        comboBoxFunction = new QComboBox(layoutWidget);
        comboBoxFunction->setObjectName("comboBoxFunction");
        comboBoxFunction->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(comboBoxFunction);

        pushButtonRun = new QPushButton(layoutWidget);
        pushButtonRun->setObjectName("pushButtonRun");

        horizontalLayout->addWidget(pushButtonRun);

        pushButtonDebug = new QPushButton(layoutWidget);
        pushButtonDebug->setObjectName("pushButtonDebug");

        horizontalLayout->addWidget(pushButtonDebug);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        checkBoxRecursiveScan = new QCheckBox(layoutWidget);
        checkBoxRecursiveScan->setObjectName("checkBoxRecursiveScan");

        horizontalLayout_4->addWidget(checkBoxRecursiveScan);

        checkBoxDeepScan = new QCheckBox(layoutWidget);
        checkBoxDeepScan->setObjectName("checkBoxDeepScan");

        horizontalLayout_4->addWidget(checkBoxDeepScan);

        checkBoxVerbose = new QCheckBox(layoutWidget);
        checkBoxVerbose->setObjectName("checkBoxVerbose");

        horizontalLayout_4->addWidget(checkBoxVerbose);

        checkBoxHeuristicScan = new QCheckBox(layoutWidget);
        checkBoxHeuristicScan->setObjectName("checkBoxHeuristicScan");

        horizontalLayout_4->addWidget(checkBoxHeuristicScan);

        checkBoxProfiling = new QCheckBox(layoutWidget);
        checkBoxProfiling->setObjectName("checkBoxProfiling");

        horizontalLayout_4->addWidget(checkBoxProfiling);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButtonFind = new QPushButton(layoutWidget);
        pushButtonFind->setObjectName("pushButtonFind");

        horizontalLayout_5->addWidget(pushButtonFind);

        pushButtonFindNext = new QPushButton(layoutWidget);
        pushButtonFindNext->setObjectName("pushButtonFindNext");

        horizontalLayout_5->addWidget(pushButtonFindNext);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        groupBoxDetect = new QGroupBox(layoutWidget);
        groupBoxDetect->setObjectName("groupBoxDetect");
        horizontalLayout_2 = new QHBoxLayout(groupBoxDetect);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBoxShowType = new QCheckBox(groupBoxDetect);
        checkBoxShowType->setObjectName("checkBoxShowType");

        horizontalLayout_2->addWidget(checkBoxShowType);

        checkBoxShowVersion = new QCheckBox(groupBoxDetect);
        checkBoxShowVersion->setObjectName("checkBoxShowVersion");

        horizontalLayout_2->addWidget(checkBoxShowVersion);

        checkBoxShowInfo = new QCheckBox(groupBoxDetect);
        checkBoxShowInfo->setObjectName("checkBoxShowInfo");

        horizontalLayout_2->addWidget(checkBoxShowInfo);


        horizontalLayout_5->addWidget(groupBoxDetect);


        verticalLayout->addLayout(horizontalLayout_5);

        plainTextEditSignature = new DIE_SignatureEdit(layoutWidget);
        plainTextEditSignature->setObjectName("plainTextEditSignature");

        verticalLayout->addWidget(plainTextEditSignature);

        plainTextEditResult = new QPlainTextEdit(layoutWidget);
        plainTextEditResult->setObjectName("plainTextEditResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEditResult->sizePolicy().hasHeightForWidth());
        plainTextEditResult->setSizePolicy(sizePolicy);
        plainTextEditResult->setReadOnly(true);

        verticalLayout->addWidget(plainTextEditResult);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEditElapsedTime = new QLineEdit(layoutWidget);
        lineEditElapsedTime->setObjectName("lineEditElapsedTime");
        lineEditElapsedTime->setAlignment(Qt::AlignCenter);
        lineEditElapsedTime->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditElapsedTime);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButtonClearResult = new QPushButton(layoutWidget);
        pushButtonClearResult->setObjectName("pushButtonClearResult");

        horizontalLayout_3->addWidget(pushButtonClearResult);

        pushButtonClose = new QPushButton(layoutWidget);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout_3->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout_3);

        splitter->addWidget(layoutWidget);

        verticalLayout_3->addWidget(splitter);


        retranslateUi(DialogDIESignatures);

        QMetaObject::connectSlotsByName(DialogDIESignatures);
    } // setupUi

    void retranslateUi(QDialog *DialogDIESignatures)
    {
        DialogDIESignatures->setWindowTitle(QCoreApplication::translate("DialogDIESignatures", "Signatures", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("DialogDIESignatures", "Save", nullptr));
        checkBoxReadOnly->setText(QCoreApplication::translate("DialogDIESignatures", "Readonly", nullptr));
        pushButtonRun->setText(QCoreApplication::translate("DialogDIESignatures", "Run", nullptr));
        pushButtonDebug->setText(QCoreApplication::translate("DialogDIESignatures", "Debug", nullptr));
        checkBoxRecursiveScan->setText(QCoreApplication::translate("DialogDIESignatures", "Recursive scan", nullptr));
        checkBoxDeepScan->setText(QCoreApplication::translate("DialogDIESignatures", "Deep scan", nullptr));
        checkBoxVerbose->setText(QCoreApplication::translate("DialogDIESignatures", "Verbose", nullptr));
        checkBoxHeuristicScan->setText(QCoreApplication::translate("DialogDIESignatures", "Heuristic scan", nullptr));
        checkBoxProfiling->setText(QCoreApplication::translate("DialogDIESignatures", "Profiling", nullptr));
        pushButtonFind->setText(QCoreApplication::translate("DialogDIESignatures", "Find", nullptr));
        pushButtonFindNext->setText(QCoreApplication::translate("DialogDIESignatures", "Next", nullptr));
        groupBoxDetect->setTitle(QCoreApplication::translate("DialogDIESignatures", "Detect", nullptr));
        checkBoxShowType->setText(QCoreApplication::translate("DialogDIESignatures", "Show type", nullptr));
        checkBoxShowVersion->setText(QCoreApplication::translate("DialogDIESignatures", "Show version", nullptr));
        checkBoxShowInfo->setText(QCoreApplication::translate("DialogDIESignatures", "Show info", nullptr));
        pushButtonClearResult->setText(QCoreApplication::translate("DialogDIESignatures", "Clear result", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogDIESignatures", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDIESignatures: public Ui_DialogDIESignatures {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDIESIGNATURES_H
