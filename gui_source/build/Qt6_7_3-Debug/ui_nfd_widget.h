/********************************************************************************
** Form generated from reading UI file 'nfd_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NFD_WIDGET_H
#define UI_NFD_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xcomboboxex.h"

QT_BEGIN_NAMESPACE

class Ui_NFD_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeViewResult;
    QStackedWidget *stackedWidgetNfdScan;
    QWidget *pageScan;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonNfdInfo;
    XComboBoxEx *comboBoxFlags;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonNfdDirectoryScan;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonNfdExtraInformation;
    QLineEdit *lineEditElapsedTime;
    QPushButton *pushButtonNfdScanStart;
    QWidget *pageProgress;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QProgressBar *progressBar0;
    QProgressBar *progressBar1;
    QProgressBar *progressBar2;
    QProgressBar *progressBar3;
    QProgressBar *progressBar4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonNfdScanStop;

    void setupUi(QWidget *NFD_Widget)
    {
        if (NFD_Widget->objectName().isEmpty())
            NFD_Widget->setObjectName("NFD_Widget");
        NFD_Widget->resize(674, 277);
        NFD_Widget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(NFD_Widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeViewResult = new QTreeView(NFD_Widget);
        treeViewResult->setObjectName("treeViewResult");
        treeViewResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeViewResult->setSelectionMode(QAbstractItemView::SingleSelection);
        treeViewResult->setSelectionBehavior(QAbstractItemView::SelectItems);
        treeViewResult->header()->setVisible(false);

        verticalLayout_2->addWidget(treeViewResult);

        stackedWidgetNfdScan = new QStackedWidget(NFD_Widget);
        stackedWidgetNfdScan->setObjectName("stackedWidgetNfdScan");
        stackedWidgetNfdScan->setMaximumSize(QSize(16777215, 60));
        pageScan = new QWidget();
        pageScan->setObjectName("pageScan");
        horizontalLayout_3 = new QHBoxLayout(pageScan);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonNfdInfo = new QPushButton(pageScan);
        pushButtonNfdInfo->setObjectName("pushButtonNfdInfo");

        horizontalLayout_2->addWidget(pushButtonNfdInfo);

        comboBoxFlags = new XComboBoxEx(pageScan);
        comboBoxFlags->setObjectName("comboBoxFlags");
        comboBoxFlags->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(comboBoxFlags);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonNfdDirectoryScan = new QPushButton(pageScan);
        pushButtonNfdDirectoryScan->setObjectName("pushButtonNfdDirectoryScan");

        horizontalLayout->addWidget(pushButtonNfdDirectoryScan);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonNfdExtraInformation = new QPushButton(pageScan);
        pushButtonNfdExtraInformation->setObjectName("pushButtonNfdExtraInformation");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonNfdExtraInformation->sizePolicy().hasHeightForWidth());
        pushButtonNfdExtraInformation->setSizePolicy(sizePolicy);
        pushButtonNfdExtraInformation->setMaximumSize(QSize(23, 16777215));
        pushButtonNfdExtraInformation->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(pushButtonNfdExtraInformation);

        lineEditElapsedTime = new QLineEdit(pageScan);
        lineEditElapsedTime->setObjectName("lineEditElapsedTime");
        sizePolicy.setHeightForWidth(lineEditElapsedTime->sizePolicy().hasHeightForWidth());
        lineEditElapsedTime->setSizePolicy(sizePolicy);
        lineEditElapsedTime->setMaximumSize(QSize(80, 16777215));
        lineEditElapsedTime->setAlignment(Qt::AlignCenter);
        lineEditElapsedTime->setReadOnly(true);

        horizontalLayout->addWidget(lineEditElapsedTime);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        pushButtonNfdScanStart = new QPushButton(pageScan);
        pushButtonNfdScanStart->setObjectName("pushButtonNfdScanStart");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonNfdScanStart->sizePolicy().hasHeightForWidth());
        pushButtonNfdScanStart->setSizePolicy(sizePolicy1);
        pushButtonNfdScanStart->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(pushButtonNfdScanStart);

        stackedWidgetNfdScan->addWidget(pageScan);
        pageProgress = new QWidget();
        pageProgress->setObjectName("pageProgress");
        horizontalLayout_4 = new QHBoxLayout(pageProgress);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        progressBar0 = new QProgressBar(pageProgress);
        progressBar0->setObjectName("progressBar0");
        progressBar0->setMaximum(0);
        progressBar0->setValue(0);

        verticalLayout_3->addWidget(progressBar0);

        progressBar1 = new QProgressBar(pageProgress);
        progressBar1->setObjectName("progressBar1");
        progressBar1->setMaximum(0);
        progressBar1->setValue(0);
        progressBar1->setTextVisible(true);

        verticalLayout_3->addWidget(progressBar1);

        progressBar2 = new QProgressBar(pageProgress);
        progressBar2->setObjectName("progressBar2");
        progressBar2->setMaximum(0);
        progressBar2->setValue(0);
        progressBar2->setTextVisible(true);

        verticalLayout_3->addWidget(progressBar2);

        progressBar3 = new QProgressBar(pageProgress);
        progressBar3->setObjectName("progressBar3");
        progressBar3->setMaximum(0);
        progressBar3->setValue(0);
        progressBar3->setTextVisible(true);

        verticalLayout_3->addWidget(progressBar3);

        progressBar4 = new QProgressBar(pageProgress);
        progressBar4->setObjectName("progressBar4");
        progressBar4->setMaximum(0);
        progressBar4->setValue(0);
        progressBar4->setTextVisible(true);

        verticalLayout_3->addWidget(progressBar4);

        horizontalSpacer_3 = new QSpacerItem(40, 2, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_3);

        pushButtonNfdScanStop = new QPushButton(pageProgress);
        pushButtonNfdScanStop->setObjectName("pushButtonNfdScanStop");
        sizePolicy1.setHeightForWidth(pushButtonNfdScanStop->sizePolicy().hasHeightForWidth());
        pushButtonNfdScanStop->setSizePolicy(sizePolicy1);
        pushButtonNfdScanStop->setMinimumSize(QSize(100, 0));

        horizontalLayout_4->addWidget(pushButtonNfdScanStop);

        stackedWidgetNfdScan->addWidget(pageProgress);

        verticalLayout_2->addWidget(stackedWidgetNfdScan);


        retranslateUi(NFD_Widget);

        stackedWidgetNfdScan->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NFD_Widget);
    } // setupUi

    void retranslateUi(QWidget *NFD_Widget)
    {
        pushButtonNfdInfo->setText(QCoreApplication::translate("NFD_Widget", "Info", nullptr));
        pushButtonNfdDirectoryScan->setText(QCoreApplication::translate("NFD_Widget", "Directory", nullptr));
        pushButtonNfdScanStart->setText(QCoreApplication::translate("NFD_Widget", "Scan", nullptr));
        progressBar0->setFormat(QString());
        progressBar1->setFormat(QString());
        progressBar2->setFormat(QString());
        progressBar3->setFormat(QString());
        progressBar4->setFormat(QString());
        pushButtonNfdScanStop->setText(QCoreApplication::translate("NFD_Widget", "Stop", nullptr));
        (void)NFD_Widget;
    } // retranslateUi

};

namespace Ui {
    class NFD_Widget: public Ui_NFD_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NFD_WIDGET_H
