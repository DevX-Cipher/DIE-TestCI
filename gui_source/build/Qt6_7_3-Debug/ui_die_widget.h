/********************************************************************************
** Form generated from reading UI file 'die_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIE_WIDGET_H
#define UI_DIE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xcomboboxex.h"

QT_BEGIN_NAMESPACE

class Ui_DIE_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeViewResult;
    QStackedWidget *stackedWidgetDieScan;
    QWidget *pageScan;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonDieSignatures;
    XComboBoxEx *comboBoxFlags;
    XComboBoxEx *comboBoxDatabases;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonDieScanDirectory;
    QPushButton *pushButtonDieLog;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonDieExtraInformation;
    QToolButton *toolButtonElapsedTime;
    QPushButton *pushButtonDieScanStart;
    QWidget *pageProgress;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QProgressBar *progressBar0;
    QProgressBar *progressBar1;
    QProgressBar *progressBar2;
    QProgressBar *progressBar3;
    QProgressBar *progressBar4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonDieScanStop;

    void setupUi(QWidget *DIE_Widget)
    {
        if (DIE_Widget->objectName().isEmpty())
            DIE_Widget->setObjectName("DIE_Widget");
        DIE_Widget->resize(873, 645);
        DIE_Widget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(DIE_Widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeViewResult = new QTreeView(DIE_Widget);
        treeViewResult->setObjectName("treeViewResult");
        treeViewResult->setContextMenuPolicy(Qt::CustomContextMenu);
        treeViewResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeViewResult->setSelectionMode(QAbstractItemView::SingleSelection);
        treeViewResult->setSelectionBehavior(QAbstractItemView::SelectItems);
        treeViewResult->header()->setStretchLastSection(false);

        verticalLayout_2->addWidget(treeViewResult);

        stackedWidgetDieScan = new QStackedWidget(DIE_Widget);
        stackedWidgetDieScan->setObjectName("stackedWidgetDieScan");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidgetDieScan->sizePolicy().hasHeightForWidth());
        stackedWidgetDieScan->setSizePolicy(sizePolicy);
        stackedWidgetDieScan->setMaximumSize(QSize(16777215, 60));
        pageScan = new QWidget();
        pageScan->setObjectName("pageScan");
        horizontalLayout_3 = new QHBoxLayout(pageScan);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonDieSignatures = new QPushButton(pageScan);
        pushButtonDieSignatures->setObjectName("pushButtonDieSignatures");

        horizontalLayout_2->addWidget(pushButtonDieSignatures);

        comboBoxFlags = new XComboBoxEx(pageScan);
        comboBoxFlags->setObjectName("comboBoxFlags");
        comboBoxFlags->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(comboBoxFlags);

        comboBoxDatabases = new XComboBoxEx(pageScan);
        comboBoxDatabases->setObjectName("comboBoxDatabases");
        comboBoxDatabases->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(comboBoxDatabases);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonDieScanDirectory = new QPushButton(pageScan);
        pushButtonDieScanDirectory->setObjectName("pushButtonDieScanDirectory");

        horizontalLayout->addWidget(pushButtonDieScanDirectory);

        pushButtonDieLog = new QPushButton(pageScan);
        pushButtonDieLog->setObjectName("pushButtonDieLog");

        horizontalLayout->addWidget(pushButtonDieLog);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonDieExtraInformation = new QPushButton(pageScan);
        pushButtonDieExtraInformation->setObjectName("pushButtonDieExtraInformation");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonDieExtraInformation->sizePolicy().hasHeightForWidth());
        pushButtonDieExtraInformation->setSizePolicy(sizePolicy1);
        pushButtonDieExtraInformation->setMaximumSize(QSize(23, 16777215));
        pushButtonDieExtraInformation->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(pushButtonDieExtraInformation);

        toolButtonElapsedTime = new QToolButton(pageScan);
        toolButtonElapsedTime->setObjectName("toolButtonElapsedTime");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButtonElapsedTime->sizePolicy().hasHeightForWidth());
        toolButtonElapsedTime->setSizePolicy(sizePolicy2);
        toolButtonElapsedTime->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(toolButtonElapsedTime);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        pushButtonDieScanStart = new QPushButton(pageScan);
        pushButtonDieScanStart->setObjectName("pushButtonDieScanStart");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonDieScanStart->sizePolicy().hasHeightForWidth());
        pushButtonDieScanStart->setSizePolicy(sizePolicy3);
        pushButtonDieScanStart->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(pushButtonDieScanStart);

        stackedWidgetDieScan->addWidget(pageScan);
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

        pushButtonDieScanStop = new QPushButton(pageProgress);
        pushButtonDieScanStop->setObjectName("pushButtonDieScanStop");
        sizePolicy3.setHeightForWidth(pushButtonDieScanStop->sizePolicy().hasHeightForWidth());
        pushButtonDieScanStop->setSizePolicy(sizePolicy3);
        pushButtonDieScanStop->setMinimumSize(QSize(100, 0));

        horizontalLayout_4->addWidget(pushButtonDieScanStop);

        stackedWidgetDieScan->addWidget(pageProgress);

        verticalLayout_2->addWidget(stackedWidgetDieScan);


        retranslateUi(DIE_Widget);

        stackedWidgetDieScan->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DIE_Widget);
    } // setupUi

    void retranslateUi(QWidget *DIE_Widget)
    {
        pushButtonDieSignatures->setText(QCoreApplication::translate("DIE_Widget", "Signatures", nullptr));
        pushButtonDieScanDirectory->setText(QCoreApplication::translate("DIE_Widget", "Directory", nullptr));
        pushButtonDieLog->setText(QCoreApplication::translate("DIE_Widget", "Log", nullptr));
        toolButtonElapsedTime->setText(QString());
        pushButtonDieScanStart->setText(QCoreApplication::translate("DIE_Widget", "Scan", nullptr));
        progressBar0->setFormat(QString());
        progressBar1->setFormat(QString());
        progressBar2->setFormat(QString());
        progressBar3->setFormat(QString());
        progressBar4->setFormat(QString());
        pushButtonDieScanStop->setText(QCoreApplication::translate("DIE_Widget", "Stop", nullptr));
        (void)DIE_Widget;
    } // retranslateUi

};

namespace Ui {
    class DIE_Widget: public Ui_DIE_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIE_WIDGET_H
