/********************************************************************************
** Form generated from reading UI file 'dialogdiescandirectory.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDIESCANDIRECTORY_H
#define UI_DIALOGDIESCANDIRECTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include "xcomboboxex.h"

QT_BEGIN_NAMESPACE

class Ui_DialogDIEScanDirectory
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxDirectory;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditDirectoryName;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxScanSubdirectories;
    XComboBoxEx *comboBoxFlags;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonOpenDirectory;
    QPushButton *pushButtonScan;
    QTextBrowser *textBrowserResult;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonSave;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogDIEScanDirectory)
    {
        if (DialogDIEScanDirectory->objectName().isEmpty())
            DialogDIEScanDirectory->setObjectName("DialogDIEScanDirectory");
        DialogDIEScanDirectory->setWindowModality(Qt::ApplicationModal);
        DialogDIEScanDirectory->resize(785, 478);
        DialogDIEScanDirectory->setModal(true);
        verticalLayout_2 = new QVBoxLayout(DialogDIEScanDirectory);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBoxDirectory = new QGroupBox(DialogDIEScanDirectory);
        groupBoxDirectory->setObjectName("groupBoxDirectory");
        groupBoxDirectory->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayout_2 = new QHBoxLayout(groupBoxDirectory);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEditDirectoryName = new QLineEdit(groupBoxDirectory);
        lineEditDirectoryName->setObjectName("lineEditDirectoryName");

        verticalLayout_3->addWidget(lineEditDirectoryName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBoxScanSubdirectories = new QCheckBox(groupBoxDirectory);
        checkBoxScanSubdirectories->setObjectName("checkBoxScanSubdirectories");
        checkBoxScanSubdirectories->setChecked(false);

        horizontalLayout->addWidget(checkBoxScanSubdirectories);

        comboBoxFlags = new XComboBoxEx(groupBoxDirectory);
        comboBoxFlags->setObjectName("comboBoxFlags");
        comboBoxFlags->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(comboBoxFlags);

        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButtonOpenDirectory = new QPushButton(groupBoxDirectory);
        pushButtonOpenDirectory->setObjectName("pushButtonOpenDirectory");
        QFont font;
        font.setBold(true);
        pushButtonOpenDirectory->setFont(font);
        pushButtonOpenDirectory->setText(QString::fromUtf8("..."));

        verticalLayout->addWidget(pushButtonOpenDirectory);

        pushButtonScan = new QPushButton(groupBoxDirectory);
        pushButtonScan->setObjectName("pushButtonScan");
        pushButtonScan->setFont(font);

        verticalLayout->addWidget(pushButtonScan);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addWidget(groupBoxDirectory);

        textBrowserResult = new QTextBrowser(DialogDIEScanDirectory);
        textBrowserResult->setObjectName("textBrowserResult");
        textBrowserResult->setAcceptDrops(false);
        textBrowserResult->setReadOnly(true);

        verticalLayout_2->addWidget(textBrowserResult);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButtonClear = new QPushButton(DialogDIEScanDirectory);
        pushButtonClear->setObjectName("pushButtonClear");

        horizontalLayout_3->addWidget(pushButtonClear);

        pushButtonSave = new QPushButton(DialogDIEScanDirectory);
        pushButtonSave->setObjectName("pushButtonSave");

        horizontalLayout_3->addWidget(pushButtonSave);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButtonOK = new QPushButton(DialogDIEScanDirectory);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout_3->addWidget(pushButtonOK);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(DialogDIEScanDirectory);

        QMetaObject::connectSlotsByName(DialogDIEScanDirectory);
    } // setupUi

    void retranslateUi(QDialog *DialogDIEScanDirectory)
    {
        DialogDIEScanDirectory->setWindowTitle(QCoreApplication::translate("DialogDIEScanDirectory", "Directory scan", nullptr));
        groupBoxDirectory->setTitle(QCoreApplication::translate("DialogDIEScanDirectory", "Directory", nullptr));
        checkBoxScanSubdirectories->setText(QCoreApplication::translate("DialogDIEScanDirectory", "Subdirectories", nullptr));
        pushButtonScan->setText(QCoreApplication::translate("DialogDIEScanDirectory", "Scan", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("DialogDIEScanDirectory", "Clear", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("DialogDIEScanDirectory", "Save", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogDIEScanDirectory", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDIEScanDirectory: public Ui_DialogDIEScanDirectory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDIESCANDIRECTORY_H
