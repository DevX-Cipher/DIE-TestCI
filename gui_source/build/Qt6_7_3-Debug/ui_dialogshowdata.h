/********************************************************************************
** Form generated from reading UI file 'dialogshowdata.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSHOWDATA_H
#define UI_DIALOGSHOWDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogShowData
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QListWidget *listWidgetType;
    QPlainTextEdit *plainTextEditData;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxGroup;
    QSpinBox *spinBoxElementsProLine;
    QPushButton *pushButtonCopy;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogShowData)
    {
        if (DialogShowData->objectName().isEmpty())
            DialogShowData->setObjectName("DialogShowData");
        DialogShowData->setWindowModality(Qt::ApplicationModal);
        DialogShowData->resize(854, 458);
        DialogShowData->setModal(true);
        verticalLayout = new QVBoxLayout(DialogShowData);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(DialogShowData);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        listWidgetType = new QListWidget(splitter);
        listWidgetType->setObjectName("listWidgetType");
        listWidgetType->setMaximumSize(QSize(120, 16777215));
        splitter->addWidget(listWidgetType);
        plainTextEditData = new QPlainTextEdit(splitter);
        plainTextEditData->setObjectName("plainTextEditData");
        plainTextEditData->setSizeIncrement(QSize(1, 1));
        plainTextEditData->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEditData->setReadOnly(true);
        splitter->addWidget(plainTextEditData);

        verticalLayout->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxGroup = new QCheckBox(DialogShowData);
        checkBoxGroup->setObjectName("checkBoxGroup");

        horizontalLayout->addWidget(checkBoxGroup);

        spinBoxElementsProLine = new QSpinBox(DialogShowData);
        spinBoxElementsProLine->setObjectName("spinBoxElementsProLine");
        spinBoxElementsProLine->setMinimumSize(QSize(60, 0));
        spinBoxElementsProLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxElementsProLine->setMinimum(1);
        spinBoxElementsProLine->setMaximum(32);

        horizontalLayout->addWidget(spinBoxElementsProLine);

        pushButtonCopy = new QPushButton(DialogShowData);
        pushButtonCopy->setObjectName("pushButtonCopy");

        horizontalLayout->addWidget(pushButtonCopy);

        pushButtonOK = new QPushButton(DialogShowData);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogShowData);

        QMetaObject::connectSlotsByName(DialogShowData);
    } // setupUi

    void retranslateUi(QDialog *DialogShowData)
    {
        DialogShowData->setWindowTitle(QCoreApplication::translate("DialogShowData", "Data", nullptr));
        checkBoxGroup->setText(QCoreApplication::translate("DialogShowData", "Group", nullptr));
        pushButtonCopy->setText(QCoreApplication::translate("DialogShowData", "Copy", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogShowData", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogShowData: public Ui_DialogShowData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSHOWDATA_H
