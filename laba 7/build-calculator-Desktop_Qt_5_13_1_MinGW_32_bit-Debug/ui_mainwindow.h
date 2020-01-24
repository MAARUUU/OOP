/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelERROR;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_8;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_0;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_yx;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_div;
    QPushButton *pushButton_3;
    QPushButton *pushButton_x2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_add;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_equally;
    QPushButton *pushButton_sign;
    QPushButton *erase;
    QPushButton *C;
    QLabel *display;
    QLabel *labelERROR_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(520, 336);
        MainWindow->setMaximumSize(QSize(520, 336));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelERROR = new QLabel(centralwidget);
        labelERROR->setObjectName(QString::fromUtf8("labelERROR"));
        labelERROR->setGeometry(QRect(109, 450, 250, 30));
        labelERROR->setMaximumSize(QSize(250, 30));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        labelERROR->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 128, 401, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_cos = new QPushButton(layoutWidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("System"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_cos->setFont(font1);

        gridLayout->addWidget(pushButton_cos, 2, 4, 1, 1);

        pushButton_tan = new QPushButton(layoutWidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setFont(font1);

        gridLayout->addWidget(pushButton_tan, 3, 4, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setFont(font1);

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_mul = new QPushButton(layoutWidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setFont(font1);

        gridLayout->addWidget(pushButton_mul, 2, 3, 1, 1);

        pushButton_ln = new QPushButton(layoutWidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("System"));
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_ln->setFont(font2);
        pushButton_ln->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_ln, 0, 1, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setFont(font1);

        gridLayout->addWidget(pushButton_0, 4, 0, 1, 1);

        pushButton_sqrt = new QPushButton(layoutWidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setFont(font2);
        pushButton_sqrt->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_sqrt, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setFont(font1);

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_exp = new QPushButton(layoutWidget);
        pushButton_exp->setObjectName(QString::fromUtf8("pushButton_exp"));
        pushButton_exp->setFont(font2);
        pushButton_exp->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_exp, 0, 0, 1, 1);

        pushButton_yx = new QPushButton(layoutWidget);
        pushButton_yx->setObjectName(QString::fromUtf8("pushButton_yx"));
        pushButton_yx->setFont(font2);
        pushButton_yx->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_yx, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setFont(font1);

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font1);

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font1);

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font1);

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_div = new QPushButton(layoutWidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setFont(font1);

        gridLayout->addWidget(pushButton_div, 1, 3, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_x2 = new QPushButton(layoutWidget);
        pushButton_x2->setObjectName(QString::fromUtf8("pushButton_x2"));
        pushButton_x2->setFont(font2);
        pushButton_x2->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_x2, 0, 4, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font1);

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_sin = new QPushButton(layoutWidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setFont(font1);

        gridLayout->addWidget(pushButton_sin, 1, 4, 1, 1);

        pushButton_sub = new QPushButton(layoutWidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setFont(font1);

        gridLayout->addWidget(pushButton_sub, 3, 3, 1, 1);

        pushButton_add = new QPushButton(layoutWidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setFont(font1);
        pushButton_add->setCheckable(false);
        pushButton_add->setAutoDefault(false);
        pushButton_add->setFlat(false);

        gridLayout->addWidget(pushButton_add, 4, 1, 1, 1);

        pushButton_dot = new QPushButton(layoutWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setFont(font1);

        gridLayout->addWidget(pushButton_dot, 4, 2, 1, 1);

        pushButton_equally = new QPushButton(layoutWidget);
        pushButton_equally->setObjectName(QString::fromUtf8("pushButton_equally"));
        pushButton_equally->setFont(font1);

        gridLayout->addWidget(pushButton_equally, 4, 3, 1, 2);

        pushButton_sign = new QPushButton(centralwidget);
        pushButton_sign->setObjectName(QString::fromUtf8("pushButton_sign"));
        pushButton_sign->setGeometry(QRect(430, 240, 71, 41));
        pushButton_sign->setAutoFillBackground(false);
        erase = new QPushButton(centralwidget);
        erase->setObjectName(QString::fromUtf8("erase"));
        erase->setGeometry(QRect(430, 190, 71, 41));
        erase->setAutoFillBackground(false);
        erase->setCheckable(false);
        erase->setAutoDefault(false);
        C = new QPushButton(centralwidget);
        C->setObjectName(QString::fromUtf8("C"));
        C->setGeometry(QRect(430, 140, 71, 41));
        C->setFont(font);
        C->setAutoFillBackground(false);
        C->setAutoDefault(false);
        C->setFlat(false);
        display = new QLabel(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(40, 20, 411, 61));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        display->setPalette(palette);
        display->setLayoutDirection(Qt::LeftToRight);
        display->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color:white; \n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelERROR_2 = new QLabel(centralwidget);
        labelERROR_2->setObjectName(QString::fromUtf8("labelERROR_2"));
        labelERROR_2->setGeometry(QRect(30, 80, 391, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Miriam CLM"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        labelERROR_2->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 520, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_add->setDefault(false);
        C->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        labelERROR->setText(QString());
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_exp->setText(QCoreApplication::translate("MainWindow", "exp", nullptr));
        pushButton_yx->setText(QCoreApplication::translate("MainWindow", "x^y", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_x2->setText(QCoreApplication::translate("MainWindow", "X^2", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_equally->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_sign->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        erase->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        display->setText(QString());
        labelERROR_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
