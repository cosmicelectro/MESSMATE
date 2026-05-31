/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QLineEdit *passwordInput;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *usernameInput;
    QLabel *titleLabel;
    QLabel *subtitleLabel;
    QFrame *loginCard;
    QLabel *label_40;
    QLabel *label_41;
    QCheckBox *showPasswordCheckBox;
    QPushButton *loginBtn;
    QLabel *label_42;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_43;
    QLabel *label_44;
    QWidget *page_3;
    QFrame *frame;
    QPushButton *btnDashboard;
    QPushButton *btnMeals;
    QPushButton *btnMeals_2;
    QPushButton *btnBilling;
    QPushButton *btnLogout;
    QWidget *widget;
    QStackedWidget *dashboardStack;
    QWidget *page_6;
    QLabel *welcomeLabel;
    QFrame *frame_2;
    QLabel *label_4;
    QLabel *totalMembersLabel;
    QFrame *frame_3;
    QLabel *label_19;
    QLabel *totalMealsLabel;
    QPushButton *logoutBtn;
    QFrame *frame_9;
    QLabel *label_27;
    QLabel *totalExpensesLabel;
    QFrame *frame_10;
    QLabel *label_28;
    QLabel *mealRateLabel;
    QTableWidget *recentMealsTable;
    QTableWidget *recentExpenseTable;
    QFrame *frame_15;
    QLabel *label_37;
    QLabel *totalPaidLabel;
    QFrame *frame_16;
    QLabel *outstandingBalanceLabel;
    QLabel *label_39;
    QLabel *currentDateLabel;
    QTableWidget *activityTable;
    QLabel *activityTitleLabel;
    QLabel *label_38;
    QWidget *chartWidget;
    QLabel *activityTitleLabel_2;
    QLabel *activityTitleLabel_3;
    QWidget *page_8;
    QTableWidget *mealTable;
    QLabel *label_23;
    QLabel *label_24;
    QFrame *frame_6;
    QLabel *label_13;
    QPushButton *addMealBtn;
    QLineEdit *mealCountInput;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDateEdit *mealDateInput;
    QPushButton *deleteMealBtn;
    QComboBox *mealMemberCombo;
    QFrame *frame_7;
    QLineEdit *searchMealInput;
    QLabel *label_12;
    QWidget *page_9;
    QFrame *frame_4;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *memberNameInput;
    QLabel *label_10;
    QLineEdit *memberPhoneInput;
    QLabel *label_11;
    QLineEdit *memberRoomInput;
    QPushButton *addMemberBtn;
    QPushButton *deleteMemberBtn;
    QFrame *frame_5;
    QLabel *label_18;
    QLineEdit *searchMemberInput;
    QTableWidget *memberTable_2;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QWidget *page_10;
    QLabel *label_25;
    QLabel *label_26;
    QFrame *expenseFrame;
    QLabel *label_14;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *expenseTypeInput;
    QLineEdit *expenseAmountInput;
    QDateEdit *expenseDateInput;
    QPushButton *addExpenseBtn;
    QPushButton *deleteExpenseBtn;
    QFrame *frame_8;
    QLabel *label_16;
    QLabel *totalExpenseLabel;
    QFrame *frame_11;
    QLabel *label_15;
    QLabel *billingTotalMealsLabel;
    QFrame *frame_12;
    QLabel *label_17;
    QLabel *mealRateLabel_2;
    QFrame *frame_13;
    QLabel *label_32;
    QLabel *billingMemberLabel;
    QTableWidget *expenseTable;
    QTableWidget *memberBillTable;
    QFrame *frame_14;
    QComboBox *paymentMemberCombo;
    QLineEdit *paymentAmountInput;
    QDateEdit *paymentDateInput;
    QPushButton *updatePaymentBtn;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1261, 710);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1241, 651));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:#050811;"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        passwordInput = new QLineEdit(page_2);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(830, 310, 281, 41));
        passwordInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color:#0D1335;\n"
"    color:white;\n"
"    border:2px solid #4D5CFF;\n"
"    border-radius:12px;\n"
"    padding-left:12px;\n"
"    font-size:14px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"    border:2px solid #7A84FF;\n"
"}"));
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(830, 209, 101, 21));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(830, 290, 101, 20));
        usernameInput = new QLineEdit(page_2);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(830, 230, 281, 41));
        usernameInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color:#0D1335;\n"
"    color:white;\n"
"    border:2px solid #4D5CFF;\n"
"    border-radius:12px;\n"
"    padding-left:12px;\n"
"    font-size:14px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"    border:2px solid #7A84FF;\n"
"}"));
        titleLabel = new QLabel(page_2);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(170, 220, 341, 51));
        titleLabel->setStyleSheet(QString::fromUtf8("font-size:48px;\n"
"font-weight:800;\n"
"color:white;\n"
"color:#FFFFFF;"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        subtitleLabel = new QLabel(page_2);
        subtitleLabel->setObjectName("subtitleLabel");
        subtitleLabel->setGeometry(QRect(190, 280, 311, 31));
        subtitleLabel->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:#A5A5A5;"));
        loginCard = new QFrame(page_2);
        loginCard->setObjectName("loginCard");
        loginCard->setGeometry(QRect(790, 80, 351, 471));
        loginCard->setStyleSheet(QString::fromUtf8("QFrame{\n"
"    background-color:#121A45;\n"
"    border:1px solid #2A3A8F;\n"
"    border-radius:20px;\n"
"}"));
        loginCard->setFrameShape(QFrame::Shape::StyledPanel);
        loginCard->setFrameShadow(QFrame::Shadow::Raised);
        label_40 = new QLabel(loginCard);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(35, 20, 281, 51));
        label_40->setStyleSheet(QString::fromUtf8("font-size:36px;\n"
"font-weight:bold;\n"
"color:white;"));
        label_41 = new QLabel(loginCard);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(80, 70, 191, 41));
        label_41->setStyleSheet(QString::fromUtf8("font-size:12px;\n"
"color:#B0B0B0;"));
        label_41->setAlignment(Qt::AlignmentFlag::AlignCenter);
        showPasswordCheckBox = new QCheckBox(loginCard);
        showPasswordCheckBox->setObjectName("showPasswordCheckBox");
        showPasswordCheckBox->setGeometry(QRect(190, 270, 131, 25));
        loginBtn = new QPushButton(loginCard);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setGeometry(QRect(80, 330, 180, 55));
        loginBtn->setMinimumSize(QSize(180, 55));
        loginBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color:#5B4BFF;\n"
"    color:white;\n"
"    border:none;\n"
"    border-radius:15px;\n"
"    font-size:18px;\n"
"    font-weight:bold;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background-color:#6B5FFF;\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoNext));
        loginBtn->setIcon(icon);
        label_42 = new QLabel(loginCard);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(130, 420, 91, 20));
        label_42->setStyleSheet(QString::fromUtf8("color:#B0B0B0;\n"
"font-size:14px;"));
        line = new QFrame(loginCard);
        line->setObjectName("line");
        line->setGeometry(QRect(220, 430, 118, 3));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(loginCard);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(10, 430, 118, 3));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        label_43 = new QLabel(page_2);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(200, 330, 281, 20));
        label_43->setStyleSheet(QString::fromUtf8("font-size:12px;\n"
"color:#A0A0A0;"));
        label_44 = new QLabel(page_2);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(40, 600, 101, 20));
        stackedWidget->addWidget(page_2);
        loginCard->raise();
        passwordInput->raise();
        label_2->raise();
        label_3->raise();
        usernameInput->raise();
        titleLabel->raise();
        subtitleLabel->raise();
        label_43->raise();
        label_44->raise();
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame = new QFrame(page_3);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 10, 201, 641));
        frame->setStyleSheet(QString::fromUtf8("background-color: #1E1E2F;\n"
"border-radius: 15px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        btnDashboard = new QPushButton(frame);
        btnDashboard->setObjectName("btnDashboard");
        btnDashboard->setGeometry(QRect(10, 150, 181, 41));
        btnDashboard->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2D2D44;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3E8EDE;\n"
"}"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        btnDashboard->setIcon(icon1);
        btnMeals = new QPushButton(frame);
        btnMeals->setObjectName("btnMeals");
        btnMeals->setGeometry(QRect(10, 200, 181, 41));
        btnMeals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2D2D44;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3E8EDE;\n"
"}"));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::MediaRecord));
        btnMeals->setIcon(icon2);
        btnMeals_2 = new QPushButton(frame);
        btnMeals_2->setObjectName("btnMeals_2");
        btnMeals_2->setGeometry(QRect(10, 250, 181, 41));
        btnMeals_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2D2D44;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3E8EDE;\n"
"}"));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        btnMeals_2->setIcon(icon3);
        btnBilling = new QPushButton(frame);
        btnBilling->setObjectName("btnBilling");
        btnBilling->setGeometry(QRect(10, 300, 181, 41));
        btnBilling->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2D2D44;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3E8EDE;\n"
"}"));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextStrikethrough));
        btnBilling->setIcon(icon4);
        btnLogout = new QPushButton(frame);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setGeometry(QRect(10, 350, 181, 41));
        btnLogout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2D2D44;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3E8EDE;\n"
"}"));
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        btnLogout->setIcon(icon5);
        widget = new QWidget(frame);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(190, 260, 120, 80));
        dashboardStack = new QStackedWidget(page_3);
        dashboardStack->setObjectName("dashboardStack");
        dashboardStack->setGeometry(QRect(199, 9, 1041, 641));
        dashboardStack->setStyleSheet(QString::fromUtf8("background-color: #121212;\n"
"color: white;"));
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        welcomeLabel = new QLabel(page_6);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(10, 10, 431, 21));
        welcomeLabel->setStyleSheet(QString::fromUtf8("font: 1000 14pt \"Segoe UI\";"));
        frame_2 = new QFrame(page_6);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(10, 70, 181, 81));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #2B2B3C;\n"
"border-radius: 15px;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 141, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        totalMembersLabel = new QLabel(frame_2);
        totalMembersLabel->setObjectName("totalMembersLabel");
        totalMembersLabel->setGeometry(QRect(10, 30, 151, 41));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        totalMembersLabel->setFont(font);
        totalMembersLabel->setStyleSheet(QString::fromUtf8("color: #3E8EDE;"));
        frame_3 = new QFrame(page_6);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(220, 70, 171, 81));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: #2B2B3C;\n"
"border-radius: 15px;"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_19 = new QLabel(frame_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(10, 10, 111, 20));
        label_19->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        totalMealsLabel = new QLabel(frame_3);
        totalMealsLabel->setObjectName("totalMealsLabel");
        totalMealsLabel->setGeometry(QRect(10, 30, 121, 41));
        totalMealsLabel->setFont(font);
        totalMealsLabel->setStyleSheet(QString::fromUtf8("color: #3E8EDE;"));
        logoutBtn = new QPushButton(page_6);
        logoutBtn->setObjectName("logoutBtn");
        logoutBtn->setGeometry(QRect(930, 7, 101, 41));
        logoutBtn->setStyleSheet(QString::fromUtf8("font: 600 11pt \"Segoe UI\";"));
        frame_9 = new QFrame(page_6);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(410, 70, 191, 81));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: #2B2B3C;\n"
"border-radius: 15px;"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        label_27 = new QLabel(frame_9);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(10, 10, 141, 20));
        label_27->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        totalExpensesLabel = new QLabel(frame_9);
        totalExpensesLabel->setObjectName("totalExpensesLabel");
        totalExpensesLabel->setGeometry(QRect(10, 30, 151, 41));
        totalExpensesLabel->setFont(font);
        totalExpensesLabel->setStyleSheet(QString::fromUtf8("color: #3E8EDE;"));
        frame_10 = new QFrame(page_6);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(630, 70, 181, 81));
        frame_10->setStyleSheet(QString::fromUtf8("background-color: #2B2B3C;\n"
"border-radius: 15px;"));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        label_28 = new QLabel(frame_10);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(10, 10, 111, 20));
        label_28->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        mealRateLabel = new QLabel(frame_10);
        mealRateLabel->setObjectName("mealRateLabel");
        mealRateLabel->setGeometry(QRect(10, 30, 111, 41));
        mealRateLabel->setFont(font);
        mealRateLabel->setStyleSheet(QString::fromUtf8("color: #3E8EDE;"));
        recentMealsTable = new QTableWidget(page_6);
        recentMealsTable->setObjectName("recentMealsTable");
        recentMealsTable->setGeometry(QRect(10, 471, 521, 161));
        recentMealsTable->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    background-color: #0f0f17;\n"
"    color: white;\n"
"    border: 1px solid #2d2d44;\n"
"    gridline-color: #1f1f2e;\n"
"    font-size: 13px;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QTableWidget::item\n"
"{\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #3A3AF5;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    border: none;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: #3A3AF5;\n"
"    border: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background: #1a1a28;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background: #3A3AF5;\n"
"    border-radius: 5px;\n"
"}"));
        recentExpenseTable = new QTableWidget(page_6);
        recentExpenseTable->setObjectName("recentExpenseTable");
        recentExpenseTable->setGeometry(QRect(540, 471, 491, 161));
        recentExpenseTable->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    background-color: #0f0f17;\n"
"    color: white;\n"
"    border: 1px solid #2d2d44;\n"
"    gridline-color: #1f1f2e;\n"
"    font-size: 13px;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QTableWidget::item\n"
"{\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #28A745;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    border: none;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: #3A3AF5;\n"
"    border: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background: #1a1a28;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background: #3A3AF5;\n"
"    border-radius: 5px;\n"
"}"));
        frame_15 = new QFrame(page_6);
        frame_15->setObjectName("frame_15");
        frame_15->setGeometry(QRect(840, 70, 191, 80));
        frame_15->setStyleSheet(QString::fromUtf8("background-color: #2B2B3C;\n"
"border-radius: 15px;"));
        frame_15->setFrameShape(QFrame::Shape::StyledPanel);
        frame_15->setFrameShadow(QFrame::Shadow::Raised);
        label_37 = new QLabel(frame_15);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(10, 10, 101, 20));
        label_37->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        totalPaidLabel = new QLabel(frame_15);
        totalPaidLabel->setObjectName("totalPaidLabel");
        totalPaidLabel->setGeometry(QRect(10, 30, 121, 41));
        totalPaidLabel->setFont(font);
        totalPaidLabel->setStyleSheet(QString::fromUtf8("color: #3E8EDE;"));
        frame_16 = new QFrame(page_6);
        frame_16->setObjectName("frame_16");
        frame_16->setGeometry(QRect(10, 160, 571, 91));
        frame_16->setMinimumSize(QSize(0, 60));
        frame_16->setStyleSheet(QString::fromUtf8("background-color: #2B2B3C;\n"
"border-radius: 15px;"));
        frame_16->setFrameShape(QFrame::Shape::StyledPanel);
        frame_16->setFrameShadow(QFrame::Shadow::Raised);
        outstandingBalanceLabel = new QLabel(frame_16);
        outstandingBalanceLabel->setObjectName("outstandingBalanceLabel");
        outstandingBalanceLabel->setGeometry(QRect(10, 26, 541, 60));
        outstandingBalanceLabel->setMinimumSize(QSize(0, 60));
        outstandingBalanceLabel->setFont(font);
        outstandingBalanceLabel->setStyleSheet(QString::fromUtf8("color: #3E8EDE;"));
        outstandingBalanceLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_39 = new QLabel(frame_16);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(10, 6, 201, 20));
        label_39->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        currentDateLabel = new QLabel(page_6);
        currentDateLabel->setObjectName("currentDateLabel");
        currentDateLabel->setGeometry(QRect(690, 10, 241, 31));
        currentDateLabel->setStyleSheet(QString::fromUtf8("font: 600 11pt \"Segoe UI\";"));
        activityTable = new QTableWidget(page_6);
        if (activityTable->columnCount() < 2)
            activityTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        activityTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        activityTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        activityTable->setObjectName("activityTable");
        activityTable->setGeometry(QRect(590, 173, 441, 271));
        activityTitleLabel = new QLabel(page_6);
        activityTitleLabel->setObjectName("activityTitleLabel");
        activityTitleLabel->setGeometry(QRect(590, 152, 141, 21));
        activityTitleLabel->setStyleSheet(QString::fromUtf8("font: 600 11pt \"Segoe UI\";"));
        label_38 = new QLabel(page_6);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(10, 40, 351, 20));
        chartWidget = new QWidget(page_6);
        chartWidget->setObjectName("chartWidget");
        chartWidget->setGeometry(QRect(10, 260, 561, 181));
        chartWidget->setMinimumSize(QSize(0, 0));
        activityTitleLabel_2 = new QLabel(page_6);
        activityTitleLabel_2->setObjectName("activityTitleLabel_2");
        activityTitleLabel_2->setGeometry(QRect(10, 450, 141, 21));
        activityTitleLabel_2->setStyleSheet(QString::fromUtf8("font: 600 11pt \"Segoe UI\";"));
        activityTitleLabel_3 = new QLabel(page_6);
        activityTitleLabel_3->setObjectName("activityTitleLabel_3");
        activityTitleLabel_3->setGeometry(QRect(540, 450, 141, 21));
        activityTitleLabel_3->setStyleSheet(QString::fromUtf8("font: 600 11pt \"Segoe UI\";"));
        dashboardStack->addWidget(page_6);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        mealTable = new QTableWidget(page_8);
        mealTable->setObjectName("mealTable");
        mealTable->setGeometry(QRect(10, 270, 1001, 361));
        label_23 = new QLabel(page_8);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(10, 10, 171, 31));
        label_23->setStyleSheet(QString::fromUtf8("font-size: 32px;\n"
"font-weight: bold;\n"
"color: white;"));
        label_24 = new QLabel(page_8);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(10, 40, 361, 20));
        label_24->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"color: #cfcfcf;"));
        frame_6 = new QFrame(page_8);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(10, 60, 1001, 101));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        label_13 = new QLabel(frame_6);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 10, 171, 20));
        label_13->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        addMealBtn = new QPushButton(frame_6);
        addMealBtn->setObjectName("addMealBtn");
        addMealBtn->setGeometry(QRect(590, 42, 180, 45));
        addMealBtn->setMinimumSize(QSize(180, 45));
        addMealBtn->setMaximumSize(QSize(180, 45));
        addMealBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4C4CFF;\n"
"    color: white;\n"
"    border-radius: 12px;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #6366FF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3A3AF5;\n"
"}"));
        mealCountInput = new QLineEdit(frame_6);
        mealCountInput->setObjectName("mealCountInput");
        mealCountInput->setGeometry(QRect(210, 50, 171, 41));
        mealCountInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #2B2B3C;\n"
"    color: white;\n"
"    border: 2px solid #3E8EDE;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}"));
        label_5 = new QLabel(frame_6);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 30, 71, 20));
        label_6 = new QLabel(frame_6);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 30, 81, 20));
        label_7 = new QLabel(frame_6);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 30, 81, 20));
        mealDateInput = new QDateEdit(frame_6);
        mealDateInput->setObjectName("mealDateInput");
        mealDateInput->setGeometry(QRect(390, 50, 181, 41));
        mealDateInput->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        mealDateInput->setCalendarPopup(true);
        deleteMealBtn = new QPushButton(frame_6);
        deleteMealBtn->setObjectName("deleteMealBtn");
        deleteMealBtn->setGeometry(QRect(780, 44, 211, 41));
        deleteMealBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 13pt \"Segoe UI\";\n"
"    background-color: #D83A3A;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #F04A4A;\n"
"}"));
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        deleteMealBtn->setIcon(icon6);
        mealMemberCombo = new QComboBox(frame_6);
        mealMemberCombo->setObjectName("mealMemberCombo");
        mealMemberCombo->setGeometry(QRect(10, 49, 191, 41));
        mealMemberCombo->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";"));
        frame_7 = new QFrame(page_8);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(10, 169, 1001, 91));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        searchMealInput = new QLineEdit(frame_7);
        searchMealInput->setObjectName("searchMealInput");
        searchMealInput->setGeometry(QRect(10, 40, 981, 41));
        searchMealInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #2B2B3C;\n"
"    color: white;\n"
"    border: 2px solid #3E8EDE;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}"));
        label_12 = new QLabel(frame_7);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 10, 141, 20));
        label_12->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        dashboardStack->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        frame_4 = new QFrame(page_9);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(10, 60, 1021, 101));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(frame_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 10, 171, 20));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        label_9 = new QLabel(frame_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 30, 51, 20));
        label_9->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"text-decoration: underline;"));
        memberNameInput = new QLineEdit(frame_4);
        memberNameInput->setObjectName("memberNameInput");
        memberNameInput->setGeometry(QRect(10, 50, 201, 41));
        memberNameInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E2F;\n"
"    color: white;\n"
"    border: 2px solid #4C4CFF;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #7C7CFF;\n"
"}"));
        label_10 = new QLabel(frame_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(230, 30, 51, 20));
        label_10->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"text-decoration: underline;"));
        memberPhoneInput = new QLineEdit(frame_4);
        memberPhoneInput->setObjectName("memberPhoneInput");
        memberPhoneInput->setGeometry(QRect(230, 50, 191, 41));
        memberPhoneInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E2F;\n"
"    color: white;\n"
"    border: 2px solid #4C4CFF;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #7C7CFF;\n"
"}"));
        label_11 = new QLabel(frame_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(440, 30, 51, 20));
        label_11->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"text-decoration: underline;"));
        memberRoomInput = new QLineEdit(frame_4);
        memberRoomInput->setObjectName("memberRoomInput");
        memberRoomInput->setGeometry(QRect(440, 50, 191, 41));
        memberRoomInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E2F;\n"
"    color: white;\n"
"    border: 2px solid #4C4CFF;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #7C7CFF;\n"
"}"));
        addMemberBtn = new QPushButton(frame_4);
        addMemberBtn->setObjectName("addMemberBtn");
        addMemberBtn->setGeometry(QRect(660, 47, 180, 45));
        addMemberBtn->setMinimumSize(QSize(180, 45));
        addMemberBtn->setMaximumSize(QSize(180, 45));
        addMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4C4CFF;\n"
"    color: white;\n"
"    border-radius: 12px;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #6366FF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3A3AF5;\n"
"}"));
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        addMemberBtn->setIcon(icon7);
        deleteMemberBtn = new QPushButton(frame_4);
        deleteMemberBtn->setObjectName("deleteMemberBtn");
        deleteMemberBtn->setGeometry(QRect(850, 49, 161, 41));
        deleteMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D83A3A;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #F04A4A;\n"
"}"));
        deleteMemberBtn->setIcon(icon6);
        frame_5 = new QFrame(page_9);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(10, 170, 1021, 91));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_18 = new QLabel(frame_5);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 10, 141, 20));
        label_18->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        searchMemberInput = new QLineEdit(frame_5);
        searchMemberInput->setObjectName("searchMemberInput");
        searchMemberInput->setGeometry(QRect(10, 40, 1001, 41));
        searchMemberInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #2B2B3C;\n"
"    color: white;\n"
"    border: 2px solid #3E8EDE;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}"));
        memberTable_2 = new QTableWidget(page_9);
        memberTable_2->setObjectName("memberTable_2");
        memberTable_2->setEnabled(true);
        memberTable_2->setGeometry(QRect(10, 290, 1021, 341));
        label_20 = new QLabel(page_9);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(10, 266, 131, 20));
        label_20->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        label_21 = new QLabel(page_9);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(10, 10, 171, 31));
        label_21->setStyleSheet(QString::fromUtf8("font-size: 32px;\n"
"font-weight: bold;\n"
"color: white;"));
        label_22 = new QLabel(page_9);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(10, 40, 361, 20));
        label_22->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"color: #cfcfcf;\n"
""));
        dashboardStack->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        label_25 = new QLabel(page_10);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(10, -2, 171, 41));
        label_25->setStyleSheet(QString::fromUtf8("font-size: 32px;\n"
"font-weight: bold;\n"
"color: white;"));
        label_26 = new QLabel(page_10);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(11, 38, 361, 20));
        label_26->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"color: #cfcfcf;"));
        expenseFrame = new QFrame(page_10);
        expenseFrame->setObjectName("expenseFrame");
        expenseFrame->setGeometry(QRect(10, 156, 441, 231));
        expenseFrame->setStyleSheet(QString::fromUtf8("background-color: #111827;\n"
"border: 1px solid #2a2a40;\n"
"border-radius: 15px;"));
        expenseFrame->setFrameShape(QFrame::Shape::StyledPanel);
        expenseFrame->setFrameShadow(QFrame::Shadow::Raised);
        label_14 = new QLabel(expenseFrame);
        label_14->setObjectName("label_14");
        label_14->setEnabled(true);
        label_14->setGeometry(QRect(10, 4, 151, 31));
        label_14->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"color: white;"));
        label_14->setScaledContents(false);
        label_29 = new QLabel(expenseFrame);
        label_29->setObjectName("label_29");
        label_29->setEnabled(true);
        label_29->setGeometry(QRect(10, 50, 101, 20));
        label_30 = new QLabel(expenseFrame);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(10, 98, 101, 20));
        label_31 = new QLabel(expenseFrame);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(10, 148, 101, 20));
        expenseTypeInput = new QLineEdit(expenseFrame);
        expenseTypeInput->setObjectName("expenseTypeInput");
        expenseTypeInput->setGeometry(QRect(130, 40, 301, 41));
        expenseTypeInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E2F;\n"
"    color: white;\n"
"    border: 2px solid #4C4CFF;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #7C7CFF;\n"
"}"));
        expenseAmountInput = new QLineEdit(expenseFrame);
        expenseAmountInput->setObjectName("expenseAmountInput");
        expenseAmountInput->setGeometry(QRect(130, 88, 301, 41));
        expenseAmountInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E2F;\n"
"    color: white;\n"
"    border: 2px solid #4C4CFF;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #7C7CFF;\n"
"}"));
        expenseDateInput = new QDateEdit(expenseFrame);
        expenseDateInput->setObjectName("expenseDateInput");
        expenseDateInput->setGeometry(QRect(130, 136, 301, 41));
        expenseDateInput->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        expenseDateInput->setCalendarPopup(true);
        addExpenseBtn = new QPushButton(expenseFrame);
        addExpenseBtn->setObjectName("addExpenseBtn");
        addExpenseBtn->setGeometry(QRect(10, 182, 201, 41));
        addExpenseBtn->setStyleSheet(QString::fromUtf8("background-color: #4F46E5;\n"
"color: white;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"border-radius: 12px;\n"
"padding: 10px;"));
        addExpenseBtn->setIcon(icon4);
        deleteExpenseBtn = new QPushButton(expenseFrame);
        deleteExpenseBtn->setObjectName("deleteExpenseBtn");
        deleteExpenseBtn->setGeometry(QRect(240, 182, 181, 41));
        deleteExpenseBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 11pt \"Segoe UI\";\n"
"    background-color: #D83A3A;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #F04A4A;\n"
"}"));
        deleteExpenseBtn->setIcon(icon6);
        frame_8 = new QFrame(page_10);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(10, 60, 231, 91));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: #2B2B3C;\n"
"border-radius: 15px;"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        label_16 = new QLabel(frame_8);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 10, 141, 20));
        label_16->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        totalExpenseLabel = new QLabel(frame_8);
        totalExpenseLabel->setObjectName("totalExpenseLabel");
        totalExpenseLabel->setGeometry(QRect(10, 30, 161, 51));
        totalExpenseLabel->setStyleSheet(QString::fromUtf8("color: #3E8EDE;\n"
"font: 700 28pt \"Segoe UI\";\n"
""));
        frame_11 = new QFrame(page_10);
        frame_11->setObjectName("frame_11");
        frame_11->setGeometry(QRect(250, 60, 251, 91));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: #2B2B3C;\n"
"border-radius: 15px;"));
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        label_15 = new QLabel(frame_11);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 10, 111, 20));
        label_15->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        billingTotalMealsLabel = new QLabel(frame_11);
        billingTotalMealsLabel->setObjectName("billingTotalMealsLabel");
        billingTotalMealsLabel->setGeometry(QRect(10, 30, 201, 51));
        billingTotalMealsLabel->setStyleSheet(QString::fromUtf8("color: #3E8EDE;\n"
"font: 700 28pt \"Segoe UI\";"));
        frame_12 = new QFrame(page_10);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(510, 60, 261, 91));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: #2B2B3C;\n"
"border-radius: 15px;"));
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        label_17 = new QLabel(frame_12);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 10, 101, 20));
        label_17->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        mealRateLabel_2 = new QLabel(frame_12);
        mealRateLabel_2->setObjectName("mealRateLabel_2");
        mealRateLabel_2->setGeometry(QRect(10, 30, 201, 51));
        mealRateLabel_2->setStyleSheet(QString::fromUtf8("color: #3E8EDE;\n"
"font: 700 28pt \"Segoe UI\";"));
        frame_13 = new QFrame(page_10);
        frame_13->setObjectName("frame_13");
        frame_13->setGeometry(QRect(780, 60, 251, 91));
        frame_13->setStyleSheet(QString::fromUtf8("background-color: #2B2B3C;\n"
"border-radius: 15px;"));
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        label_32 = new QLabel(frame_13);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(10, 10, 141, 20));
        label_32->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));
        billingMemberLabel = new QLabel(frame_13);
        billingMemberLabel->setObjectName("billingMemberLabel");
        billingMemberLabel->setGeometry(QRect(10, 30, 221, 51));
        billingMemberLabel->setStyleSheet(QString::fromUtf8("color: #3E8EDE;\n"
"font: 700 28pt \"Segoe UI\";"));
        expenseTable = new QTableWidget(page_10);
        expenseTable->setObjectName("expenseTable");
        expenseTable->setGeometry(QRect(460, 155, 571, 231));
        expenseTable->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    background-color: #0f0f17;\n"
"    color: white;\n"
"    border: 1px solid #2d2d44;\n"
"    gridline-color: #1f1f2e;\n"
"    font-size: 13px;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QTableWidget::item\n"
"{\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #3A3AF5;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    border: none;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: #3A3AF5;\n"
"    border: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background: #1a1a28;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background: #3A3AF5;\n"
"    border-radius: 5px;\n"
"}"));
        memberBillTable = new QTableWidget(page_10);
        memberBillTable->setObjectName("memberBillTable");
        memberBillTable->setGeometry(QRect(260, 392, 771, 241));
        memberBillTable->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    background-color: #0f0f17;\n"
"    color: white;\n"
"    border: 1px solid #2d2d44;\n"
"    gridline-color: #1f1f2e;\n"
"    font-size: 13px;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QTableWidget::item\n"
"{\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #28A745;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    border: none;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: #3A3AF5;\n"
"    border: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background: #1a1a28;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background: #3A3AF5;\n"
"    border-radius: 5px;\n"
"}"));
        frame_14 = new QFrame(page_10);
        frame_14->setObjectName("frame_14");
        frame_14->setGeometry(QRect(10, 392, 241, 241));
        frame_14->setStyleSheet(QString::fromUtf8("background-color: #111827;\n"
"border: 1px solid #2a2a40;\n"
"border-radius: 15px;"));
        frame_14->setFrameShape(QFrame::Shape::StyledPanel);
        frame_14->setFrameShadow(QFrame::Shadow::Raised);
        paymentMemberCombo = new QComboBox(frame_14);
        paymentMemberCombo->setObjectName("paymentMemberCombo");
        paymentMemberCombo->setGeometry(QRect(90, 26, 141, 31));
        paymentMemberCombo->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";"));
        paymentAmountInput = new QLineEdit(frame_14);
        paymentAmountInput->setObjectName("paymentAmountInput");
        paymentAmountInput->setGeometry(QRect(10, 80, 221, 41));
        paymentAmountInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E2F;\n"
"    color: white;\n"
"    border: 2px solid #4C4CFF;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #7C7CFF;\n"
"}"));
        paymentDateInput = new QDateEdit(frame_14);
        paymentDateInput->setObjectName("paymentDateInput");
        paymentDateInput->setGeometry(QRect(10, 147, 221, 41));
        paymentDateInput->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        paymentDateInput->setCalendarPopup(true);
        updatePaymentBtn = new QPushButton(frame_14);
        updatePaymentBtn->setObjectName("updatePaymentBtn");
        updatePaymentBtn->setGeometry(QRect(10, 195, 221, 41));
        updatePaymentBtn->setStyleSheet(QString::fromUtf8("background-color: #4F46E5;\n"
"color: white;\n"
"font-size: 16px;\n"
"font-weight: bold;\n"
"border-radius: 12px;\n"
"padding: 10px;"));
        updatePaymentBtn->setIcon(icon4);
        label_33 = new QLabel(frame_14);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(10, 30, 71, 20));
        label_34 = new QLabel(frame_14);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(10, 60, 101, 20));
        label_35 = new QLabel(frame_14);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(10, 128, 63, 20));
        label_36 = new QLabel(frame_14);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(10, 0, 131, 20));
        label_36->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"color: white;"));
        dashboardStack->addWidget(page_10);
        expenseTable->raise();
        label_25->raise();
        label_26->raise();
        expenseFrame->raise();
        frame_8->raise();
        frame_11->raise();
        frame_12->raise();
        frame_13->raise();
        memberBillTable->raise();
        frame_14->raise();
        stackedWidget->addWidget(page_3);
        dashboardStack->raise();
        frame->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1261, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(usernameInput, passwordInput);
        QWidget::setTabOrder(passwordInput, loginBtn);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        dashboardStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        passwordInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Password", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\360\237\224\222 Password", nullptr));
        usernameInput->setText(QString());
        usernameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Username", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\215\275\357\270\217MESSMATE", nullptr));
        subtitleLabel->setText(QCoreApplication::translate("MainWindow", "Smart Mess Management System", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Welcome Back!", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "Login to manage meals, expenses,\n"
"payments and member records.", nullptr));
        showPasswordCheckBox->setText(QCoreApplication::translate("MainWindow", "Show Password", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "Secure Login", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "Track Meals \342\200\242 Manage Expenses \342\200\242 Simplify Mess Life", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "MessMate v1.0", nullptr));
        btnDashboard->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        btnMeals->setText(QCoreApplication::translate("MainWindow", "Meals", nullptr));
        btnMeals_2->setText(QCoreApplication::translate("MainWindow", "Members", nullptr));
        btnBilling->setText(QCoreApplication::translate("MainWindow", "Billing", nullptr));
        btnLogout->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Total Members: ", nullptr));
        totalMembersLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Total Meals: ", nullptr));
        totalMealsLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        logoutBtn->setText(QCoreApplication::translate("MainWindow", "\342\206\251Log Out", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Total Expenses:", nullptr));
        totalExpensesLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Meal Rate:", nullptr));
        mealRateLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Total Paid:", nullptr));
        totalPaidLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        outstandingBalanceLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "Outstanding Balance:", nullptr));
        currentDateLabel->setText(QCoreApplication::translate("MainWindow", "Date: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = activityTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Activity", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = activityTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        activityTitleLabel->setText(QCoreApplication::translate("MainWindow", "Recent Activities", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Here's what's happening in your mess today.", nullptr));
        activityTitleLabel_2->setText(QCoreApplication::translate("MainWindow", "Recent Meals", nullptr));
        activityTitleLabel_3->setText(QCoreApplication::translate("MainWindow", "Recent Expenses", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Meals", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Manage daily meal entries here", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Add Meal Entry", nullptr));
        addMealBtn->setText(QCoreApplication::translate("MainWindow", "Add Meal", nullptr));
        mealCountInput->setText(QString());
        mealCountInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Meal", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Meal Count:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        mealDateInput->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd-MM-yyyy", nullptr));
        deleteMealBtn->setText(QCoreApplication::translate("MainWindow", "Delete Selected Meal", nullptr));
        searchMealInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search by username or date...", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Search Meal...", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Add New Member", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        memberNameInput->setText(QString());
        memberNameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Member's Name", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Phone:", nullptr));
        memberPhoneInput->setText(QString());
        memberPhoneInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Member's Phone No.", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Room:", nullptr));
        memberRoomInput->setText(QString());
        memberRoomInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Allocated Room No.", nullptr));
        addMemberBtn->setText(QCoreApplication::translate("MainWindow", "Add Member", nullptr));
        deleteMemberBtn->setText(QCoreApplication::translate("MainWindow", "Delete Member", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Search Member", nullptr));
        searchMemberInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search by name, phone, room...", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "All Members", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Members", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Manage all mess members here.", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Billings", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Manage expenses and view member bills", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Add Expense", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Expense Type:", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Amount (Tk):", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        expenseTypeInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "e.g Rice, Gas, Internet", nullptr));
        expenseAmountInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Tk", nullptr));
        addExpenseBtn->setText(QCoreApplication::translate("MainWindow", "Add Expense", nullptr));
        deleteExpenseBtn->setText(QCoreApplication::translate("MainWindow", "Delete Expense", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Total Expenses", nullptr));
        totalExpenseLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Total Meals", nullptr));
        billingTotalMealsLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Meal Rate", nullptr));
        mealRateLabel_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Total Members", nullptr));
        billingMemberLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        paymentAmountInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Payment Amount (TK)", nullptr));
        updatePaymentBtn->setText(QCoreApplication::translate("MainWindow", "Update Payment", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Member", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Amount Paid:", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Add Payment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
