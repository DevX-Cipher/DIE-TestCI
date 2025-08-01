/********************************************************************************
** Form generated from reading UI file 'xdemanglewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XDEMANGLEWIDGET_H
#define UI_XDEMANGLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XDemangleWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxMode;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBoxMode;
    QPlainTextEdit *plainTextEditInput;
    QLabel *labelMode;
    QPlainTextEdit *plainTextEditResult;

    void setupUi(QWidget *XDemangleWidget)
    {
        if (XDemangleWidget->objectName().isEmpty())
            XDemangleWidget->setObjectName("XDemangleWidget");
        XDemangleWidget->resize(477, 284);
        XDemangleWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(XDemangleWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBoxMode = new QGroupBox(XDemangleWidget);
        groupBoxMode->setObjectName("groupBoxMode");
        verticalLayout = new QVBoxLayout(groupBoxMode);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        comboBoxMode = new QComboBox(groupBoxMode);
        comboBoxMode->setObjectName("comboBoxMode");

        verticalLayout->addWidget(comboBoxMode);


        verticalLayout_2->addWidget(groupBoxMode);

        plainTextEditInput = new QPlainTextEdit(XDemangleWidget);
        plainTextEditInput->setObjectName("plainTextEditInput");

        verticalLayout_2->addWidget(plainTextEditInput);

        labelMode = new QLabel(XDemangleWidget);
        labelMode->setObjectName("labelMode");

        verticalLayout_2->addWidget(labelMode);

        plainTextEditResult = new QPlainTextEdit(XDemangleWidget);
        plainTextEditResult->setObjectName("plainTextEditResult");
        plainTextEditResult->setReadOnly(true);

        verticalLayout_2->addWidget(plainTextEditResult);


        retranslateUi(XDemangleWidget);

        QMetaObject::connectSlotsByName(XDemangleWidget);
    } // setupUi

    void retranslateUi(QWidget *XDemangleWidget)
    {
        groupBoxMode->setTitle(QCoreApplication::translate("XDemangleWidget", "Mode", nullptr));
        labelMode->setText(QString());
        (void)XDemangleWidget;
    } // retranslateUi

};

namespace Ui {
    class XDemangleWidget: public Ui_XDemangleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XDEMANGLEWIDGET_H
