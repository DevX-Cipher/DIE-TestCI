/********************************************************************************
** Form generated from reading UI file 'searchsignaturesoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSIGNATURESOPTIONSWIDGET_H
#define UI_SEARCHSIGNATURESOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchSignaturesOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollAreaSearchSignatures;
    QWidget *scrollAreaWidgetSearchSignatures;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxSearchSignaturesPath;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEditSearchSignaturesPath;
    QToolButton *toolButtonSearchSignaturesPath;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *SearchSignaturesOptionsWidget)
    {
        if (SearchSignaturesOptionsWidget->objectName().isEmpty())
            SearchSignaturesOptionsWidget->setObjectName("SearchSignaturesOptionsWidget");
        SearchSignaturesOptionsWidget->resize(364, 191);
        verticalLayout = new QVBoxLayout(SearchSignaturesOptionsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollAreaSearchSignatures = new QScrollArea(SearchSignaturesOptionsWidget);
        scrollAreaSearchSignatures->setObjectName("scrollAreaSearchSignatures");
        scrollAreaSearchSignatures->setFrameShape(QFrame::NoFrame);
        scrollAreaSearchSignatures->setFrameShadow(QFrame::Plain);
        scrollAreaSearchSignatures->setWidgetResizable(true);
        scrollAreaWidgetSearchSignatures = new QWidget();
        scrollAreaWidgetSearchSignatures->setObjectName("scrollAreaWidgetSearchSignatures");
        scrollAreaWidgetSearchSignatures->setGeometry(QRect(0, 0, 364, 191));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetSearchSignatures);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBoxSearchSignaturesPath = new QGroupBox(scrollAreaWidgetSearchSignatures);
        groupBoxSearchSignaturesPath->setObjectName("groupBoxSearchSignaturesPath");
        horizontalLayout_6 = new QHBoxLayout(groupBoxSearchSignaturesPath);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        lineEditSearchSignaturesPath = new QLineEdit(groupBoxSearchSignaturesPath);
        lineEditSearchSignaturesPath->setObjectName("lineEditSearchSignaturesPath");

        horizontalLayout_6->addWidget(lineEditSearchSignaturesPath);

        toolButtonSearchSignaturesPath = new QToolButton(groupBoxSearchSignaturesPath);
        toolButtonSearchSignaturesPath->setObjectName("toolButtonSearchSignaturesPath");
        toolButtonSearchSignaturesPath->setText(QString::fromUtf8("..."));

        horizontalLayout_6->addWidget(toolButtonSearchSignaturesPath);


        verticalLayout_2->addWidget(groupBoxSearchSignaturesPath);

        verticalSpacer_2 = new QSpacerItem(20, 149, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        scrollAreaSearchSignatures->setWidget(scrollAreaWidgetSearchSignatures);

        verticalLayout->addWidget(scrollAreaSearchSignatures);


        retranslateUi(SearchSignaturesOptionsWidget);

        QMetaObject::connectSlotsByName(SearchSignaturesOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchSignaturesOptionsWidget)
    {
        SearchSignaturesOptionsWidget->setWindowTitle(QCoreApplication::translate("SearchSignaturesOptionsWidget", "Form", nullptr));
        groupBoxSearchSignaturesPath->setTitle(QCoreApplication::translate("SearchSignaturesOptionsWidget", "Search signatures", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchSignaturesOptionsWidget: public Ui_SearchSignaturesOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSIGNATURESOPTIONSWIDGET_H
