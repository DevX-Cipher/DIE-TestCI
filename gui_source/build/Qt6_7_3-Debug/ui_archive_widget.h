/********************************************************************************
** Form generated from reading UI file 'archive_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHIVE_WIDGET_H
#define UI_ARCHIVE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Archive_widget
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBoxType;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBoxType;
    QGroupBox *groupBoxFilter;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditFilter;
    QStackedWidget *stackedWidgetArchive;
    QWidget *pageTree;
    QVBoxLayout *verticalLayout_4;
    QTreeView *treeViewArchive;
    QWidget *pageTable;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableViewArchive;

    void setupUi(QWidget *Archive_widget)
    {
        if (Archive_widget->objectName().isEmpty())
            Archive_widget->setObjectName("Archive_widget");
        Archive_widget->resize(564, 394);
        verticalLayout_5 = new QVBoxLayout(Archive_widget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBoxType = new QGroupBox(Archive_widget);
        groupBoxType->setObjectName("groupBoxType");
        verticalLayout = new QVBoxLayout(groupBoxType);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        comboBoxType = new QComboBox(groupBoxType);
        comboBoxType->setObjectName("comboBoxType");

        verticalLayout->addWidget(comboBoxType);


        horizontalLayout->addWidget(groupBoxType);

        groupBoxFilter = new QGroupBox(Archive_widget);
        groupBoxFilter->setObjectName("groupBoxFilter");
        verticalLayout_2 = new QVBoxLayout(groupBoxFilter);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        lineEditFilter = new QLineEdit(groupBoxFilter);
        lineEditFilter->setObjectName("lineEditFilter");

        verticalLayout_2->addWidget(lineEditFilter);


        horizontalLayout->addWidget(groupBoxFilter);


        verticalLayout_5->addLayout(horizontalLayout);

        stackedWidgetArchive = new QStackedWidget(Archive_widget);
        stackedWidgetArchive->setObjectName("stackedWidgetArchive");
        pageTree = new QWidget();
        pageTree->setObjectName("pageTree");
        verticalLayout_4 = new QVBoxLayout(pageTree);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        treeViewArchive = new QTreeView(pageTree);
        treeViewArchive->setObjectName("treeViewArchive");
        treeViewArchive->setContextMenuPolicy(Qt::CustomContextMenu);
        treeViewArchive->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeViewArchive->header()->setStretchLastSection(false);

        verticalLayout_4->addWidget(treeViewArchive);

        stackedWidgetArchive->addWidget(pageTree);
        pageTable = new QWidget();
        pageTable->setObjectName("pageTable");
        verticalLayout_3 = new QVBoxLayout(pageTable);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tableViewArchive = new QTableView(pageTable);
        tableViewArchive->setObjectName("tableViewArchive");
        tableViewArchive->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewArchive->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewArchive->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewArchive->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewArchive->verticalHeader()->setVisible(false);
        tableViewArchive->verticalHeader()->setMinimumSectionSize(20);
        tableViewArchive->verticalHeader()->setDefaultSectionSize(20);
        tableViewArchive->verticalHeader()->setStretchLastSection(false);

        verticalLayout_3->addWidget(tableViewArchive);

        stackedWidgetArchive->addWidget(pageTable);

        verticalLayout_5->addWidget(stackedWidgetArchive);


        retranslateUi(Archive_widget);

        stackedWidgetArchive->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Archive_widget);
    } // setupUi

    void retranslateUi(QWidget *Archive_widget)
    {
        Archive_widget->setWindowTitle(QCoreApplication::translate("Archive_widget", "Form", nullptr));
        groupBoxType->setTitle(QCoreApplication::translate("Archive_widget", "Type", nullptr));
        groupBoxFilter->setTitle(QCoreApplication::translate("Archive_widget", "Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Archive_widget: public Ui_Archive_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHIVE_WIDGET_H
