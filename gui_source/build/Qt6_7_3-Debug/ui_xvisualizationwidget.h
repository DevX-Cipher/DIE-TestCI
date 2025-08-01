/********************************************************************************
** Form generated from reading UI file 'xvisualizationwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XVISUALIZATIONWIDGET_H
#define UI_XVISUALIZATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xcomboboxex.h"
#include "xvisualizationimage.h"

QT_BEGIN_NAMESPACE

class Ui_XVisualizationWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxType;
    QComboBox *comboBoxMapMode;
    QSpinBox *spinBoxWidth;
    QSpinBox *spinBoxHeight;
    XComboBoxEx *comboBoxMethods;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonVisualizationSave;
    QToolButton *toolButtonVisualizationReload;
    QGroupBox *groupBoxVisualization;
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitterVisualization;
    QTabWidget *tabWidgetVisualization;
    QWidget *tabImage;
    QVBoxLayout *verticalLayout_4;
    XVisualizationImage *widgetImage;
    QWidget *tabSchema;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsViewResult;
    QSlider *horizontalSliderZoom;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBoxBlockSize;
    QComboBox *comboBoxMethod;
    QListWidget *listWidgetRegions;
    QListWidget *listWidgetHighlights;

    void setupUi(QWidget *XVisualizationWidget)
    {
        if (XVisualizationWidget->objectName().isEmpty())
            XVisualizationWidget->setObjectName("XVisualizationWidget");
        XVisualizationWidget->resize(919, 695);
        XVisualizationWidget->setMinimumSize(QSize(120, 0));
        verticalLayout_3 = new QVBoxLayout(XVisualizationWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxType = new QComboBox(XVisualizationWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        comboBoxMapMode = new QComboBox(XVisualizationWidget);
        comboBoxMapMode->setObjectName("comboBoxMapMode");
        comboBoxMapMode->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxMapMode);

        spinBoxWidth = new QSpinBox(XVisualizationWidget);
        spinBoxWidth->setObjectName("spinBoxWidth");
        spinBoxWidth->setMinimumSize(QSize(120, 0));
        spinBoxWidth->setMinimum(10);
        spinBoxWidth->setMaximum(1000);

        horizontalLayout->addWidget(spinBoxWidth);

        spinBoxHeight = new QSpinBox(XVisualizationWidget);
        spinBoxHeight->setObjectName("spinBoxHeight");
        spinBoxHeight->setMinimumSize(QSize(120, 0));
        spinBoxHeight->setMinimum(10);
        spinBoxHeight->setMaximum(1000);

        horizontalLayout->addWidget(spinBoxHeight);

        comboBoxMethods = new XComboBoxEx(XVisualizationWidget);
        comboBoxMethods->setObjectName("comboBoxMethods");
        comboBoxMethods->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(comboBoxMethods);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonVisualizationSave = new QToolButton(XVisualizationWidget);
        toolButtonVisualizationSave->setObjectName("toolButtonVisualizationSave");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonVisualizationSave->sizePolicy().hasHeightForWidth());
        toolButtonVisualizationSave->setSizePolicy(sizePolicy);
        toolButtonVisualizationSave->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonVisualizationSave);

        toolButtonVisualizationReload = new QToolButton(XVisualizationWidget);
        toolButtonVisualizationReload->setObjectName("toolButtonVisualizationReload");
        sizePolicy.setHeightForWidth(toolButtonVisualizationReload->sizePolicy().hasHeightForWidth());
        toolButtonVisualizationReload->setSizePolicy(sizePolicy);
        toolButtonVisualizationReload->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButtonVisualizationReload);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBoxVisualization = new QGroupBox(XVisualizationWidget);
        groupBoxVisualization->setObjectName("groupBoxVisualization");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxVisualization->sizePolicy().hasHeightForWidth());
        groupBoxVisualization->setSizePolicy(sizePolicy1);
        verticalLayout_8 = new QVBoxLayout(groupBoxVisualization);
        verticalLayout_8->setSpacing(1);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(1, 1, 1, 1);
        splitterVisualization = new QSplitter(groupBoxVisualization);
        splitterVisualization->setObjectName("splitterVisualization");
        splitterVisualization->setOrientation(Qt::Horizontal);
        tabWidgetVisualization = new QTabWidget(splitterVisualization);
        tabWidgetVisualization->setObjectName("tabWidgetVisualization");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidgetVisualization->sizePolicy().hasHeightForWidth());
        tabWidgetVisualization->setSizePolicy(sizePolicy2);
        tabImage = new QWidget();
        tabImage->setObjectName("tabImage");
        verticalLayout_4 = new QVBoxLayout(tabImage);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widgetImage = new XVisualizationImage(tabImage);
        widgetImage->setObjectName("widgetImage");

        verticalLayout_4->addWidget(widgetImage);

        tabWidgetVisualization->addTab(tabImage, QString());
        tabSchema = new QWidget();
        tabSchema->setObjectName("tabSchema");
        verticalLayout = new QVBoxLayout(tabSchema);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsViewResult = new QGraphicsView(tabSchema);
        graphicsViewResult->setObjectName("graphicsViewResult");
        sizePolicy2.setHeightForWidth(graphicsViewResult->sizePolicy().hasHeightForWidth());
        graphicsViewResult->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(graphicsViewResult);

        horizontalSliderZoom = new QSlider(tabSchema);
        horizontalSliderZoom->setObjectName("horizontalSliderZoom");
        horizontalSliderZoom->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSliderZoom);

        tabWidgetVisualization->addTab(tabSchema, QString());
        splitterVisualization->addWidget(tabWidgetVisualization);
        layoutWidget = new QWidget(splitterVisualization);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        spinBoxBlockSize = new QSpinBox(layoutWidget);
        spinBoxBlockSize->setObjectName("spinBoxBlockSize");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBoxBlockSize->sizePolicy().hasHeightForWidth());
        spinBoxBlockSize->setSizePolicy(sizePolicy3);
        spinBoxBlockSize->setMinimumSize(QSize(120, 0));
        spinBoxBlockSize->setMinimum(1);
        spinBoxBlockSize->setMaximum(10);

        horizontalLayout_2->addWidget(spinBoxBlockSize);

        comboBoxMethod = new QComboBox(layoutWidget);
        comboBoxMethod->setObjectName("comboBoxMethod");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBoxMethod->sizePolicy().hasHeightForWidth());
        comboBoxMethod->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(comboBoxMethod);


        verticalLayout_2->addLayout(horizontalLayout_2);

        listWidgetRegions = new QListWidget(layoutWidget);
        listWidgetRegions->setObjectName("listWidgetRegions");

        verticalLayout_2->addWidget(listWidgetRegions);

        listWidgetHighlights = new QListWidget(layoutWidget);
        listWidgetHighlights->setObjectName("listWidgetHighlights");

        verticalLayout_2->addWidget(listWidgetHighlights);

        splitterVisualization->addWidget(layoutWidget);

        verticalLayout_8->addWidget(splitterVisualization);


        verticalLayout_3->addWidget(groupBoxVisualization);


        retranslateUi(XVisualizationWidget);

        tabWidgetVisualization->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XVisualizationWidget);
    } // setupUi

    void retranslateUi(QWidget *XVisualizationWidget)
    {
        XVisualizationWidget->setWindowTitle(QCoreApplication::translate("XVisualizationWidget", "Form", nullptr));
        toolButtonVisualizationSave->setText(QCoreApplication::translate("XVisualizationWidget", "Save", nullptr));
        toolButtonVisualizationReload->setText(QCoreApplication::translate("XVisualizationWidget", "Reload", nullptr));
        groupBoxVisualization->setTitle(QString());
        tabWidgetVisualization->setTabText(tabWidgetVisualization->indexOf(tabImage), QCoreApplication::translate("XVisualizationWidget", "Image", nullptr));
        tabWidgetVisualization->setTabText(tabWidgetVisualization->indexOf(tabSchema), QCoreApplication::translate("XVisualizationWidget", "Schema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XVisualizationWidget: public Ui_XVisualizationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XVISUALIZATIONWIDGET_H
