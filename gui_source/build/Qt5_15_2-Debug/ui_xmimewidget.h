/********************************************************************************
** Form generated from reading UI file 'xmimewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XMIMEWIDGET_H
#define UI_XMIMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XMIMEWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxAll;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEditMIME;

    void setupUi(QWidget *XMIMEWidget)
    {
        if (XMIMEWidget->objectName().isEmpty())
            XMIMEWidget->setObjectName(QString::fromUtf8("XMIMEWidget"));
        XMIMEWidget->resize(462, 294);
        XMIMEWidget->setWindowTitle(QString::fromUtf8("MIME"));
        verticalLayout = new QVBoxLayout(XMIMEWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxAll = new QCheckBox(XMIMEWidget);
        checkBoxAll->setObjectName(QString::fromUtf8("checkBoxAll"));

        horizontalLayout->addWidget(checkBoxAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEditMIME = new QPlainTextEdit(XMIMEWidget);
        plainTextEditMIME->setObjectName(QString::fromUtf8("plainTextEditMIME"));
        plainTextEditMIME->setReadOnly(true);

        verticalLayout->addWidget(plainTextEditMIME);


        retranslateUi(XMIMEWidget);

        QMetaObject::connectSlotsByName(XMIMEWidget);
    } // setupUi

    void retranslateUi(QWidget *XMIMEWidget)
    {
        checkBoxAll->setText(QCoreApplication::translate("XMIMEWidget", "All", nullptr));
        (void)XMIMEWidget;
    } // retranslateUi

};

namespace Ui {
    class XMIMEWidget: public Ui_XMIMEWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XMIMEWIDGET_H
