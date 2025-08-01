/********************************************************************************
** Form generated from reading UI file 'dialogdiesignatureselapsed.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDIESIGNATURESELAPSED_H
#define UI_DIALOGDIESIGNATURESELAPSED_H

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

class Ui_DialogDIESignaturesElapsed
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidgetResult;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogDIESignaturesElapsed)
    {
        if (DialogDIESignaturesElapsed->objectName().isEmpty())
            DialogDIESignaturesElapsed->setObjectName("DialogDIESignaturesElapsed");
        DialogDIESignaturesElapsed->setWindowModality(Qt::ApplicationModal);
        DialogDIESignaturesElapsed->resize(400, 300);
        DialogDIESignaturesElapsed->setModal(true);
        verticalLayout = new QVBoxLayout(DialogDIESignaturesElapsed);
        verticalLayout->setObjectName("verticalLayout");
        tableWidgetResult = new QTableWidget(DialogDIESignaturesElapsed);
        tableWidgetResult->setObjectName("tableWidgetResult");
        tableWidgetResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetResult->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetResult->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetResult->setSortingEnabled(true);
        tableWidgetResult->verticalHeader()->setVisible(false);
        tableWidgetResult->verticalHeader()->setMinimumSectionSize(20);
        tableWidgetResult->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(tableWidgetResult);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(DialogDIESignaturesElapsed);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogDIESignaturesElapsed);

        QMetaObject::connectSlotsByName(DialogDIESignaturesElapsed);
    } // setupUi

    void retranslateUi(QDialog *DialogDIESignaturesElapsed)
    {
        DialogDIESignaturesElapsed->setWindowTitle(QCoreApplication::translate("DialogDIESignaturesElapsed", "Elapsed", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogDIESignaturesElapsed", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDIESignaturesElapsed: public Ui_DialogDIESignaturesElapsed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDIESIGNATURESELAPSED_H
