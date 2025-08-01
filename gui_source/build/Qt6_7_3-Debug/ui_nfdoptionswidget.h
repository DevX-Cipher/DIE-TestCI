/********************************************************************************
** Form generated from reading UI file 'nfdoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NFDOPTIONSWIDGET_H
#define UI_NFDOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NFDOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollAreaStaticScan;
    QWidget *scrollAreaWidgetStaticScan;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxScanAfterOpen;
    QCheckBox *checkBoxRecursiveScan;
    QCheckBox *checkBoxDeepScan;
    QCheckBox *checkBoxHeuristicScan;
    QCheckBox *checkBoxVerbose;
    QCheckBox *checkBoxAllTypesScan;
    QCheckBox *checkBoxFormatResult;
    QCheckBox *checkBoxHighlight;
    QGroupBox *groupBoxBufferSize;
    QVBoxLayout *verticalLayout_10;
    QComboBox *comboBoxBufferSize;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *NFDOptionsWidget)
    {
        if (NFDOptionsWidget->objectName().isEmpty())
            NFDOptionsWidget->setObjectName("NFDOptionsWidget");
        NFDOptionsWidget->resize(565, 518);
        NFDOptionsWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(NFDOptionsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollAreaStaticScan = new QScrollArea(NFDOptionsWidget);
        scrollAreaStaticScan->setObjectName("scrollAreaStaticScan");
        scrollAreaStaticScan->setFrameShape(QFrame::Shape::NoFrame);
        scrollAreaStaticScan->setFrameShadow(QFrame::Shadow::Plain);
        scrollAreaStaticScan->setWidgetResizable(true);
        scrollAreaWidgetStaticScan = new QWidget();
        scrollAreaWidgetStaticScan->setObjectName("scrollAreaWidgetStaticScan");
        scrollAreaWidgetStaticScan->setGeometry(QRect(0, 0, 565, 518));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetStaticScan);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBoxScanAfterOpen = new QCheckBox(scrollAreaWidgetStaticScan);
        checkBoxScanAfterOpen->setObjectName("checkBoxScanAfterOpen");

        verticalLayout_2->addWidget(checkBoxScanAfterOpen);

        checkBoxRecursiveScan = new QCheckBox(scrollAreaWidgetStaticScan);
        checkBoxRecursiveScan->setObjectName("checkBoxRecursiveScan");

        verticalLayout_2->addWidget(checkBoxRecursiveScan);

        checkBoxDeepScan = new QCheckBox(scrollAreaWidgetStaticScan);
        checkBoxDeepScan->setObjectName("checkBoxDeepScan");

        verticalLayout_2->addWidget(checkBoxDeepScan);

        checkBoxHeuristicScan = new QCheckBox(scrollAreaWidgetStaticScan);
        checkBoxHeuristicScan->setObjectName("checkBoxHeuristicScan");

        verticalLayout_2->addWidget(checkBoxHeuristicScan);

        checkBoxVerbose = new QCheckBox(scrollAreaWidgetStaticScan);
        checkBoxVerbose->setObjectName("checkBoxVerbose");

        verticalLayout_2->addWidget(checkBoxVerbose);

        checkBoxAllTypesScan = new QCheckBox(scrollAreaWidgetStaticScan);
        checkBoxAllTypesScan->setObjectName("checkBoxAllTypesScan");

        verticalLayout_2->addWidget(checkBoxAllTypesScan);

        checkBoxFormatResult = new QCheckBox(scrollAreaWidgetStaticScan);
        checkBoxFormatResult->setObjectName("checkBoxFormatResult");

        verticalLayout_2->addWidget(checkBoxFormatResult);

        checkBoxHighlight = new QCheckBox(scrollAreaWidgetStaticScan);
        checkBoxHighlight->setObjectName("checkBoxHighlight");

        verticalLayout_2->addWidget(checkBoxHighlight);

        groupBoxBufferSize = new QGroupBox(scrollAreaWidgetStaticScan);
        groupBoxBufferSize->setObjectName("groupBoxBufferSize");
        groupBoxBufferSize->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        verticalLayout_10 = new QVBoxLayout(groupBoxBufferSize);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(2, 2, 2, 2);
        comboBoxBufferSize = new QComboBox(groupBoxBufferSize);
        comboBoxBufferSize->setObjectName("comboBoxBufferSize");
        comboBoxBufferSize->setMinimumSize(QSize(200, 0));

        verticalLayout_10->addWidget(comboBoxBufferSize);


        verticalLayout_2->addWidget(groupBoxBufferSize);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollAreaStaticScan->setWidget(scrollAreaWidgetStaticScan);

        verticalLayout->addWidget(scrollAreaStaticScan);


        retranslateUi(NFDOptionsWidget);

        QMetaObject::connectSlotsByName(NFDOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *NFDOptionsWidget)
    {
        checkBoxScanAfterOpen->setText(QCoreApplication::translate("NFDOptionsWidget", "Scan after open", nullptr));
        checkBoxRecursiveScan->setText(QCoreApplication::translate("NFDOptionsWidget", "Recursive scan", nullptr));
        checkBoxDeepScan->setText(QCoreApplication::translate("NFDOptionsWidget", "Deep scan", nullptr));
        checkBoxHeuristicScan->setText(QCoreApplication::translate("NFDOptionsWidget", "Heuristic scan", nullptr));
        checkBoxVerbose->setText(QCoreApplication::translate("NFDOptionsWidget", "Verbose", nullptr));
        checkBoxAllTypesScan->setText(QCoreApplication::translate("NFDOptionsWidget", "All types", nullptr));
        checkBoxFormatResult->setText(QCoreApplication::translate("NFDOptionsWidget", "Format result", nullptr));
        checkBoxHighlight->setText(QCoreApplication::translate("NFDOptionsWidget", "Highlight", nullptr));
        groupBoxBufferSize->setTitle(QCoreApplication::translate("NFDOptionsWidget", "Buffer size", nullptr));
        (void)NFDOptionsWidget;
    } // retranslateUi

};

namespace Ui {
    class NFDOptionsWidget: public Ui_NFDOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NFDOPTIONSWIDGET_H
