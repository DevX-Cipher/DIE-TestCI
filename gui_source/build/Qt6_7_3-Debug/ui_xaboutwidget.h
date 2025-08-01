/********************************************************************************
** Form generated from reading UI file 'xaboutwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XABOUTWIDGET_H
#define UI_XABOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XAboutWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *labelLogo;
    QTabWidget *tabWidgetAbout;
    QWidget *tabInfo;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonFollowGithub;
    QPushButton *pushButtonFollowTwitter;
    QPushButton *pushButtonFollowYoutube;
    QLabel *labelInfo;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonThanks;
    QLabel *labelDate;
    QPushButton *pushButtonCheckUpdates;
    QWidget *tabLibraries;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelLibraries;

    void setupUi(QWidget *XAboutWidget)
    {
        if (XAboutWidget->objectName().isEmpty())
            XAboutWidget->setObjectName("XAboutWidget");
        XAboutWidget->resize(590, 342);
        XAboutWidget->setWindowTitle(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(XAboutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelLogo = new QLabel(XAboutWidget);
        labelLogo->setObjectName("labelLogo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLogo->sizePolicy().hasHeightForWidth());
        labelLogo->setSizePolicy(sizePolicy);
        labelLogo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelLogo);

        tabWidgetAbout = new QTabWidget(XAboutWidget);
        tabWidgetAbout->setObjectName("tabWidgetAbout");
        tabInfo = new QWidget();
        tabInfo->setObjectName("tabInfo");
        verticalLayout = new QVBoxLayout(tabInfo);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(tabInfo);
        groupBox->setObjectName("groupBox");
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        pushButtonFollowGithub = new QPushButton(groupBox);
        pushButtonFollowGithub->setObjectName("pushButtonFollowGithub");
        pushButtonFollowGithub->setText(QString::fromUtf8("GitHub"));

        horizontalLayout_4->addWidget(pushButtonFollowGithub);

        pushButtonFollowTwitter = new QPushButton(groupBox);
        pushButtonFollowTwitter->setObjectName("pushButtonFollowTwitter");
        pushButtonFollowTwitter->setText(QString::fromUtf8("Twitter"));

        horizontalLayout_4->addWidget(pushButtonFollowTwitter);

        pushButtonFollowYoutube = new QPushButton(groupBox);
        pushButtonFollowYoutube->setObjectName("pushButtonFollowYoutube");
        pushButtonFollowYoutube->setText(QString::fromUtf8("YouTube"));

        horizontalLayout_4->addWidget(pushButtonFollowYoutube);


        verticalLayout->addWidget(groupBox);

        labelInfo = new QLabel(tabInfo);
        labelInfo->setObjectName("labelInfo");
        sizePolicy.setHeightForWidth(labelInfo->sizePolicy().hasHeightForWidth());
        labelInfo->setSizePolicy(sizePolicy);
        labelInfo->setOpenExternalLinks(false);

        verticalLayout->addWidget(labelInfo);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonThanks = new QPushButton(tabInfo);
        pushButtonThanks->setObjectName("pushButtonThanks");

        horizontalLayout_2->addWidget(pushButtonThanks);

        labelDate = new QLabel(tabInfo);
        labelDate->setObjectName("labelDate");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelDate->sizePolicy().hasHeightForWidth());
        labelDate->setSizePolicy(sizePolicy1);
        labelDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelDate);

        pushButtonCheckUpdates = new QPushButton(tabInfo);
        pushButtonCheckUpdates->setObjectName("pushButtonCheckUpdates");

        horizontalLayout_2->addWidget(pushButtonCheckUpdates);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidgetAbout->addTab(tabInfo, QString());
        tabLibraries = new QWidget();
        tabLibraries->setObjectName("tabLibraries");
        verticalLayout_2 = new QVBoxLayout(tabLibraries);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelLibraries = new QLabel(tabLibraries);
        labelLibraries->setObjectName("labelLibraries");
        sizePolicy.setHeightForWidth(labelLibraries->sizePolicy().hasHeightForWidth());
        labelLibraries->setSizePolicy(sizePolicy);
        labelLibraries->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(labelLibraries);

        tabWidgetAbout->addTab(tabLibraries, QString());

        horizontalLayout->addWidget(tabWidgetAbout);


        retranslateUi(XAboutWidget);

        tabWidgetAbout->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XAboutWidget);
    } // setupUi

    void retranslateUi(QWidget *XAboutWidget)
    {
        labelLogo->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("XAboutWidget", "Follow me", nullptr));
        labelInfo->setText(QString());
        pushButtonThanks->setText(QCoreApplication::translate("XAboutWidget", "Thanks", nullptr));
        labelDate->setText(QString());
        pushButtonCheckUpdates->setText(QCoreApplication::translate("XAboutWidget", "Check updates", nullptr));
        tabWidgetAbout->setTabText(tabWidgetAbout->indexOf(tabInfo), QCoreApplication::translate("XAboutWidget", "Info", nullptr));
        labelLibraries->setText(QString());
        tabWidgetAbout->setTabText(tabWidgetAbout->indexOf(tabLibraries), QCoreApplication::translate("XAboutWidget", "Libraries", nullptr));
        (void)XAboutWidget;
    } // retranslateUi

};

namespace Ui {
    class XAboutWidget: public Ui_XAboutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XABOUTWIDGET_H
