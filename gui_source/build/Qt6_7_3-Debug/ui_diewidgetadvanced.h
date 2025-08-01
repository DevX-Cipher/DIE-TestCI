/********************************************************************************
** Form generated from reading UI file 'diewidgetadvanced.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIEWIDGETADVANCED_H
#define UI_DIEWIDGETADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "die_signatureedit.h"
#include "xcomboboxex.h"

QT_BEGIN_NAMESPACE

class Ui_DIEWidgetAdvanced
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxType;
    XComboBoxEx *comboBoxFlags;
    XComboBoxEx *comboBoxDatabases;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonSignatures;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonScan;
    QSplitter *splitter;
    QTreeView *treeViewResult;
    DIE_SignatureEdit *plainTextEditSignature;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditSignatureName;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *DIEWidgetAdvanced)
    {
        if (DIEWidgetAdvanced->objectName().isEmpty())
            DIEWidgetAdvanced->setObjectName("DIEWidgetAdvanced");
        DIEWidgetAdvanced->resize(944, 482);
        verticalLayout = new QVBoxLayout(DIEWidgetAdvanced);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboBoxType = new QComboBox(DIEWidgetAdvanced);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(comboBoxType);

        comboBoxFlags = new XComboBoxEx(DIEWidgetAdvanced);
        comboBoxFlags->setObjectName("comboBoxFlags");
        comboBoxFlags->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(comboBoxFlags);

        comboBoxDatabases = new XComboBoxEx(DIEWidgetAdvanced);
        comboBoxDatabases->setObjectName("comboBoxDatabases");
        comboBoxDatabases->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(comboBoxDatabases);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        toolButtonSignatures = new QToolButton(DIEWidgetAdvanced);
        toolButtonSignatures->setObjectName("toolButtonSignatures");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonSignatures->sizePolicy().hasHeightForWidth());
        toolButtonSignatures->setSizePolicy(sizePolicy);
        toolButtonSignatures->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButtonSignatures);

        toolButtonSave = new QToolButton(DIEWidgetAdvanced);
        toolButtonSave->setObjectName("toolButtonSave");
        sizePolicy.setHeightForWidth(toolButtonSave->sizePolicy().hasHeightForWidth());
        toolButtonSave->setSizePolicy(sizePolicy);
        toolButtonSave->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButtonSave);

        toolButtonScan = new QToolButton(DIEWidgetAdvanced);
        toolButtonScan->setObjectName("toolButtonScan");
        sizePolicy.setHeightForWidth(toolButtonScan->sizePolicy().hasHeightForWidth());
        toolButtonScan->setSizePolicy(sizePolicy);
        toolButtonScan->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButtonScan);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter = new QSplitter(DIEWidgetAdvanced);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        treeViewResult = new QTreeView(splitter);
        treeViewResult->setObjectName("treeViewResult");
        treeViewResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        splitter->addWidget(treeViewResult);
        treeViewResult->header()->setVisible(false);
        plainTextEditSignature = new DIE_SignatureEdit(splitter);
        plainTextEditSignature->setObjectName("plainTextEditSignature");
        plainTextEditSignature->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        plainTextEditSignature->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEditSignature->setReadOnly(true);
        splitter->addWidget(plainTextEditSignature);

        verticalLayout->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEditSignatureName = new QLineEdit(DIEWidgetAdvanced);
        lineEditSignatureName->setObjectName("lineEditSignatureName");
        lineEditSignatureName->setReadOnly(true);

        horizontalLayout->addWidget(lineEditSignatureName);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DIEWidgetAdvanced);

        QMetaObject::connectSlotsByName(DIEWidgetAdvanced);
    } // setupUi

    void retranslateUi(QWidget *DIEWidgetAdvanced)
    {
        DIEWidgetAdvanced->setWindowTitle(QCoreApplication::translate("DIEWidgetAdvanced", "Form", nullptr));
        toolButtonSignatures->setText(QCoreApplication::translate("DIEWidgetAdvanced", "Signatures", nullptr));
        toolButtonSave->setText(QCoreApplication::translate("DIEWidgetAdvanced", "Save", nullptr));
        toolButtonScan->setText(QCoreApplication::translate("DIEWidgetAdvanced", "Scan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DIEWidgetAdvanced: public Ui_DIEWidgetAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIEWIDGETADVANCED_H
