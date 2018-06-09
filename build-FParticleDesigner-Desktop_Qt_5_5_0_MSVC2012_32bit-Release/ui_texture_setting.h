/********************************************************************************
** Form generated from reading UI file 'texture_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTURE_SETTING_H
#define UI_TEXTURE_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_texture_setting
{
public:
    QGroupBox *groupBox;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *m_c_blendSrc;
    QLabel *label_2;
    QComboBox *m_c_blendDst;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *m_t_imagePath;
    QPushButton *m_b_browse;

    void setupUi(QWidget *texture_setting)
    {
        if (texture_setting->objectName().isEmpty())
            texture_setting->setObjectName(QStringLiteral("texture_setting"));
        texture_setting->resize(268, 147);
        groupBox = new QGroupBox(texture_setting);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 251, 141));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 54, 12));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 21, 231, 48));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_c_blendSrc = new QComboBox(widget);
        m_c_blendSrc->setObjectName(QStringLiteral("m_c_blendSrc"));

        gridLayout->addWidget(m_c_blendSrc, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_c_blendDst = new QComboBox(widget);
        m_c_blendDst->setObjectName(QStringLiteral("m_c_blendDst"));

        gridLayout->addWidget(m_c_blendDst, 1, 1, 1, 1);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 100, 231, 25));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_t_imagePath = new QLineEdit(widget1);
        m_t_imagePath->setObjectName(QStringLiteral("m_t_imagePath"));
        m_t_imagePath->setReadOnly(true);

        horizontalLayout->addWidget(m_t_imagePath);

        m_b_browse = new QPushButton(widget1);
        m_b_browse->setObjectName(QStringLiteral("m_b_browse"));

        horizontalLayout->addWidget(m_b_browse);

        m_b_browse->raise();
        m_c_blendDst->raise();
        m_t_imagePath->raise();
        label_3->raise();
        m_t_imagePath->raise();

        retranslateUi(texture_setting);

        QMetaObject::connectSlotsByName(texture_setting);
    } // setupUi

    void retranslateUi(QWidget *texture_setting)
    {
        texture_setting->setWindowTitle(QApplication::translate("texture_setting", "Form", 0));
        groupBox->setTitle(QApplication::translate("texture_setting", "Texture", 0));
        label_3->setText(QApplication::translate("texture_setting", "image:", 0));
        label->setText(QApplication::translate("texture_setting", "blend src:", 0));
        m_c_blendSrc->clear();
        m_c_blendSrc->insertItems(0, QStringList()
         << QApplication::translate("texture_setting", "GL_ZERO", 0)
         << QApplication::translate("texture_setting", "GL_ONE", 0)
         << QApplication::translate("texture_setting", "GL_SRC_COLOR", 0)
         << QApplication::translate("texture_setting", "GL_ONE_MINUS_SRC_COLOR", 0)
         << QApplication::translate("texture_setting", "GL_DST_COLOR", 0)
         << QApplication::translate("texture_setting", "GL_ONE_MINUS_DST_COLOR", 0)
         << QApplication::translate("texture_setting", "GL_SRC_ALPHA", 0)
         << QApplication::translate("texture_setting", "GL_ONE_MINUS_SRC_ALPHA", 0)
         << QApplication::translate("texture_setting", "GL_DST_ALPHA", 0)
         << QApplication::translate("texture_setting", "GL_DST_MINUS_DST_ALPHA", 0)
         << QApplication::translate("texture_setting", "GL_SRC_ALPHA_SATURATE", 0)
        );
        label_2->setText(QApplication::translate("texture_setting", "blend dst:", 0));
        m_c_blendDst->clear();
        m_c_blendDst->insertItems(0, QStringList()
         << QApplication::translate("texture_setting", "GL_ZERO", 0)
         << QApplication::translate("texture_setting", "GL_ONE", 0)
         << QApplication::translate("texture_setting", "GL_SRC_COLOR", 0)
         << QApplication::translate("texture_setting", "GL_ONE_MINUS_SRC_COLOR", 0)
         << QApplication::translate("texture_setting", "GL_DST_COLOR", 0)
         << QApplication::translate("texture_setting", "GL_ONE_MINUS_DST_COLOR", 0)
         << QApplication::translate("texture_setting", "GL_SRC_ALPHA", 0)
         << QApplication::translate("texture_setting", "GL_ONE_MINUS_SRC_ALPHA", 0)
         << QApplication::translate("texture_setting", "GL_DST_ALPHA", 0)
         << QApplication::translate("texture_setting", "GL_DST_MINUS_DST_ALPHA", 0)
         << QApplication::translate("texture_setting", "GL_SRC_ALPHA_SATURATE", 0)
        );
        m_b_browse->setText(QApplication::translate("texture_setting", "browse", 0));
    } // retranslateUi

};

namespace Ui {
    class texture_setting: public Ui_texture_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTURE_SETTING_H
