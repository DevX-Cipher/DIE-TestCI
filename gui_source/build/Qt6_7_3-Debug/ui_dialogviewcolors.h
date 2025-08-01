/********************************************************************************
** Form generated from reading UI file 'dialogviewcolors.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVIEWCOLORS_H
#define UI_DIALOGVIEWCOLORS_H

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

class Ui_DialogViewColors
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidgetColors;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DialogViewColors)
    {
        if (DialogViewColors->objectName().isEmpty())
            DialogViewColors->setObjectName("DialogViewColors");
        DialogViewColors->setWindowModality(Qt::WindowModality::ApplicationModal);
        DialogViewColors->resize(778, 292);
        DialogViewColors->setModal(true);
        verticalLayout = new QVBoxLayout(DialogViewColors);
        verticalLayout->setObjectName("verticalLayout");
        tableWidgetColors = new QTableWidget(DialogViewColors);
        tableWidgetColors->setObjectName("tableWidgetColors");
        tableWidgetColors->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidgetColors->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        tableWidgetColors->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidgetColors->horizontalHeader()->setVisible(false);
        tableWidgetColors->horizontalHeader()->setStretchLastSection(true);
        tableWidgetColors->verticalHeader()->setVisible(false);
        tableWidgetColors->verticalHeader()->setMinimumSectionSize(20);
        tableWidgetColors->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(tableWidgetColors);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(DialogViewColors);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(DialogViewColors);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogViewColors);

        QMetaObject::connectSlotsByName(DialogViewColors);
    } // setupUi

    void retranslateUi(QDialog *DialogViewColors)
    {
        DialogViewColors->setWindowTitle(QCoreApplication::translate("DialogViewColors", "Colors", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogViewColors", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("DialogViewColors", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogViewColors: public Ui_DialogViewColors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVIEWCOLORS_H
