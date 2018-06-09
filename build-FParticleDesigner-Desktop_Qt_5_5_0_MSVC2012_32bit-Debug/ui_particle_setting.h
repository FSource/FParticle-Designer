/********************************************************************************
** Form generated from reading UI file 'particle_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTICLE_SETTING_H
#define UI_PARTICLE_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_particle_setting
{
public:
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *m_colorStart;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *m_ls_red;
    QSpinBox *m_es_redValue;
    QLabel *m_ls_redVar;
    QSpinBox *m_es_redVar;
    QLabel *m_ls_green;
    QSpinBox *m_es_greenValue;
    QLabel *m_ls_greenVar;
    QSpinBox *m_es_greenVar;
    QLabel *m_ls_blue;
    QSpinBox *m_es_blueValue;
    QLabel *m_ls_blueVar;
    QSpinBox *m_es_blueVar;
    QLabel *m_ls_alpha;
    QSpinBox *m_es_alphaValue;
    QLabel *m_ls_alphaVar;
    QSpinBox *m_es_alphaVar;
    QWidget *m_colorEnd;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *m_le_red;
    QSpinBox *m_ee_redValue;
    QLabel *m_le_redVar;
    QSpinBox *m_ee_redVar;
    QLabel *m_le_green;
    QSpinBox *m_ee_greenValue;
    QLabel *m_le_greenVar;
    QSpinBox *m_ee_greenVar;
    QLabel *m_le_blue;
    QSpinBox *m_ee_blueValue;
    QLabel *m_le_blueVar;
    QSpinBox *m_ee_blueVar;
    QLabel *m_le_alpha;
    QSpinBox *m_ee_alphaValue;
    QLabel *m_le_alphaVar;
    QSpinBox *m_ee_alphaVar;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *m_l_lifeTime;
    QDoubleSpinBox *m_e_lifeTimeValue;
    QLabel *m_l_lifeTimeVar;
    QDoubleSpinBox *m_e_lifeTimeVar;
    QLabel *m_l_sizeBegin;
    QDoubleSpinBox *m_e_sizeBeginValue;
    QLabel *m_l_sizeBeginVar;
    QDoubleSpinBox *m_e_sizeBeginVar;
    QLabel *m_l_sizeEnd;
    QDoubleSpinBox *m_e_sizeEndValue;
    QLabel *m_l_sizeEndVar;
    QDoubleSpinBox *m_e_sizeEndVar;
    QLabel *m_l_angle;
    QDoubleSpinBox *m_e_angleValue;
    QLabel *m_l_angleVar;
    QDoubleSpinBox *m_e_angleVar;
    QLabel *m_l_rotationBegin;
    QDoubleSpinBox *m_e_rotateBeginValue;
    QLabel *m_l_rotationBeginVar;
    QDoubleSpinBox *m_e_rotateBeginVar;
    QLabel *m_l_rotationEnd;
    QDoubleSpinBox *m_e_rotateEndValue;
    QLabel *m_l_rotationEndVar;
    QDoubleSpinBox *m_e_rotateEndVar;
    QLabel *m_l_positionX;
    QDoubleSpinBox *m_e_positionXValue;
    QLabel *m_l_positionXVar;
    QDoubleSpinBox *m_e_positionXVar;
    QLabel *m_l_positionY;
    QDoubleSpinBox *m_e_positionYValue;
    QLabel *m_l_positionYVar;
    QDoubleSpinBox *m_e_positionYVar;

    void setupUi(QWidget *particle_setting)
    {
        if (particle_setting->objectName().isEmpty())
            particle_setting->setObjectName(QStringLiteral("particle_setting"));
        particle_setting->resize(297, 390);
        groupBox = new QGroupBox(particle_setting);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 281, 381));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 231, 251, 141));
        m_colorStart = new QWidget();
        m_colorStart->setObjectName(QStringLiteral("m_colorStart"));
        layoutWidget = new QWidget(m_colorStart);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 152, 100));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        m_ls_red = new QLabel(layoutWidget);
        m_ls_red->setObjectName(QStringLiteral("m_ls_red"));

        gridLayout_2->addWidget(m_ls_red, 0, 0, 1, 1);

        m_es_redValue = new QSpinBox(layoutWidget);
        m_es_redValue->setObjectName(QStringLiteral("m_es_redValue"));
        m_es_redValue->setMaximum(255);

        gridLayout_2->addWidget(m_es_redValue, 0, 1, 1, 1);

        m_ls_redVar = new QLabel(layoutWidget);
        m_ls_redVar->setObjectName(QStringLiteral("m_ls_redVar"));

        gridLayout_2->addWidget(m_ls_redVar, 0, 2, 1, 1);

        m_es_redVar = new QSpinBox(layoutWidget);
        m_es_redVar->setObjectName(QStringLiteral("m_es_redVar"));
        m_es_redVar->setMaximum(255);

        gridLayout_2->addWidget(m_es_redVar, 0, 3, 1, 1);

        m_ls_green = new QLabel(layoutWidget);
        m_ls_green->setObjectName(QStringLiteral("m_ls_green"));

        gridLayout_2->addWidget(m_ls_green, 1, 0, 1, 1);

        m_es_greenValue = new QSpinBox(layoutWidget);
        m_es_greenValue->setObjectName(QStringLiteral("m_es_greenValue"));
        m_es_greenValue->setMaximum(255);

        gridLayout_2->addWidget(m_es_greenValue, 1, 1, 1, 1);

        m_ls_greenVar = new QLabel(layoutWidget);
        m_ls_greenVar->setObjectName(QStringLiteral("m_ls_greenVar"));

        gridLayout_2->addWidget(m_ls_greenVar, 1, 2, 1, 1);

        m_es_greenVar = new QSpinBox(layoutWidget);
        m_es_greenVar->setObjectName(QStringLiteral("m_es_greenVar"));
        m_es_greenVar->setMaximum(255);

        gridLayout_2->addWidget(m_es_greenVar, 1, 3, 1, 1);

        m_ls_blue = new QLabel(layoutWidget);
        m_ls_blue->setObjectName(QStringLiteral("m_ls_blue"));

        gridLayout_2->addWidget(m_ls_blue, 2, 0, 1, 1);

        m_es_blueValue = new QSpinBox(layoutWidget);
        m_es_blueValue->setObjectName(QStringLiteral("m_es_blueValue"));
        m_es_blueValue->setMaximum(255);

        gridLayout_2->addWidget(m_es_blueValue, 2, 1, 1, 1);

        m_ls_blueVar = new QLabel(layoutWidget);
        m_ls_blueVar->setObjectName(QStringLiteral("m_ls_blueVar"));

        gridLayout_2->addWidget(m_ls_blueVar, 2, 2, 1, 1);

        m_es_blueVar = new QSpinBox(layoutWidget);
        m_es_blueVar->setObjectName(QStringLiteral("m_es_blueVar"));
        m_es_blueVar->setMaximum(255);

        gridLayout_2->addWidget(m_es_blueVar, 2, 3, 1, 1);

        m_ls_alpha = new QLabel(layoutWidget);
        m_ls_alpha->setObjectName(QStringLiteral("m_ls_alpha"));

        gridLayout_2->addWidget(m_ls_alpha, 3, 0, 1, 1);

        m_es_alphaValue = new QSpinBox(layoutWidget);
        m_es_alphaValue->setObjectName(QStringLiteral("m_es_alphaValue"));
        m_es_alphaValue->setMaximum(255);

        gridLayout_2->addWidget(m_es_alphaValue, 3, 1, 1, 1);

        m_ls_alphaVar = new QLabel(layoutWidget);
        m_ls_alphaVar->setObjectName(QStringLiteral("m_ls_alphaVar"));

        gridLayout_2->addWidget(m_ls_alphaVar, 3, 2, 1, 1);

        m_es_alphaVar = new QSpinBox(layoutWidget);
        m_es_alphaVar->setObjectName(QStringLiteral("m_es_alphaVar"));
        m_es_alphaVar->setMaximum(255);

        gridLayout_2->addWidget(m_es_alphaVar, 3, 3, 1, 1);

        tabWidget->addTab(m_colorStart, QString());
        m_colorEnd = new QWidget();
        m_colorEnd->setObjectName(QStringLiteral("m_colorEnd"));
        layoutWidget1 = new QWidget(m_colorEnd);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 152, 100));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        m_le_red = new QLabel(layoutWidget1);
        m_le_red->setObjectName(QStringLiteral("m_le_red"));

        gridLayout_3->addWidget(m_le_red, 0, 0, 1, 1);

        m_ee_redValue = new QSpinBox(layoutWidget1);
        m_ee_redValue->setObjectName(QStringLiteral("m_ee_redValue"));
        m_ee_redValue->setMaximum(255);

        gridLayout_3->addWidget(m_ee_redValue, 0, 1, 1, 1);

        m_le_redVar = new QLabel(layoutWidget1);
        m_le_redVar->setObjectName(QStringLiteral("m_le_redVar"));

        gridLayout_3->addWidget(m_le_redVar, 0, 2, 1, 1);

        m_ee_redVar = new QSpinBox(layoutWidget1);
        m_ee_redVar->setObjectName(QStringLiteral("m_ee_redVar"));
        m_ee_redVar->setMaximum(255);

        gridLayout_3->addWidget(m_ee_redVar, 0, 3, 1, 1);

        m_le_green = new QLabel(layoutWidget1);
        m_le_green->setObjectName(QStringLiteral("m_le_green"));

        gridLayout_3->addWidget(m_le_green, 1, 0, 1, 1);

        m_ee_greenValue = new QSpinBox(layoutWidget1);
        m_ee_greenValue->setObjectName(QStringLiteral("m_ee_greenValue"));
        m_ee_greenValue->setMaximum(255);

        gridLayout_3->addWidget(m_ee_greenValue, 1, 1, 1, 1);

        m_le_greenVar = new QLabel(layoutWidget1);
        m_le_greenVar->setObjectName(QStringLiteral("m_le_greenVar"));

        gridLayout_3->addWidget(m_le_greenVar, 1, 2, 1, 1);

        m_ee_greenVar = new QSpinBox(layoutWidget1);
        m_ee_greenVar->setObjectName(QStringLiteral("m_ee_greenVar"));
        m_ee_greenVar->setMaximum(255);

        gridLayout_3->addWidget(m_ee_greenVar, 1, 3, 1, 1);

        m_le_blue = new QLabel(layoutWidget1);
        m_le_blue->setObjectName(QStringLiteral("m_le_blue"));

        gridLayout_3->addWidget(m_le_blue, 2, 0, 1, 1);

        m_ee_blueValue = new QSpinBox(layoutWidget1);
        m_ee_blueValue->setObjectName(QStringLiteral("m_ee_blueValue"));
        m_ee_blueValue->setMaximum(255);

        gridLayout_3->addWidget(m_ee_blueValue, 2, 1, 1, 1);

        m_le_blueVar = new QLabel(layoutWidget1);
        m_le_blueVar->setObjectName(QStringLiteral("m_le_blueVar"));

        gridLayout_3->addWidget(m_le_blueVar, 2, 2, 1, 1);

        m_ee_blueVar = new QSpinBox(layoutWidget1);
        m_ee_blueVar->setObjectName(QStringLiteral("m_ee_blueVar"));
        m_ee_blueVar->setMaximum(255);

        gridLayout_3->addWidget(m_ee_blueVar, 2, 3, 1, 1);

        m_le_alpha = new QLabel(layoutWidget1);
        m_le_alpha->setObjectName(QStringLiteral("m_le_alpha"));

        gridLayout_3->addWidget(m_le_alpha, 3, 0, 1, 1);

        m_ee_alphaValue = new QSpinBox(layoutWidget1);
        m_ee_alphaValue->setObjectName(QStringLiteral("m_ee_alphaValue"));
        m_ee_alphaValue->setMaximum(255);

        gridLayout_3->addWidget(m_ee_alphaValue, 3, 1, 1, 1);

        m_le_alphaVar = new QLabel(layoutWidget1);
        m_le_alphaVar->setObjectName(QStringLiteral("m_le_alphaVar"));

        gridLayout_3->addWidget(m_le_alphaVar, 3, 2, 1, 1);

        m_ee_alphaVar = new QSpinBox(layoutWidget1);
        m_ee_alphaVar->setObjectName(QStringLiteral("m_ee_alphaVar"));
        m_ee_alphaVar->setMaximum(255);

        gridLayout_3->addWidget(m_ee_alphaVar, 3, 3, 1, 1);

        tabWidget->addTab(m_colorEnd, QString());
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 22, 261, 204));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_l_lifeTime = new QLabel(widget);
        m_l_lifeTime->setObjectName(QStringLiteral("m_l_lifeTime"));

        gridLayout->addWidget(m_l_lifeTime, 0, 0, 1, 1);

        m_e_lifeTimeValue = new QDoubleSpinBox(widget);
        m_e_lifeTimeValue->setObjectName(QStringLiteral("m_e_lifeTimeValue"));
        m_e_lifeTimeValue->setMaximum(1e+09);

        gridLayout->addWidget(m_e_lifeTimeValue, 0, 1, 1, 1);

        m_l_lifeTimeVar = new QLabel(widget);
        m_l_lifeTimeVar->setObjectName(QStringLiteral("m_l_lifeTimeVar"));

        gridLayout->addWidget(m_l_lifeTimeVar, 0, 2, 1, 1);

        m_e_lifeTimeVar = new QDoubleSpinBox(widget);
        m_e_lifeTimeVar->setObjectName(QStringLiteral("m_e_lifeTimeVar"));
        m_e_lifeTimeVar->setMaximum(1e+09);

        gridLayout->addWidget(m_e_lifeTimeVar, 0, 3, 1, 1);

        m_l_sizeBegin = new QLabel(widget);
        m_l_sizeBegin->setObjectName(QStringLiteral("m_l_sizeBegin"));

        gridLayout->addWidget(m_l_sizeBegin, 1, 0, 1, 1);

        m_e_sizeBeginValue = new QDoubleSpinBox(widget);
        m_e_sizeBeginValue->setObjectName(QStringLiteral("m_e_sizeBeginValue"));
        m_e_sizeBeginValue->setMaximum(1e+09);

        gridLayout->addWidget(m_e_sizeBeginValue, 1, 1, 1, 1);

        m_l_sizeBeginVar = new QLabel(widget);
        m_l_sizeBeginVar->setObjectName(QStringLiteral("m_l_sizeBeginVar"));

        gridLayout->addWidget(m_l_sizeBeginVar, 1, 2, 1, 1);

        m_e_sizeBeginVar = new QDoubleSpinBox(widget);
        m_e_sizeBeginVar->setObjectName(QStringLiteral("m_e_sizeBeginVar"));
        m_e_sizeBeginVar->setMaximum(1e+09);

        gridLayout->addWidget(m_e_sizeBeginVar, 1, 3, 1, 1);

        m_l_sizeEnd = new QLabel(widget);
        m_l_sizeEnd->setObjectName(QStringLiteral("m_l_sizeEnd"));

        gridLayout->addWidget(m_l_sizeEnd, 2, 0, 1, 1);

        m_e_sizeEndValue = new QDoubleSpinBox(widget);
        m_e_sizeEndValue->setObjectName(QStringLiteral("m_e_sizeEndValue"));
        m_e_sizeEndValue->setMaximum(1e+09);

        gridLayout->addWidget(m_e_sizeEndValue, 2, 1, 1, 1);

        m_l_sizeEndVar = new QLabel(widget);
        m_l_sizeEndVar->setObjectName(QStringLiteral("m_l_sizeEndVar"));

        gridLayout->addWidget(m_l_sizeEndVar, 2, 2, 1, 1);

        m_e_sizeEndVar = new QDoubleSpinBox(widget);
        m_e_sizeEndVar->setObjectName(QStringLiteral("m_e_sizeEndVar"));
        m_e_sizeEndVar->setMaximum(1e+09);

        gridLayout->addWidget(m_e_sizeEndVar, 2, 3, 1, 1);

        m_l_angle = new QLabel(widget);
        m_l_angle->setObjectName(QStringLiteral("m_l_angle"));

        gridLayout->addWidget(m_l_angle, 3, 0, 1, 1);

        m_e_angleValue = new QDoubleSpinBox(widget);
        m_e_angleValue->setObjectName(QStringLiteral("m_e_angleValue"));
        m_e_angleValue->setMinimum(-1e+09);
        m_e_angleValue->setMaximum(1e+09);

        gridLayout->addWidget(m_e_angleValue, 3, 1, 1, 1);

        m_l_angleVar = new QLabel(widget);
        m_l_angleVar->setObjectName(QStringLiteral("m_l_angleVar"));

        gridLayout->addWidget(m_l_angleVar, 3, 2, 1, 1);

        m_e_angleVar = new QDoubleSpinBox(widget);
        m_e_angleVar->setObjectName(QStringLiteral("m_e_angleVar"));
        m_e_angleVar->setMaximum(1e+09);

        gridLayout->addWidget(m_e_angleVar, 3, 3, 1, 1);

        m_l_rotationBegin = new QLabel(widget);
        m_l_rotationBegin->setObjectName(QStringLiteral("m_l_rotationBegin"));

        gridLayout->addWidget(m_l_rotationBegin, 4, 0, 1, 1);

        m_e_rotateBeginValue = new QDoubleSpinBox(widget);
        m_e_rotateBeginValue->setObjectName(QStringLiteral("m_e_rotateBeginValue"));
        m_e_rotateBeginValue->setMinimum(-1e+09);
        m_e_rotateBeginValue->setMaximum(1e+09);

        gridLayout->addWidget(m_e_rotateBeginValue, 4, 1, 1, 1);

        m_l_rotationBeginVar = new QLabel(widget);
        m_l_rotationBeginVar->setObjectName(QStringLiteral("m_l_rotationBeginVar"));

        gridLayout->addWidget(m_l_rotationBeginVar, 4, 2, 1, 1);

        m_e_rotateBeginVar = new QDoubleSpinBox(widget);
        m_e_rotateBeginVar->setObjectName(QStringLiteral("m_e_rotateBeginVar"));
        m_e_rotateBeginVar->setMaximum(1e+09);

        gridLayout->addWidget(m_e_rotateBeginVar, 4, 3, 1, 1);

        m_l_rotationEnd = new QLabel(widget);
        m_l_rotationEnd->setObjectName(QStringLiteral("m_l_rotationEnd"));

        gridLayout->addWidget(m_l_rotationEnd, 5, 0, 1, 1);

        m_e_rotateEndValue = new QDoubleSpinBox(widget);
        m_e_rotateEndValue->setObjectName(QStringLiteral("m_e_rotateEndValue"));
        m_e_rotateEndValue->setMinimum(-1e+09);
        m_e_rotateEndValue->setMaximum(1e+09);

        gridLayout->addWidget(m_e_rotateEndValue, 5, 1, 1, 1);

        m_l_rotationEndVar = new QLabel(widget);
        m_l_rotationEndVar->setObjectName(QStringLiteral("m_l_rotationEndVar"));

        gridLayout->addWidget(m_l_rotationEndVar, 5, 2, 1, 1);

        m_e_rotateEndVar = new QDoubleSpinBox(widget);
        m_e_rotateEndVar->setObjectName(QStringLiteral("m_e_rotateEndVar"));
        m_e_rotateEndVar->setMaximum(1e+09);

        gridLayout->addWidget(m_e_rotateEndVar, 5, 3, 1, 1);

        m_l_positionX = new QLabel(widget);
        m_l_positionX->setObjectName(QStringLiteral("m_l_positionX"));

        gridLayout->addWidget(m_l_positionX, 6, 0, 1, 1);

        m_e_positionXValue = new QDoubleSpinBox(widget);
        m_e_positionXValue->setObjectName(QStringLiteral("m_e_positionXValue"));
        m_e_positionXValue->setMinimum(-1e+09);
        m_e_positionXValue->setMaximum(1e+09);

        gridLayout->addWidget(m_e_positionXValue, 6, 1, 1, 1);

        m_l_positionXVar = new QLabel(widget);
        m_l_positionXVar->setObjectName(QStringLiteral("m_l_positionXVar"));

        gridLayout->addWidget(m_l_positionXVar, 6, 2, 1, 1);

        m_e_positionXVar = new QDoubleSpinBox(widget);
        m_e_positionXVar->setObjectName(QStringLiteral("m_e_positionXVar"));
        m_e_positionXVar->setMinimum(0);
        m_e_positionXVar->setMaximum(1e+09);

        gridLayout->addWidget(m_e_positionXVar, 6, 3, 1, 1);

        m_l_positionY = new QLabel(widget);
        m_l_positionY->setObjectName(QStringLiteral("m_l_positionY"));

        gridLayout->addWidget(m_l_positionY, 7, 0, 1, 1);

        m_e_positionYValue = new QDoubleSpinBox(widget);
        m_e_positionYValue->setObjectName(QStringLiteral("m_e_positionYValue"));
        m_e_positionYValue->setMinimum(-1e+09);
        m_e_positionYValue->setMaximum(1e+09);

        gridLayout->addWidget(m_e_positionYValue, 7, 1, 1, 1);

        m_l_positionYVar = new QLabel(widget);
        m_l_positionYVar->setObjectName(QStringLiteral("m_l_positionYVar"));

        gridLayout->addWidget(m_l_positionYVar, 7, 2, 1, 1);

        m_e_positionYVar = new QDoubleSpinBox(widget);
        m_e_positionYVar->setObjectName(QStringLiteral("m_e_positionYVar"));
        m_e_positionYVar->setMaximum(1e+09);

        gridLayout->addWidget(m_e_positionYVar, 7, 3, 1, 1);


        retranslateUi(particle_setting);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(particle_setting);
    } // setupUi

    void retranslateUi(QWidget *particle_setting)
    {
        particle_setting->setWindowTitle(QApplication::translate("particle_setting", "Form", 0));
        groupBox->setTitle(QApplication::translate("particle_setting", "Particle:", 0));
        m_ls_red->setText(QApplication::translate("particle_setting", "red", 0));
        m_ls_redVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_ls_green->setText(QApplication::translate("particle_setting", "green", 0));
        m_ls_greenVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_ls_blue->setText(QApplication::translate("particle_setting", "blue", 0));
        m_ls_blueVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_ls_alpha->setText(QApplication::translate("particle_setting", "alpha", 0));
        m_ls_alphaVar->setText(QApplication::translate("particle_setting", "var", 0));
        tabWidget->setTabText(tabWidget->indexOf(m_colorStart), QApplication::translate("particle_setting", "color start", 0));
        m_le_red->setText(QApplication::translate("particle_setting", "red", 0));
        m_le_redVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_le_green->setText(QApplication::translate("particle_setting", "green", 0));
        m_le_greenVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_le_blue->setText(QApplication::translate("particle_setting", "blue", 0));
        m_le_blueVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_le_alpha->setText(QApplication::translate("particle_setting", "alpha", 0));
        m_le_alphaVar->setText(QApplication::translate("particle_setting", "var", 0));
        tabWidget->setTabText(tabWidget->indexOf(m_colorEnd), QApplication::translate("particle_setting", "color end", 0));
        m_l_lifeTime->setText(QApplication::translate("particle_setting", "life time:", 0));
        m_l_lifeTimeVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_l_sizeBegin->setText(QApplication::translate("particle_setting", "size begin:", 0));
        m_l_sizeBeginVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_l_sizeEnd->setText(QApplication::translate("particle_setting", "size end:", 0));
        m_l_sizeEndVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_l_angle->setText(QApplication::translate("particle_setting", "angle:", 0));
        m_l_angleVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_l_rotationBegin->setText(QApplication::translate("particle_setting", "rotation begin:", 0));
        m_l_rotationBeginVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_l_rotationEnd->setText(QApplication::translate("particle_setting", "rotation end:", 0));
        m_l_rotationEndVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_l_positionX->setText(QApplication::translate("particle_setting", "position x:", 0));
        m_l_positionXVar->setText(QApplication::translate("particle_setting", "var", 0));
        m_l_positionY->setText(QApplication::translate("particle_setting", "position y:", 0));
        m_l_positionYVar->setText(QApplication::translate("particle_setting", "var", 0));
    } // retranslateUi

};

namespace Ui {
    class particle_setting: public Ui_particle_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTICLE_SETTING_H
