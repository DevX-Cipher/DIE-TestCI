/********************************************************************************
** Form generated from reading UI file 'xfileinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XFILEINFOWIDGET_H
#define UI_XFILEINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XFileInfoWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxType;
    QComboBox *comboBoxMethod;
    QCheckBox *checkBoxComment;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBoxOutput;
    QToolButton *toolButtonReload;
    QToolButton *toolButtonSave;
    QPlainTextEdit *plainTextEditFileInfo;

    void setupUi(QWidget *XFileInfoWidget)
    {
        if (XFileInfoWidget->objectName().isEmpty())
            XFileInfoWidget->setObjectName("XFileInfoWidget");
        XFileInfoWidget->resize(895, 474);
        verticalLayout_2 = new QVBoxLayout(XFileInfoWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxType = new QComboBox(XFileInfoWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        comboBoxMethod = new QComboBox(XFileInfoWidget);
        comboBoxMethod->setObjectName("comboBoxMethod");
        comboBoxMethod->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(comboBoxMethod);

        checkBoxComment = new QCheckBox(XFileInfoWidget);
        checkBoxComment->setObjectName("checkBoxComment");

        horizontalLayout->addWidget(checkBoxComment);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBoxOutput = new QComboBox(XFileInfoWidget);
        comboBoxOutput->setObjectName("comboBoxOutput");
        comboBoxOutput->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(comboBoxOutput);

        toolButtonReload = new QToolButton(XFileInfoWidget);
        toolButtonReload->setObjectName("toolButtonReload");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonReload->sizePolicy().hasHeightForWidth());
        toolButtonReload->setSizePolicy(sizePolicy);
        toolButtonReload->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonReload);

        toolButtonSave = new QToolButton(XFileInfoWidget);
        toolButtonSave->setObjectName("toolButtonSave");
        sizePolicy.setHeightForWidth(toolButtonSave->sizePolicy().hasHeightForWidth());
        toolButtonSave->setSizePolicy(sizePolicy);
        toolButtonSave->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonSave);


        verticalLayout_2->addLayout(horizontalLayout);

        plainTextEditFileInfo = new QPlainTextEdit(XFileInfoWidget);
        plainTextEditFileInfo->setObjectName("plainTextEditFileInfo");
        plainTextEditFileInfo->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        plainTextEditFileInfo->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEditFileInfo->setReadOnly(true);

        verticalLayout_2->addWidget(plainTextEditFileInfo);


        retranslateUi(XFileInfoWidget);

        QMetaObject::connectSlotsByName(XFileInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *XFileInfoWidget)
    {
        XFileInfoWidget->setWindowTitle(QCoreApplication::translate("XFileInfoWidget", "Form", nullptr));
        checkBoxComment->setText(QCoreApplication::translate("XFileInfoWidget", "Comment", nullptr));
        toolButtonReload->setText(QCoreApplication::translate("XFileInfoWidget", "Reload", nullptr));
        toolButtonSave->setText(QCoreApplication::translate("XFileInfoWidget", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XFileInfoWidget: public Ui_XFileInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XFILEINFOWIDGET_H
