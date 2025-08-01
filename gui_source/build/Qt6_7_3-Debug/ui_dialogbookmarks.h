/********************************************************************************
** Form generated from reading UI file 'dialogbookmarks.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBOOKMARKS_H
#define UI_DIALOGBOOKMARKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogBookmarks
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidgetBookmarks;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogBookmarks)
    {
        if (DialogBookmarks->objectName().isEmpty())
            DialogBookmarks->setObjectName("DialogBookmarks");
        DialogBookmarks->resize(479, 316);
        verticalLayout = new QVBoxLayout(DialogBookmarks);
        verticalLayout->setObjectName("verticalLayout");
        tableWidgetBookmarks = new QTableWidget(DialogBookmarks);
        tableWidgetBookmarks->setObjectName("tableWidgetBookmarks");
        tableWidgetBookmarks->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetBookmarks->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetBookmarks->horizontalHeader()->setStretchLastSection(false);
        tableWidgetBookmarks->verticalHeader()->setVisible(false);
        tableWidgetBookmarks->verticalHeader()->setMinimumSectionSize(20);
        tableWidgetBookmarks->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(tableWidgetBookmarks);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(DialogBookmarks);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogBookmarks);

        QMetaObject::connectSlotsByName(DialogBookmarks);
    } // setupUi

    void retranslateUi(QDialog *DialogBookmarks)
    {
        DialogBookmarks->setWindowTitle(QCoreApplication::translate("DialogBookmarks", "Bookmarks", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogBookmarks", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogBookmarks: public Ui_DialogBookmarks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBOOKMARKS_H
