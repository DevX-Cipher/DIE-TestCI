/********************************************************************************
** Form generated from reading UI file 'dialogshortcuts.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSHORTCUTS_H
#define UI_DIALOGSHORTCUTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogShortcuts
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxFilter;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditFilter;
    QTableView *tableViewShortcuts;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditShortcut;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonDefault;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogShortcuts)
    {
        if (DialogShortcuts->objectName().isEmpty())
            DialogShortcuts->setObjectName(QString::fromUtf8("DialogShortcuts"));
        DialogShortcuts->setWindowModality(Qt::ApplicationModal);
        DialogShortcuts->resize(600, 399);
        DialogShortcuts->setModal(true);
        verticalLayout_3 = new QVBoxLayout(DialogShortcuts);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBoxFilter = new QGroupBox(DialogShortcuts);
        groupBoxFilter->setObjectName(QString::fromUtf8("groupBoxFilter"));
        verticalLayout_2 = new QVBoxLayout(groupBoxFilter);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditFilter = new QLineEdit(groupBoxFilter);
        lineEditFilter->setObjectName(QString::fromUtf8("lineEditFilter"));

        verticalLayout_2->addWidget(lineEditFilter);


        horizontalLayout_2->addWidget(groupBoxFilter);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tableViewShortcuts = new QTableView(DialogShortcuts);
        tableViewShortcuts->setObjectName(QString::fromUtf8("tableViewShortcuts"));
        tableViewShortcuts->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewShortcuts->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewShortcuts->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewShortcuts->horizontalHeader()->setStretchLastSection(true);
        tableViewShortcuts->verticalHeader()->setVisible(false);
        tableViewShortcuts->verticalHeader()->setMinimumSectionSize(20);
        tableViewShortcuts->verticalHeader()->setDefaultSectionSize(23);

        verticalLayout_3->addWidget(tableViewShortcuts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditShortcut = new QLineEdit(DialogShortcuts);
        lineEditShortcut->setObjectName(QString::fromUtf8("lineEditShortcut"));
        lineEditShortcut->setReadOnly(false);

        horizontalLayout->addWidget(lineEditShortcut);

        pushButtonClear = new QPushButton(DialogShortcuts);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        horizontalLayout->addWidget(pushButtonClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonDefault = new QPushButton(DialogShortcuts);
        pushButtonDefault->setObjectName(QString::fromUtf8("pushButtonDefault"));

        horizontalLayout->addWidget(pushButtonDefault);

        pushButtonClose = new QPushButton(DialogShortcuts);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(DialogShortcuts);

        QMetaObject::connectSlotsByName(DialogShortcuts);
    } // setupUi

    void retranslateUi(QDialog *DialogShortcuts)
    {
        DialogShortcuts->setWindowTitle(QCoreApplication::translate("DialogShortcuts", "Shortcuts", nullptr));
        groupBoxFilter->setTitle(QCoreApplication::translate("DialogShortcuts", "Filter", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("DialogShortcuts", "Clear", nullptr));
        pushButtonDefault->setText(QCoreApplication::translate("DialogShortcuts", "Default", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogShortcuts", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogShortcuts: public Ui_DialogShortcuts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSHORTCUTS_H
