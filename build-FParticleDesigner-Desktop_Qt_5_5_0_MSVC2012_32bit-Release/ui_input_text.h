/********************************************************************************
** Form generated from reading UI file 'input_text.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_TEXT_H
#define UI_INPUT_TEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_input
{
public:
    QLabel *m_title;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_input;
    QLineEdit *m_editText;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_ok;
    QPushButton *m_cancel;

    void setupUi(QDialog *input)
    {
        if (input->objectName().isEmpty())
            input->setObjectName(QStringLiteral("input"));
        input->resize(367, 68);
        m_title = new QLabel(input);
        m_title->setObjectName(QStringLiteral("m_title"));
        m_title->setGeometry(QRect(10, 10, 341, 16));
        widget = new QWidget(input);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 30, 343, 27));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_input = new QLabel(widget);
        m_input->setObjectName(QStringLiteral("m_input"));

        horizontalLayout_2->addWidget(m_input);

        m_editText = new QLineEdit(widget);
        m_editText->setObjectName(QStringLiteral("m_editText"));

        horizontalLayout_2->addWidget(m_editText);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_ok = new QPushButton(widget);
        m_ok->setObjectName(QStringLiteral("m_ok"));

        horizontalLayout->addWidget(m_ok);

        m_cancel = new QPushButton(widget);
        m_cancel->setObjectName(QStringLiteral("m_cancel"));

        horizontalLayout->addWidget(m_cancel);


        horizontalLayout_3->addLayout(horizontalLayout);


        retranslateUi(input);
        QObject::connect(m_ok, SIGNAL(clicked()), input, SLOT(accept()));
        QObject::connect(m_cancel, SIGNAL(clicked()), input, SLOT(reject()));

        QMetaObject::connectSlotsByName(input);
    } // setupUi

    void retranslateUi(QDialog *input)
    {
        input->setWindowTitle(QApplication::translate("input", "Dialog", 0));
        m_title->setText(QApplication::translate("input", "title", 0));
        m_input->setText(QApplication::translate("input", "Input:", 0));
        m_ok->setText(QApplication::translate("input", "Ok", 0));
        m_cancel->setText(QApplication::translate("input", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class input: public Ui_input {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_TEXT_H
