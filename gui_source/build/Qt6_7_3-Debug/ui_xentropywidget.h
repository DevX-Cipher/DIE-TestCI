/********************************************************************************
** Form generated from reading UI file 'xentropywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XENTROPYWIDGET_H
#define UI_XENTROPYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"
#include "xlineedithex.h"
#include "xtableview.h"

QT_BEGIN_NAMESPACE

class Ui_XEntropyWidget
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxType;
    QComboBox *comboBoxMapMode;
    XLineEditHEX *lineEditOffset;
    XLineEditHEX *lineEditSize;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBoxCount;
    XLineEditHEX *lineEditPartSize;
    QToolButton *toolButtonReload;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditTotalEntropy;
    QProgressBar *progressBarTotalEntropy;
    QToolButton *toolButtonSaveEntropyTable;
    QToolButton *toolButtonSaveEntropyDiagram;
    QTabWidget *tabWidget;
    QWidget *tabEntropy;
    QVBoxLayout *verticalLayout_11;
    QSplitter *splitter;
    QGroupBox *groupBoxRegions;
    QVBoxLayout *verticalLayout_4;
    XTableView *tableViewRegions;
    QGroupBox *groupBoxDiagramRegions;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxGridRegions;
    QSpacerItem *horizontalSpacer_3;
    QwtPlot *widgetEntropy;
    QWidget *tabBytes;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter_2;
    QTableWidget *tableWidgetBytes;
    QwtPlot *widgetBytes;

    void setupUi(QWidget *XEntropyWidget)
    {
        if (XEntropyWidget->objectName().isEmpty())
            XEntropyWidget->setObjectName("XEntropyWidget");
        XEntropyWidget->resize(893, 592);
        XEntropyWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_6 = new QVBoxLayout(XEntropyWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxType = new QComboBox(XEntropyWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        comboBoxMapMode = new QComboBox(XEntropyWidget);
        comboBoxMapMode->setObjectName("comboBoxMapMode");
        comboBoxMapMode->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxMapMode);

        lineEditOffset = new XLineEditHEX(XEntropyWidget);
        lineEditOffset->setObjectName("lineEditOffset");
        lineEditOffset->setMaximumSize(QSize(120, 16777215));
        lineEditOffset->setAlignment(Qt::AlignCenter);
        lineEditOffset->setReadOnly(true);

        horizontalLayout->addWidget(lineEditOffset);

        lineEditSize = new XLineEditHEX(XEntropyWidget);
        lineEditSize->setObjectName("lineEditSize");
        lineEditSize->setMaximumSize(QSize(120, 16777215));
        lineEditSize->setAlignment(Qt::AlignCenter);
        lineEditSize->setReadOnly(true);

        horizontalLayout->addWidget(lineEditSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        spinBoxCount = new QSpinBox(XEntropyWidget);
        spinBoxCount->setObjectName("spinBoxCount");
        spinBoxCount->setMinimumSize(QSize(70, 0));
        spinBoxCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxCount->setMinimum(1);
        spinBoxCount->setMaximum(1000);

        horizontalLayout->addWidget(spinBoxCount);

        lineEditPartSize = new XLineEditHEX(XEntropyWidget);
        lineEditPartSize->setObjectName("lineEditPartSize");
        lineEditPartSize->setMaximumSize(QSize(120, 16777215));
        lineEditPartSize->setAlignment(Qt::AlignCenter);
        lineEditPartSize->setReadOnly(true);

        horizontalLayout->addWidget(lineEditPartSize);

        toolButtonReload = new QToolButton(XEntropyWidget);
        toolButtonReload->setObjectName("toolButtonReload");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonReload->sizePolicy().hasHeightForWidth());
        toolButtonReload->setSizePolicy(sizePolicy);
        toolButtonReload->setIconSize(QSize(16, 16));
        toolButtonReload->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonReload);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEditTotalEntropy = new QLineEdit(XEntropyWidget);
        lineEditTotalEntropy->setObjectName("lineEditTotalEntropy");
        lineEditTotalEntropy->setMaximumSize(QSize(80, 16777215));
        lineEditTotalEntropy->setAlignment(Qt::AlignCenter);
        lineEditTotalEntropy->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditTotalEntropy);

        progressBarTotalEntropy = new QProgressBar(XEntropyWidget);
        progressBarTotalEntropy->setObjectName("progressBarTotalEntropy");
        progressBarTotalEntropy->setMinimumSize(QSize(150, 0));
        progressBarTotalEntropy->setMaximum(1000);
        progressBarTotalEntropy->setValue(0);
        progressBarTotalEntropy->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(progressBarTotalEntropy);

        toolButtonSaveEntropyTable = new QToolButton(XEntropyWidget);
        toolButtonSaveEntropyTable->setObjectName("toolButtonSaveEntropyTable");
        sizePolicy.setHeightForWidth(toolButtonSaveEntropyTable->sizePolicy().hasHeightForWidth());
        toolButtonSaveEntropyTable->setSizePolicy(sizePolicy);
        toolButtonSaveEntropyTable->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButtonSaveEntropyTable);

        toolButtonSaveEntropyDiagram = new QToolButton(XEntropyWidget);
        toolButtonSaveEntropyDiagram->setObjectName("toolButtonSaveEntropyDiagram");
        sizePolicy.setHeightForWidth(toolButtonSaveEntropyDiagram->sizePolicy().hasHeightForWidth());
        toolButtonSaveEntropyDiagram->setSizePolicy(sizePolicy);
        toolButtonSaveEntropyDiagram->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButtonSaveEntropyDiagram);


        verticalLayout_6->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(XEntropyWidget);
        tabWidget->setObjectName("tabWidget");
        tabEntropy = new QWidget();
        tabEntropy->setObjectName("tabEntropy");
        verticalLayout_11 = new QVBoxLayout(tabEntropy);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(tabEntropy);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        groupBoxRegions = new QGroupBox(splitter);
        groupBoxRegions->setObjectName("groupBoxRegions");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxRegions->sizePolicy().hasHeightForWidth());
        groupBoxRegions->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(groupBoxRegions);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tableViewRegions = new XTableView(groupBoxRegions);
        tableViewRegions->setObjectName("tableViewRegions");
        tableViewRegions->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewRegions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewRegions->setSelectionMode(QAbstractItemView::MultiSelection);
        tableViewRegions->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewRegions->horizontalHeader()->setStretchLastSection(false);
        tableViewRegions->verticalHeader()->setVisible(false);
        tableViewRegions->verticalHeader()->setMinimumSectionSize(20);
        tableViewRegions->verticalHeader()->setDefaultSectionSize(21);
        tableViewRegions->verticalHeader()->setStretchLastSection(false);

        verticalLayout_4->addWidget(tableViewRegions);

        splitter->addWidget(groupBoxRegions);
        groupBoxDiagramRegions = new QGroupBox(splitter);
        groupBoxDiagramRegions->setObjectName("groupBoxDiagramRegions");
        verticalLayout_3 = new QVBoxLayout(groupBoxDiagramRegions);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBoxGridRegions = new QCheckBox(groupBoxDiagramRegions);
        checkBoxGridRegions->setObjectName("checkBoxGridRegions");

        horizontalLayout_3->addWidget(checkBoxGridRegions);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        widgetEntropy = new QwtPlot(groupBoxDiagramRegions);
        widgetEntropy->setObjectName("widgetEntropy");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetEntropy->sizePolicy().hasHeightForWidth());
        widgetEntropy->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(widgetEntropy);

        splitter->addWidget(groupBoxDiagramRegions);

        verticalLayout_11->addWidget(splitter);

        tabWidget->addTab(tabEntropy, QString());
        tabBytes = new QWidget();
        tabBytes->setObjectName("tabBytes");
        verticalLayout_5 = new QVBoxLayout(tabBytes);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(tabBytes);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        tableWidgetBytes = new QTableWidget(splitter_2);
        tableWidgetBytes->setObjectName("tableWidgetBytes");
        tableWidgetBytes->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidgetBytes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetBytes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetBytes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetBytes->setSortingEnabled(true);
        splitter_2->addWidget(tableWidgetBytes);
        tableWidgetBytes->horizontalHeader()->setMinimumSectionSize(0);
        tableWidgetBytes->horizontalHeader()->setDefaultSectionSize(50);
        tableWidgetBytes->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidgetBytes->horizontalHeader()->setStretchLastSection(true);
        tableWidgetBytes->verticalHeader()->setVisible(false);
        tableWidgetBytes->verticalHeader()->setMinimumSectionSize(20);
        tableWidgetBytes->verticalHeader()->setDefaultSectionSize(20);
        widgetBytes = new QwtPlot(splitter_2);
        widgetBytes->setObjectName("widgetBytes");
        splitter_2->addWidget(widgetBytes);

        verticalLayout_5->addWidget(splitter_2);

        tabWidget->addTab(tabBytes, QString());

        verticalLayout_6->addWidget(tabWidget);


        retranslateUi(XEntropyWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XEntropyWidget);
    } // setupUi

    void retranslateUi(QWidget *XEntropyWidget)
    {
        toolButtonReload->setText(QCoreApplication::translate("XEntropyWidget", "Reload", nullptr));
        toolButtonSaveEntropyTable->setText(QCoreApplication::translate("XEntropyWidget", "Save", nullptr));
        toolButtonSaveEntropyDiagram->setText(QCoreApplication::translate("XEntropyWidget", "Save diagram", nullptr));
        groupBoxRegions->setTitle(QCoreApplication::translate("XEntropyWidget", "Regions", nullptr));
        groupBoxDiagramRegions->setTitle(QCoreApplication::translate("XEntropyWidget", "Diagram", nullptr));
        checkBoxGridRegions->setText(QCoreApplication::translate("XEntropyWidget", "Grid", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabEntropy), QCoreApplication::translate("XEntropyWidget", "Entropy", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabBytes), QCoreApplication::translate("XEntropyWidget", "Bytes", nullptr));
        (void)XEntropyWidget;
    } // retranslateUi

};

namespace Ui {
    class XEntropyWidget: public Ui_XEntropyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XENTROPYWIDGET_H
