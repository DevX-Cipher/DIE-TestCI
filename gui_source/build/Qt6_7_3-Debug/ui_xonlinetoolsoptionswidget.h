/********************************************************************************
** Form generated from reading UI file 'xonlinetoolsoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XONLINETOOLSOPTIONSWIDGET_H
#define UI_XONLINETOOLSOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XOnlineToolsOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxVirusTotalApiKey;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditVirusTotalApiKey;
    QPushButton *pushButtonGetVirusTotalApiKey;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *XOnlineToolsOptionsWidget)
    {
        if (XOnlineToolsOptionsWidget->objectName().isEmpty())
            XOnlineToolsOptionsWidget->setObjectName("XOnlineToolsOptionsWidget");
        XOnlineToolsOptionsWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(XOnlineToolsOptionsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBoxVirusTotalApiKey = new QGroupBox(XOnlineToolsOptionsWidget);
        groupBoxVirusTotalApiKey->setObjectName("groupBoxVirusTotalApiKey");
        groupBoxVirusTotalApiKey->setTitle(QString::fromUtf8("VirusTotal API key"));
        horizontalLayout = new QHBoxLayout(groupBoxVirusTotalApiKey);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        lineEditVirusTotalApiKey = new QLineEdit(groupBoxVirusTotalApiKey);
        lineEditVirusTotalApiKey->setObjectName("lineEditVirusTotalApiKey");

        horizontalLayout->addWidget(lineEditVirusTotalApiKey);

        pushButtonGetVirusTotalApiKey = new QPushButton(groupBoxVirusTotalApiKey);
        pushButtonGetVirusTotalApiKey->setObjectName("pushButtonGetVirusTotalApiKey");

        horizontalLayout->addWidget(pushButtonGetVirusTotalApiKey);


        verticalLayout->addWidget(groupBoxVirusTotalApiKey);

        verticalSpacer = new QSpacerItem(20, 249, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(XOnlineToolsOptionsWidget);

        QMetaObject::connectSlotsByName(XOnlineToolsOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *XOnlineToolsOptionsWidget)
    {
        XOnlineToolsOptionsWidget->setWindowTitle(QCoreApplication::translate("XOnlineToolsOptionsWidget", "Form", nullptr));
        pushButtonGetVirusTotalApiKey->setText(QCoreApplication::translate("XOnlineToolsOptionsWidget", "Get", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XOnlineToolsOptionsWidget: public Ui_XOnlineToolsOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XONLINETOOLSOPTIONSWIDGET_H
