/********************************************************************************
** Form generated from reading UI file 'emiter_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMITER_SETTING_H
#define UI_EMITER_SETTING_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emitter
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *m_l_lifeTime;
    QDoubleSpinBox *m_e_lifeTimeMax;
    QLabel *m_l_lifeTimeTo;
    QDoubleSpinBox *m_e_lifeTimeVar;
    QLabel *m_l_maxParticle;
    QSpinBox *m_e_maxParticle;
    QLabel *m_l_emitSpeed;
    QSpinBox *m_e_emitSpeed;

    void setupUi(QWidget *emitter)
    {
        if (emitter->objectName().isEmpty())
            emitter->setObjectName(QStringLiteral("emitter"));
        emitter->resize(298, 111);
        groupBox = new QGroupBox(emitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 281, 101));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 20, 261, 74));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_l_lifeTime = new QLabel(layoutWidget);
        m_l_lifeTime->setObjectName(QStringLiteral("m_l_lifeTime"));

        gridLayout->addWidget(m_l_lifeTime, 0, 0, 1, 1);

        m_e_lifeTimeMax = new QDoubleSpinBox(layoutWidget);
        m_e_lifeTimeMax->setObjectName(QStringLiteral("m_e_lifeTimeMax"));
        m_e_lifeTimeMax->setMaximum(1e+09);

        gridLayout->addWidget(m_e_lifeTimeMax, 0, 1, 1, 1);

        m_l_lifeTimeTo = new QLabel(layoutWidget);
        m_l_lifeTimeTo->setObjectName(QStringLiteral("m_l_lifeTimeTo"));

        gridLayout->addWidget(m_l_lifeTimeTo, 0, 2, 1, 1);

        m_e_lifeTimeVar = new QDoubleSpinBox(layoutWidget);
        m_e_lifeTimeVar->setObjectName(QStringLiteral("m_e_lifeTimeVar"));
        m_e_lifeTimeVar->setMaximum(1e+09);

        gridLayout->addWidget(m_e_lifeTimeVar, 0, 3, 1, 1);

        m_l_maxParticle = new QLabel(layoutWidget);
        m_l_maxParticle->setObjectName(QStringLiteral("m_l_maxParticle"));

        gridLayout->addWidget(m_l_maxParticle, 1, 0, 1, 1);

        m_e_maxParticle = new QSpinBox(layoutWidget);
        m_e_maxParticle->setObjectName(QStringLiteral("m_e_maxParticle"));
        m_e_maxParticle->setMaximum(1000000000);

        gridLayout->addWidget(m_e_maxParticle, 1, 1, 1, 1);

        m_l_emitSpeed = new QLabel(layoutWidget);
        m_l_emitSpeed->setObjectName(QStringLiteral("m_l_emitSpeed"));

        gridLayout->addWidget(m_l_emitSpeed, 2, 0, 1, 1);

        m_e_emitSpeed = new QSpinBox(layoutWidget);
        m_e_emitSpeed->setObjectName(QStringLiteral("m_e_emitSpeed"));
        m_e_emitSpeed->setMaximum(1000000000);

        gridLayout->addWidget(m_e_emitSpeed, 2, 1, 1, 1);


        retranslateUi(emitter);

        QMetaObject::connectSlotsByName(emitter);
    } // setupUi

    void retranslateUi(QWidget *emitter)
    {
        emitter->setWindowTitle(QApplication::translate("emitter", "Form", 0));
        groupBox->setTitle(QApplication::translate("emitter", "Emitter", 0));
        m_l_lifeTime->setText(QApplication::translate("emitter", "life time;", 0));
        m_l_lifeTimeTo->setText(QApplication::translate("emitter", "var", 0));
        m_l_maxParticle->setText(QApplication::translate("emitter", "max particle:", 0));
        m_l_emitSpeed->setText(QApplication::translate("emitter", "emit speed:", 0));
    } // retranslateUi

};

namespace Ui {
    class emitter: public Ui_emitter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMITER_SETTING_H
