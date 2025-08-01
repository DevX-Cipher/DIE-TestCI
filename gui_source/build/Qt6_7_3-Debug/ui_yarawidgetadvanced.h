/********************************************************************************
** Form generated from reading UI file 'yarawidgetadvanced.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YARAWIDGETADVANCED_H
#define UI_YARAWIDGETADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YARAWidgetAdvanced
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonRules;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonScan;
    QSplitter *splitter_2;
    QTreeView *treeViewResult;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditRuleName;
    QPlainTextEdit *plainTextEdit;
    QTableWidget *tableWidgetMatches;

    void setupUi(QWidget *YARAWidgetAdvanced)
    {
        if (YARAWidgetAdvanced->objectName().isEmpty())
            YARAWidgetAdvanced->setObjectName("YARAWidgetAdvanced");
        YARAWidgetAdvanced->resize(687, 449);
        YARAWidgetAdvanced->setWindowTitle(QString::fromUtf8("YARA"));
        verticalLayout_2 = new QVBoxLayout(YARAWidgetAdvanced);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        toolButtonRules = new QToolButton(YARAWidgetAdvanced);
        toolButtonRules->setObjectName("toolButtonRules");
        toolButtonRules->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonRules);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonSave = new QToolButton(YARAWidgetAdvanced);
        toolButtonSave->setObjectName("toolButtonSave");
        toolButtonSave->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSave);

        toolButtonScan = new QToolButton(YARAWidgetAdvanced);
        toolButtonScan->setObjectName("toolButtonScan");
        toolButtonScan->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonScan);


        verticalLayout_2->addLayout(horizontalLayout);

        splitter_2 = new QSplitter(YARAWidgetAdvanced);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Vertical);
        treeViewResult = new QTreeView(splitter_2);
        treeViewResult->setObjectName("treeViewResult");
        treeViewResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        splitter_2->addWidget(treeViewResult);
        treeViewResult->header()->setVisible(false);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditRuleName = new QLineEdit(layoutWidget);
        lineEditRuleName->setObjectName("lineEditRuleName");
        lineEditRuleName->setReadOnly(true);

        verticalLayout->addWidget(lineEditRuleName);

        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);

        splitter->addWidget(layoutWidget);
        tableWidgetMatches = new QTableWidget(splitter);
        tableWidgetMatches->setObjectName("tableWidgetMatches");
        tableWidgetMatches->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMatches->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetMatches->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter->addWidget(tableWidgetMatches);
        tableWidgetMatches->horizontalHeader()->setVisible(true);
        tableWidgetMatches->verticalHeader()->setVisible(false);
        tableWidgetMatches->verticalHeader()->setMinimumSectionSize(20);
        tableWidgetMatches->verticalHeader()->setDefaultSectionSize(20);
        splitter_2->addWidget(splitter);

        verticalLayout_2->addWidget(splitter_2);


        retranslateUi(YARAWidgetAdvanced);

        QMetaObject::connectSlotsByName(YARAWidgetAdvanced);
    } // setupUi

    void retranslateUi(QWidget *YARAWidgetAdvanced)
    {
        toolButtonRules->setText(QCoreApplication::translate("YARAWidgetAdvanced", "Rules", nullptr));
        toolButtonSave->setText(QCoreApplication::translate("YARAWidgetAdvanced", "Save", nullptr));
        toolButtonScan->setText(QCoreApplication::translate("YARAWidgetAdvanced", "Scan", nullptr));
        (void)YARAWidgetAdvanced;
    } // retranslateUi

};

namespace Ui {
    class YARAWidgetAdvanced: public Ui_YARAWidgetAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YARAWIDGETADVANCED_H
