/********************************************************************************
** Form generated from reading UI file 'yara_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YARA_WIDGET_H
#define UI_YARA_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YARA_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeViewResult;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonYaraInfo;
    QPushButton *pushButtonRules;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBarScan;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonYaraExtraInformation;
    QLineEdit *lineEditElapsedTime;
    QPushButton *pushButtonYaraScan;

    void setupUi(QWidget *YARA_Widget)
    {
        if (YARA_Widget->objectName().isEmpty())
            YARA_Widget->setObjectName("YARA_Widget");
        YARA_Widget->resize(526, 170);
        YARA_Widget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(YARA_Widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeViewResult = new QTreeView(YARA_Widget);
        treeViewResult->setObjectName("treeViewResult");
        treeViewResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeViewResult->setSelectionMode(QAbstractItemView::SingleSelection);
        treeViewResult->setSelectionBehavior(QAbstractItemView::SelectItems);
        treeViewResult->header()->setVisible(false);

        verticalLayout_2->addWidget(treeViewResult);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonYaraInfo = new QPushButton(YARA_Widget);
        pushButtonYaraInfo->setObjectName("pushButtonYaraInfo");

        horizontalLayout_2->addWidget(pushButtonYaraInfo);

        pushButtonRules = new QPushButton(YARA_Widget);
        pushButtonRules->setObjectName("pushButtonRules");

        horizontalLayout_2->addWidget(pushButtonRules);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        progressBarScan = new QProgressBar(YARA_Widget);
        progressBarScan->setObjectName("progressBarScan");
        progressBarScan->setMaximum(0);
        progressBarScan->setValue(0);
        progressBarScan->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(progressBarScan);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonYaraExtraInformation = new QPushButton(YARA_Widget);
        pushButtonYaraExtraInformation->setObjectName("pushButtonYaraExtraInformation");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonYaraExtraInformation->sizePolicy().hasHeightForWidth());
        pushButtonYaraExtraInformation->setSizePolicy(sizePolicy);
        pushButtonYaraExtraInformation->setMaximumSize(QSize(23, 16777215));
        pushButtonYaraExtraInformation->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(pushButtonYaraExtraInformation);

        lineEditElapsedTime = new QLineEdit(YARA_Widget);
        lineEditElapsedTime->setObjectName("lineEditElapsedTime");
        sizePolicy.setHeightForWidth(lineEditElapsedTime->sizePolicy().hasHeightForWidth());
        lineEditElapsedTime->setSizePolicy(sizePolicy);
        lineEditElapsedTime->setMaximumSize(QSize(80, 16777215));
        lineEditElapsedTime->setAlignment(Qt::AlignCenter);
        lineEditElapsedTime->setReadOnly(true);

        horizontalLayout->addWidget(lineEditElapsedTime);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        pushButtonYaraScan = new QPushButton(YARA_Widget);
        pushButtonYaraScan->setObjectName("pushButtonYaraScan");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonYaraScan->sizePolicy().hasHeightForWidth());
        pushButtonYaraScan->setSizePolicy(sizePolicy1);
        pushButtonYaraScan->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(pushButtonYaraScan);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(YARA_Widget);

        QMetaObject::connectSlotsByName(YARA_Widget);
    } // setupUi

    void retranslateUi(QWidget *YARA_Widget)
    {
        pushButtonYaraInfo->setText(QCoreApplication::translate("YARA_Widget", "Info", nullptr));
        pushButtonRules->setText(QCoreApplication::translate("YARA_Widget", "Rules", nullptr));
        pushButtonYaraScan->setText(QCoreApplication::translate("YARA_Widget", "Scan", nullptr));
        (void)YARA_Widget;
    } // retranslateUi

};

namespace Ui {
    class YARA_Widget: public Ui_YARA_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YARA_WIDGET_H
