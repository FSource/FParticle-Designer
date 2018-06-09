/********************************************************************************
** Form generated from reading UI file 'environment_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENT_SETTING_H
#define UI_ENVIRONMENT_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_environment_setting
{
public:
    QGroupBox *groupBox;
    QStackedWidget *m_stackWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *m_eg_speedValue;
    QLabel *label_3;
    QDoubleSpinBox *m_eg_speedVar;
    QLabel *label_4;
    QDoubleSpinBox *m_eg_gravityXValue;
    QLabel *label_5;
    QDoubleSpinBox *m_eg_gravityYValue;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_8;
    QDoubleSpinBox *m_eg_radialAccelValue;
    QLabel *label_10;
    QDoubleSpinBox *m_eg_radialAccelVar;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_9;
    QDoubleSpinBox *m_eg_tangentialAccelValue;
    QLabel *label_11;
    QDoubleSpinBox *m_eg_tangentialAccelVar;
    QWidget *page_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_12;
    QDoubleSpinBox *m_er_startRadiusValue;
    QLabel *label_14;
    QDoubleSpinBox *m_er_startRadiusVar;
    QLabel *label_13;
    QDoubleSpinBox *m_er_endRadiusValue;
    QLabel *label_15;
    QDoubleSpinBox *m_er_endRadiusVar;
    QLabel *label_16;
    QDoubleSpinBox *m_er_rotateSpeedValue;
    QLabel *label_17;
    QDoubleSpinBox *m_er_rotateSpeedVar;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *m_modeSelect;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_18;
    QComboBox *m_moveSelect;

    void setupUi(QWidget *environment_setting)
    {
        if (environment_setting->objectName().isEmpty())
            environment_setting->setObjectName(QStringLiteral("environment_setting"));
        environment_setting->resize(288, 255);
        groupBox = new QGroupBox(environment_setting);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 271, 241));
        m_stackWidget = new QStackedWidget(groupBox);
        m_stackWidget->setObjectName(QStringLiteral("m_stackWidget"));
        m_stackWidget->setGeometry(QRect(10, 50, 251, 171));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 251, 150));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        m_eg_speedValue = new QDoubleSpinBox(layoutWidget);
        m_eg_speedValue->setObjectName(QStringLiteral("m_eg_speedValue"));
        m_eg_speedValue->setMaximum(1e+09);
        m_eg_speedValue->setSingleStep(1);

        gridLayout->addWidget(m_eg_speedValue, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        m_eg_speedVar = new QDoubleSpinBox(layoutWidget);
        m_eg_speedVar->setObjectName(QStringLiteral("m_eg_speedVar"));
        m_eg_speedVar->setMaximumSize(QSize(16777215, 16777215));
        m_eg_speedVar->setMaximum(1e+09);

        gridLayout->addWidget(m_eg_speedVar, 0, 3, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        m_eg_gravityXValue = new QDoubleSpinBox(layoutWidget);
        m_eg_gravityXValue->setObjectName(QStringLiteral("m_eg_gravityXValue"));
        m_eg_gravityXValue->setMinimum(-1e+09);
        m_eg_gravityXValue->setMaximum(1e+09);

        gridLayout->addWidget(m_eg_gravityXValue, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        m_eg_gravityYValue = new QDoubleSpinBox(layoutWidget);
        m_eg_gravityYValue->setObjectName(QStringLiteral("m_eg_gravityYValue"));
        m_eg_gravityYValue->setMinimum(-1e+09);
        m_eg_gravityYValue->setMaximum(1e+09);

        gridLayout->addWidget(m_eg_gravityYValue, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);


        gridLayout->addLayout(verticalLayout, 3, 0, 1, 1);

        m_eg_radialAccelValue = new QDoubleSpinBox(layoutWidget);
        m_eg_radialAccelValue->setObjectName(QStringLiteral("m_eg_radialAccelValue"));
        m_eg_radialAccelValue->setMinimum(-1e+09);
        m_eg_radialAccelValue->setMaximum(1e+09);

        gridLayout->addWidget(m_eg_radialAccelValue, 3, 1, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 3, 2, 1, 1);

        m_eg_radialAccelVar = new QDoubleSpinBox(layoutWidget);
        m_eg_radialAccelVar->setObjectName(QStringLiteral("m_eg_radialAccelVar"));
        m_eg_radialAccelVar->setMaximum(1e+09);

        gridLayout->addWidget(m_eg_radialAccelVar, 3, 3, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);


        gridLayout->addLayout(verticalLayout_2, 4, 0, 1, 1);

        m_eg_tangentialAccelValue = new QDoubleSpinBox(layoutWidget);
        m_eg_tangentialAccelValue->setObjectName(QStringLiteral("m_eg_tangentialAccelValue"));
        m_eg_tangentialAccelValue->setMinimum(-1e+09);
        m_eg_tangentialAccelValue->setMaximum(1e+09);

        gridLayout->addWidget(m_eg_tangentialAccelValue, 4, 1, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 4, 2, 1, 1);

        m_eg_tangentialAccelVar = new QDoubleSpinBox(layoutWidget);
        m_eg_tangentialAccelVar->setObjectName(QStringLiteral("m_eg_tangentialAccelVar"));
        m_eg_tangentialAccelVar->setMaximum(1e+09);

        gridLayout->addWidget(m_eg_tangentialAccelVar, 4, 3, 1, 1);

        m_stackWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 251, 74));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);

        m_er_startRadiusValue = new QDoubleSpinBox(layoutWidget1);
        m_er_startRadiusValue->setObjectName(QStringLiteral("m_er_startRadiusValue"));
        m_er_startRadiusValue->setMinimum(-1e+09);
        m_er_startRadiusValue->setMaximum(1e+09);

        gridLayout_2->addWidget(m_er_startRadiusValue, 0, 1, 1, 1);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 0, 2, 1, 1);

        m_er_startRadiusVar = new QDoubleSpinBox(layoutWidget1);
        m_er_startRadiusVar->setObjectName(QStringLiteral("m_er_startRadiusVar"));
        m_er_startRadiusVar->setMinimum(0);
        m_er_startRadiusVar->setMaximum(1e+09);

        gridLayout_2->addWidget(m_er_startRadiusVar, 0, 3, 1, 1);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 1, 0, 1, 1);

        m_er_endRadiusValue = new QDoubleSpinBox(layoutWidget1);
        m_er_endRadiusValue->setObjectName(QStringLiteral("m_er_endRadiusValue"));
        m_er_endRadiusValue->setMinimum(-1e+09);
        m_er_endRadiusValue->setMaximum(1e+09);

        gridLayout_2->addWidget(m_er_endRadiusValue, 1, 1, 1, 1);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 1, 2, 1, 1);

        m_er_endRadiusVar = new QDoubleSpinBox(layoutWidget1);
        m_er_endRadiusVar->setObjectName(QStringLiteral("m_er_endRadiusVar"));
        m_er_endRadiusVar->setMinimum(0);
        m_er_endRadiusVar->setMaximum(1e+09);

        gridLayout_2->addWidget(m_er_endRadiusVar, 1, 3, 1, 1);

        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 2, 0, 1, 1);

        m_er_rotateSpeedValue = new QDoubleSpinBox(layoutWidget1);
        m_er_rotateSpeedValue->setObjectName(QStringLiteral("m_er_rotateSpeedValue"));
        m_er_rotateSpeedValue->setMinimum(-1e+09);
        m_er_rotateSpeedValue->setMaximum(1e+09);

        gridLayout_2->addWidget(m_er_rotateSpeedValue, 2, 1, 1, 1);

        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_2->addWidget(label_17, 2, 2, 1, 1);

        m_er_rotateSpeedVar = new QDoubleSpinBox(layoutWidget1);
        m_er_rotateSpeedVar->setObjectName(QStringLiteral("m_er_rotateSpeedVar"));
        m_er_rotateSpeedVar->setMaximum(1e+09);

        gridLayout_2->addWidget(m_er_rotateSpeedVar, 2, 3, 1, 1);

        m_stackWidget->addWidget(page_2);
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 107, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_modeSelect = new QComboBox(layoutWidget2);
        m_modeSelect->setObjectName(QStringLiteral("m_modeSelect"));

        horizontalLayout->addWidget(m_modeSelect);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(160, 20, 101, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget3);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_2->addWidget(label_18);

        m_moveSelect = new QComboBox(layoutWidget3);
        m_moveSelect->setObjectName(QStringLiteral("m_moveSelect"));

        horizontalLayout_2->addWidget(m_moveSelect);


        retranslateUi(environment_setting);

        m_stackWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(environment_setting);
    } // setupUi

    void retranslateUi(QWidget *environment_setting)
    {
        environment_setting->setWindowTitle(QApplication::translate("environment_setting", "Form", 0));
        groupBox->setTitle(QApplication::translate("environment_setting", "Environment", 0));
        label_2->setText(QApplication::translate("environment_setting", "speed:", 0));
        label_3->setText(QApplication::translate("environment_setting", "var", 0));
        label_4->setText(QApplication::translate("environment_setting", "gravity x:", 0));
        label_5->setText(QApplication::translate("environment_setting", "gravity y:", 0));
        label_6->setText(QApplication::translate("environment_setting", "radial", 0));
        label_8->setText(QApplication::translate("environment_setting", "acceleration:", 0));
        label_10->setText(QApplication::translate("environment_setting", "var", 0));
        label_7->setText(QApplication::translate("environment_setting", "tangential", 0));
        label_9->setText(QApplication::translate("environment_setting", "acceleration:", 0));
        label_11->setText(QApplication::translate("environment_setting", "var", 0));
        label_12->setText(QApplication::translate("environment_setting", "start radius:", 0));
        label_14->setText(QApplication::translate("environment_setting", "var", 0));
        label_13->setText(QApplication::translate("environment_setting", "end radius:", 0));
        label_15->setText(QApplication::translate("environment_setting", "var", 0));
        label_16->setText(QApplication::translate("environment_setting", "rotate speed:", 0));
        label_17->setText(QApplication::translate("environment_setting", "var", 0));
        label->setText(QApplication::translate("environment_setting", "mode:", 0));
        m_modeSelect->clear();
        m_modeSelect->insertItems(0, QStringList()
         << QApplication::translate("environment_setting", "Gravity", 0)
         << QApplication::translate("environment_setting", "Radial", 0)
        );
        label_18->setText(QApplication::translate("environment_setting", "move:", 0));
        m_moveSelect->clear();
        m_moveSelect->insertItems(0, QStringList()
         << QApplication::translate("environment_setting", "Free", 0)
         << QApplication::translate("environment_setting", "Group", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class environment_setting: public Ui_environment_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENT_SETTING_H
