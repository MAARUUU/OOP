/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(520, 315);
        MainWindow->setMaximumSize(QSize(520, 315));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        labelERROR = new QLabel(centralwidget);
        labelERROR->setObjectName(QStringLiteral("labelERROR"));
        labelERROR->setGeometry(QRect(109, 450, 250, 30));
        labelERROR->setMaximumSize(QSize(250, 30));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        labelERROR->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 128, 401, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_cos = new QPushButton(layoutWidget);
        pushButton_cos->setObjectName(QStringLiteral("pushButton_cos"));
        QFont font1;
        font1.setFamily(QStringLiteral("System"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_cos->setFont(font1);

        gridLayout->addWidget(pushButton_cos, 2, 4, 1, 1);

        pushButton_tan = new QPushButton(layoutWidget);
        pushButton_tan->setObjectName(QStringLiteral("pushButton_tan"));
        pushButton_tan->setFont(font1);

        gridLayout->addWidget(pushButton_tan, 3, 4, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setFont(font1);

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_mul = new QPushButton(layoutWidget);
        pushButton_mul->setObjectName(QStringLiteral("pushButton_mul"));
        pushButton_mul->setFont(font1);

        gridLayout->addWidget(pushButton_mul, 2, 3, 1, 1);

        pushButton_ln = new QPushButton(layoutWidget);
        pushButton_ln->setObjectName(QStringLiteral("pushButton_ln"));
        QFont font2;
        font2.setFamily(QStringLiteral("System"));
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_ln->setFont(font2);
        pushButton_ln->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_ln, 0, 1, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setFont(font1);

        gridLayout->addWidget(pushButton_0, 4, 0, 1, 1);

        pushButton_sqrt = new QPushButton(layoutWidget);
        pushButton_sqrt->setObjectName(QStringLiteral("pushButton_sqrt"));
        pushButton_sqrt->setFont(font2);
        pushButton_sqrt->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_sqrt, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setFont(font1);

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_exp = new QPushButton(layoutWidget);
        pushButton_exp->setObjectName(QStringLiteral("pushButton_exp"));
        pushButton_exp->setFont(font2);
        pushButton_exp->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_exp, 0, 0, 1, 1);

        pushButton_yx = new QPushButton(layoutWidget);
        pushButton_yx->setObjectName(QStringLiteral("pushButton_yx"));
        pushButton_yx->setFont(font2);
        pushButton_yx->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_yx, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setFont(font1);

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font1);

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setFont(font1);

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font1);

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_div = new QPushButton(layoutWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setFont(font1);

        gridLayout->addWidget(pushButton_div, 1, 3, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_x2 = new QPushButton(layoutWidget);
        pushButton_x2->setObjectName(QStringLiteral("pushButton_x2"));
        pushButton_x2->setFont(font2);
        pushButton_x2->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_x2, 0, 4, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font1);

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_sin = new QPushButton(layoutWidget);
        pushButton_sin->setObjectName(QStringLiteral("pushButton_sin"));
        pushButton_sin->setFont(font1);

        gridLayout->addWidget(pushButton_sin, 1, 4, 1, 1);

        pushButton_sub = new QPushButton(layoutWidget);
        pushButton_sub->setObjectName(QStringLiteral("pushButton_sub"));
        pushButton_sub->setFont(font1);

        gridLayout->addWidget(pushButton_sub, 3, 3, 1, 1);

        pushButton_add = new QPushButton(layoutWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setFont(font1);
        pushButton_add->setCheckable(false);
        pushButton_add->setAutoDefault(false);
        pushButton_add->setFlat(false);

        gridLayout->addWidget(pushButton_add, 4, 1, 1, 1);

        pushButton_dot = new QPushButton(layoutWidget);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        pushButton_dot->setFont(font1);

        gridLayout->addWidget(pushButton_dot, 4, 2, 1, 1);

        pushButton_equally = new QPushButton(layoutWidget);
        pushButton_equally->setObjectName(QStringLiteral("pushButton_equally"));
        pushButton_equally->setFont(font1);

        gridLayout->addWidget(pushButton_equally, 4, 3, 1, 2);

        pushButton_sign = new QPushButton(centralwidget);
        pushButton_sign->setObjectName(QStringLiteral("pushButton_sign"));
        pushButton_sign->setGeometry(QRect(430, 240, 71, 41));
        pushButton_sign->setAutoFillBackground(false);
        erase = new QPushButton(centralwidget);
        erase->setObjectName(QStringLiteral("erase"));
        erase->setGeometry(QRect(430, 190, 71, 41));
        erase->setAutoFillBackground(false);
        erase->setCheckable(false);
        erase->setAutoDefault(false);
        C = new QPushButton(centralwidget);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(430, 140, 71, 41));
        C->setFont(font);
        C->setAutoFillBackground(false);
        C->setAutoDefault(false);
        C->setFlat(false);
        display = new QLabel(centralwidget);
        display->setObjectName(QStringLiteral("display"));
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
        display->setPalette(palette);
        QFont font3;
        font3.setPointSize(16);
        display->setFont(font3);
        display->setLayoutDirection(Qt::LeftToRight);
        display->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"	background-color:white; \n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelERROR_2 = new QLabel(centralwidget);
        labelERROR_2->setObjectName(QStringLiteral("labelERROR_2"));
        labelERROR_2->setGeometry(QRect(50, 90, 391, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Miriam CLM"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        labelERROR_2->setFont(font4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 520, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_add->setDefault(false);
        C->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", Q_NULLPTR));
        labelERROR->setText(QString());
        pushButton_cos->setText(QApplication::translate("MainWindow", "cos", Q_NULLPTR));
        pushButton_tan->setText(QApplication::translate("MainWindow", "tan", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_mul->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        pushButton_ln->setText(QApplication::translate("MainWindow", "ln", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_sqrt->setText(QApplication::translate("MainWindow", "\342\210\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_exp->setText(QApplication::translate("MainWindow", "exp", Q_NULLPTR));
        pushButton_yx->setText(QApplication::translate("MainWindow", "x^y", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_div->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_x2->setText(QApplication::translate("MainWindow", "X^2", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_sin->setText(QApplication::translate("MainWindow", "sin", Q_NULLPTR));
        pushButton_sub->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        pushButton_equally->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        pushButton_sign->setText(QApplication::translate("MainWindow", "\302\261", Q_NULLPTR));
        erase->setText(QApplication::translate("MainWindow", "\342\206\222", Q_NULLPTR));
        C->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        display->setText(QString());
        labelERROR_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
