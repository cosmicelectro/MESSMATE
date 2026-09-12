#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QHeaderView>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QAbstractItemView>
#include <QHeaderView>
#include <QGraphicsDropShadowEffect>
#include <QSqlError>
#include <QDateTime>
#include <QVBoxLayout>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QPixmap>

// DATABASE CONNECTION
// DATABASE CONNECTION
void connectDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("messmate.db");

    if (!db.open())
    {
        qDebug() << "Database failed!";
        qDebug() << db.lastError().text();
        return;
    }

    qDebug() << "Database connected!";

    QSqlQuery query;

    // Enable foreign key support
    query.exec("PRAGMA foreign_keys = ON");

    // USERS TABLE
    query.exec(
        "CREATE TABLE IF NOT EXISTS users ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "username TEXT UNIQUE,"
        "password TEXT)"
        );

    // DEFAULT USER
    query.exec(
        "INSERT OR IGNORE INTO users(id, username, password) "
        "VALUES(1, 'admin', '1234')"
        );

    // MEMBERS TABLE
    query.exec(
        "CREATE TABLE IF NOT EXISTS members ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "name TEXT UNIQUE,"
        "phone TEXT,"
        "room TEXT)"
        );

    // MEALS TABLE
    query.exec(
        "CREATE TABLE IF NOT EXISTS meals ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "member_id INTEGER,"
        "meal_count INTEGER,"
        "meal_date TEXT,"
        "FOREIGN KEY(member_id) REFERENCES members(id) "
        "ON DELETE CASCADE)"
        );

    // EXPENSES TABLE
    query.exec(
        "CREATE TABLE IF NOT EXISTS expenses ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "type TEXT,"
        "amount REAL,"
        "expense_date TEXT)"
        );

    // PAYMENTS TABLE
    query.exec(
        "CREATE TABLE IF NOT EXISTS payments ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "member_id INTEGER,"
        "amount REAL,"
        "payment_date TEXT,"
        "FOREIGN KEY(member_id) REFERENCES members(id) "
        "ON DELETE CASCADE)"
        );

    // ACTIVITIES TABLE
    query.exec(
        "CREATE TABLE IF NOT EXISTS activities ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "activity TEXT,"
        "activity_time TEXT)"
        );
}

// CONSTRUCTOR
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(
        ui->passwordInput,
        &QLineEdit::returnPressed,
        ui->loginBtn,
        &QPushButton::click);

    connect(
        ui->showPasswordCheckBox,
        &QCheckBox::toggled,
        this,
        [=](bool checked)
        {
            ui->passwordInput->setEchoMode(
                checked
                    ? QLineEdit::Normal
                    : QLineEdit::Password);
        });
    ui->activityTable->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::Stretch);
    ui->mealTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->memberTable_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->memberTable_2->horizontalHeader()->setSectionResizeMode(4,QHeaderView::ResizeToContents);
    ui->mealTable->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    ui->memberTable_2->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    ui->paymentDateInput->setDate(
        QDate::currentDate());
    ui->mealDateInput->setDate(
        QDate::currentDate());
    ui->expenseDateInput->setDate(
        QDate::currentDate());

    ui->mealTable->setStyleSheet(
        "QTableWidget::item { text-align: center; }"
        );

    ui->memberTable_2->setStyleSheet(
        "QTableWidget::item { text-align: center; }"
        );
    ui->mealTable->horizontalHeader()->setStyleSheet(
        "QHeaderView::section { "
        "background-color: #3A3AF5; "
        "color: white; "
        "font-weight: bold; "
        "font-size: 13px; "
        "padding: 8px; "
        "}"
        );
    ui->memberTable_2->horizontalHeader()->setStyleSheet(
        "QHeaderView::section { "
        "background-color: #28A745; "
        "color: white; "
        "font-weight: bold; "
        "font-size: 13px; "
        "padding: 8px; "
        "}"
        );
    ui->expenseTable->setColumnCount(5);

    QStringList expenseHeaders;

    expenseHeaders << "No."
                   << "Type"
                   << "Amount"
                   << "Date"
                   << "Edit";

    ui->expenseTable->setHorizontalHeaderLabels(
        expenseHeaders);

    ui->expenseTable->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::Stretch);

    ui->expenseTable->verticalHeader()
        ->setVisible(false);

    ui->expenseTable->setEditTriggers(
        QAbstractItemView::NoEditTriggers);

    ui->expenseTable->setSelectionBehavior(
        QAbstractItemView::SelectRows);

    ui->expenseTable->setSelectionMode(
        QAbstractItemView::SingleSelection);
    ui->memberBillTable->setColumnCount(7);

    QStringList billHeaders;

    billHeaders << "No."
                << "Name"
                << "Meals"
                << "Total Bill"
                << "Paid"
                << "Balance"
                << "Last Payment";

    ui->memberBillTable->setHorizontalHeaderLabels(
        billHeaders);
    ui->memberBillTable->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::Interactive);

    ui->memberBillTable->setColumnWidth(0, 50);
    ui->memberBillTable->setColumnWidth(2, 80);
    ui->memberBillTable->setColumnWidth(3, 120);
    ui->memberBillTable->setColumnWidth(4, 120);
    ui->memberBillTable->setColumnWidth(5, 120);
    ui->memberBillTable->setColumnWidth(6, 130);

    ui->memberBillTable->horizontalHeader()
        ->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->memberBillTable->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::Stretch);

    ui->memberBillTable->verticalHeader()
        ->setVisible(false);

    ui->memberBillTable->setEditTriggers(
        QAbstractItemView::NoEditTriggers);
    QGraphicsDropShadowEffect *shadow =
        new QGraphicsDropShadowEffect(this);

    shadow->setBlurRadius(20);
    shadow->setOffset(0, 0);

    ui->addMemberBtn->setGraphicsEffect(shadow);
    ui->memberTable_2->verticalHeader()->setVisible(false);
    ui->recentMealsTable->setColumnCount(3);

    QStringList recentMealHeaders;

    recentMealHeaders << "Name"
                      << "Meals"
                      << "Date";

    ui->recentMealsTable
        ->setHorizontalHeaderLabels(recentMealHeaders);

    ui->recentMealsTable
        ->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::Stretch);

    ui->recentMealsTable
        ->horizontalHeader()
        ->setDefaultAlignment(Qt::AlignCenter);

    ui->recentMealsTable
        ->verticalHeader()
        ->setVisible(false);

    ui->recentMealsTable
        ->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->recentMealsTable
        ->setSelectionMode(QAbstractItemView::NoSelection);

    ui->recentMealsTable
        ->setFocusPolicy(Qt::NoFocus);
    ui->recentExpenseTable->setColumnCount(3);

    QStringList recentExpenseHeaders;

    recentExpenseHeaders << "Type"
                         << "Amount"
                         << "Date";

    ui->recentExpenseTable
        ->setHorizontalHeaderLabels(recentExpenseHeaders);

    ui->recentExpenseTable
        ->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::Stretch);

    ui->recentExpenseTable
        ->horizontalHeader()
        ->setDefaultAlignment(Qt::AlignCenter);

    ui->recentExpenseTable
        ->verticalHeader()
        ->setVisible(false);

    ui->recentExpenseTable
        ->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->recentExpenseTable
        ->setSelectionMode(QAbstractItemView::NoSelection);

    ui->recentExpenseTable
        ->setFocusPolicy(Qt::NoFocus);
    ui->recentMealsTable
        ->horizontalHeader()
        ->setStyleSheet(
            "QHeaderView::section { "
            "background-color: #3A3AF5; "
            "color: white; "
            "font-weight: bold; "
            "font-size: 13px; "
            "padding: 8px; "
            "}"
            );
    ui->recentExpenseTable
        ->horizontalHeader()
        ->setStyleSheet(
            "QHeaderView::section { "
            "background-color: #28A745; "
            "color: white; "
            "font-weight: bold; "
            "font-size: 13px; "
            "padding: 8px; "
            "}"
            );
    ui->currentDateLabel->setText(
        QDate::currentDate()
            .toString(
                "dd MMM yyyy"));

    ui->mealTable->setColumnCount(4);

    QStringList headers;

    headers << "No."
            << "Username"
            << "Meal Count"
            << "Date";

    ui->mealTable->setHorizontalHeaderLabels(headers);
    ui->mealTable->verticalHeader()->setVisible(false);
    ui->mealTable->horizontalHeader()->setStretchLastSection(true);
    ui->mealTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->mealTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->mealTable->setSelectionBehavior(
        QAbstractItemView::SelectRows);

    ui->mealTable->setSelectionMode(
        QAbstractItemView::SingleSelection);
    ui->mealTable->setFocusPolicy(Qt::NoFocus);

    ui->memberTable_2->setColumnCount(5);

    QStringList memberHeaders;

    memberHeaders << "No."
                  << "Name"
                  << "Phone"
                  << "Room"
                  << "Edit";

    ui->memberTable_2->setHorizontalHeaderLabels(memberHeaders);

    // CONNECT DATABASE
    connectDatabase();
    loadMeals();
    loadExpenses();
    loadMemberBills();
    updateBillingStats();
    loadMembers();
    loadMemberNames();
    loadRecentMeals();
    loadPaymentMembers();
    loadRecentExpenses();
    updateDashboardStats();
    loadExpenseChart();

    // OPEN LOGIN PAGE FIRST
    ui->stackedWidget->setCurrentIndex(0);

    ui->memberTable_2->setSelectionBehavior(
        QAbstractItemView::SelectRows);

    ui->memberTable_2->setSelectionMode(
        QAbstractItemView::SingleSelection);

}
void MainWindow::loadMeals()
{
    ui->mealTable->setRowCount(0);

    QSqlQuery query;

    query.exec(
        "SELECT meals.id, members.name, "
        "meals.meal_count, meals.meal_date "
        "FROM meals "
        "INNER JOIN members "
        "ON meals.member_id = members.id "
        "ORDER BY meals.id DESC"
        );

    int row = 0;

    while(query.next())
    {
        ui->mealTable->insertRow(row);

        QTableWidgetItem *item1 =
            new QTableWidgetItem(
                QString::number(row + 1)
                );

        // Store meal database ID
        item1->setData(
            Qt::UserRole,
            query.value(0).toInt()
            );

        QTableWidgetItem *item2 =
            new QTableWidgetItem(
                query.value(1).toString()
                );

        QTableWidgetItem *item3 =
            new QTableWidgetItem(
                query.value(2).toString()
                );

        QTableWidgetItem *item4 =
            new QTableWidgetItem(
                query.value(3).toString()
                );

        item1->setTextAlignment(Qt::AlignCenter);
        item2->setTextAlignment(Qt::AlignCenter);
        item3->setTextAlignment(Qt::AlignCenter);
        item4->setTextAlignment(Qt::AlignCenter);

        ui->mealTable->setItem(row, 0, item1);
        ui->mealTable->setItem(row, 1, item2);
        ui->mealTable->setItem(row, 2, item3);
        ui->mealTable->setItem(row, 3, item4);

        row++;
    }
}
void MainWindow::loadRecentMeals()
{
    ui->recentMealsTable->setRowCount(0);

    QSqlQuery query;

    query.exec(
        "SELECT members.name, meals.meal_count, meals.meal_date "
        "FROM meals "
        "INNER JOIN members "
        "ON meals.member_id = members.id "
        "ORDER BY meals.id DESC "
        "LIMIT 5"
        );

    int row = 0;

    while(query.next())
    {
        ui->recentMealsTable->insertRow(row);

        QTableWidgetItem *item1 =
            new QTableWidgetItem(
                query.value(0).toString()
                );

        QTableWidgetItem *item2 =
            new QTableWidgetItem(
                query.value(1).toString()
                );

        QTableWidgetItem *item3 =
            new QTableWidgetItem(
                query.value(2).toString()
                );

        item1->setTextAlignment(Qt::AlignCenter);
        item2->setTextAlignment(Qt::AlignCenter);
        item3->setTextAlignment(Qt::AlignCenter);

        ui->recentMealsTable->setItem(row, 0, item1);
        ui->recentMealsTable->setItem(row, 1, item2);
        ui->recentMealsTable->setItem(row, 2, item3);

        row++;
    }
}
void MainWindow::loadExpenses()
{
    ui->expenseTable->setRowCount(0);

    QSqlQuery query;

    query.exec("SELECT id, type, amount, expense_date FROM expenses");

    int row = 0;

    while(query.next())
    {
        ui->expenseTable->insertRow(row);

        QTableWidgetItem *item1 =
            new QTableWidgetItem(
                QString::number(row + 1));
        item1->setData(Qt::UserRole,
                       query.value(0).toInt());
        QTableWidgetItem *item2 =
            new QTableWidgetItem(
                query.value(1).toString());

        QTableWidgetItem *item3 =
            new QTableWidgetItem(
                query.value(2).toString());

        QTableWidgetItem *item4 =
            new QTableWidgetItem(
                query.value(3).toString());

        item1->setTextAlignment(Qt::AlignCenter);
        item2->setTextAlignment(Qt::AlignCenter);
        item3->setTextAlignment(Qt::AlignCenter);
        item4->setTextAlignment(Qt::AlignCenter);

        ui->expenseTable->setItem(row,0,item1);
        ui->expenseTable->setItem(row,1,item2);
        ui->expenseTable->setItem(row,2,item3);
        ui->expenseTable->setItem(row,3,item4);

        QPushButton *editBtn = new QPushButton("✏");

        editBtn->setProperty("id", query.value(0).toInt());

        ui->expenseTable->setCellWidget(row,4,editBtn);

        connect(editBtn,&QPushButton::clicked,this,[=]()
                {
                    currentExpenseId = editBtn->property("id").toInt();

                    ui->expenseTypeInput->setText(item2->text());

                    ui->expenseAmountInput->setText(item3->text());

                    ui->expenseDateInput->setDate(
                        QDate::fromString(item4->text(),"dd-MM-yyyy"));

                    ui->addExpenseBtn->setText("Update Expense");
                });

        row++;
    }
}
void MainWindow::loadMembers()
{
    ui->memberTable_2->setRowCount(0);

    QSqlQuery query;
    query.exec("SELECT id, name, phone, room FROM members");

    int row = 0;

    while(query.next())
    {
        ui->memberTable_2->insertRow(row);

        QTableWidgetItem *item1 =
            new QTableWidgetItem(QString::number(row + 1));
        item1->setData(Qt::UserRole, query.value(0).toInt());

        QTableWidgetItem *item2 =
            new QTableWidgetItem(query.value(1).toString());

        QTableWidgetItem *item3 =
            new QTableWidgetItem(query.value(2).toString());

        QTableWidgetItem *item4 =
            new QTableWidgetItem(query.value(3).toString());

        item1->setTextAlignment(Qt::AlignCenter);
        item2->setTextAlignment(Qt::AlignCenter);
        item3->setTextAlignment(Qt::AlignCenter);
        item4->setTextAlignment(Qt::AlignCenter);

        ui->memberTable_2->setItem(row,0,item1);
        ui->memberTable_2->setItem(row,1,item2);
        ui->memberTable_2->setItem(row,2,item3);
        ui->memberTable_2->setItem(row,3,item4);

        QPushButton *editBtn = new QPushButton("✏");

        editBtn->setCursor(Qt::PointingHandCursor);

        editBtn->setStyleSheet(
            "QPushButton{"
            "background:#3A3AF5;"
            "color:white;"
            "border-radius:6px;"
            "font-size:15px;"
            "font-weight:bold;"
            "}"
            "QPushButton:hover{"
            "background:#5555ff;"
            "}");

        editBtn->setProperty("id", query.value(0).toInt());

        ui->memberTable_2->setCellWidget(row,4,editBtn);

        connect(editBtn,&QPushButton::clicked,this,[=]()
                {
                    currentMemberId =
                        editBtn->property("id").toInt();

                    ui->memberNameInput->setText(item2->text());

                    ui->memberPhoneInput->setText(item3->text());

                    ui->memberRoomInput->setText(item4->text());

                    ui->addMemberBtn->setText("Update Member");
                });

        row++;
    }
}
void MainWindow::loadMemberNames()
{
    ui->mealMemberCombo->clear();

    QSqlQuery query;

    query.exec(
        "SELECT id, name "
        "FROM members "
        "ORDER BY name"
        );

    while(query.next())
    {
        int memberId = query.value(0).toInt();
        QString memberName = query.value(1).toString();

        ui->mealMemberCombo->addItem(
            memberName,
            memberId
            );
    }
}
void MainWindow::updateDashboardStats()
{
    QSqlQuery query;
    //Total Paid
    // TOTAL PAID
    query.exec(
        "SELECT COALESCE(SUM(amount), 0) "
        "FROM payments");

    double totalPaid = 0;

    if(query.next())
    {
        totalPaid =
            query.value(0).toDouble();
    }


    ui->totalPaidLabel->setText(
        QString::number(totalPaid, 'f', 2));
    // TOTAL MEMBERS
    query.exec("SELECT COUNT(*) FROM members");

    int totalMembers = 0;

    if(query.next())
    {
        totalMembers = query.value(0).toInt();
    }

    ui->totalMembersLabel->setText(
        QString::number(totalMembers));

    // TOTAL MEALS
    query.exec("SELECT SUM(meal_count) FROM meals");

    double totalMeals = 0;

    if(query.next())
    {
        totalMeals = query.value(0).toDouble();
    }

    ui->totalMealsLabel->setText(
        QString::number(totalMeals));

    // TOTAL EXPENSES
    query.exec("SELECT SUM(amount) FROM expenses");

    double totalExpenses = 0;

    if(query.next())
    {
        totalExpenses = query.value(0).toDouble();
    }

    ui->totalExpensesLabel->setText(
        QString::number(totalExpenses));

    // MEAL RATE
    double mealRate = 0;

    if(totalMeals > 0)
    {
        mealRate = totalExpenses / totalMeals;
    }

    ui->mealRateLabel->setText(
        QString::number(mealRate, 'f', 2));
    // OUTSTANDING BALANCE
    double balance =
        totalPaid - totalExpenses;

    if(balance >= 0)
    {
        ui->outstandingBalanceLabel->setText(
            "Advance: " +
            QString::number(balance, 'f', 2));

        ui->outstandingBalanceLabel->setStyleSheet(
            "color: #4CAF50;"
            "font-size: 24px;"
            "font-weight: bold;");
    }
    else
    {
        ui->outstandingBalanceLabel->setText(
            "Due: " +
            QString::number(-balance, 'f', 2));

        ui->outstandingBalanceLabel->setStyleSheet(
            "color: #F44336;"
            "font-size: 24px;"
            "font-weight: bold;");
    }
}
// DESTRUCTOR
MainWindow::~MainWindow()
{
    delete ui;
}

// LOGIN BUTTON
void MainWindow::on_loginBtn_clicked()
{
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    QSqlQuery query;

    query.prepare("SELECT * FROM users "
                  "WHERE username = :username "
                  "AND password = :password");

    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if(query.exec() && query.next())
    {
        ui->welcomeLabel->setText("Welcome " + username);

        loadMeals();
        loadMembers();
        loadExpenses();
        loadMemberBills();
        loadRecentMeals();
        loadRecentExpenses();
        loadRecentActivities();

        updateDashboardStats();
        updateBillingStats();

        // OPEN DASHBOARD PAGE
        ui->stackedWidget->setCurrentIndex(1);
        loadRecentActivities();
    }
    else
    {
        QMessageBox::warning(this,
                             "Login",
                             "Invalid Credentials!");
    }
}

// LOGOUT BUTTON
void MainWindow::on_logoutBtn_clicked()
{
    // RETURN TO LOGIN PAGE
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_addMealBtn_clicked()
{
    QString memberName =
        ui->mealMemberCombo->currentText();

    int memberId =
        ui->mealMemberCombo->currentData().toInt();

    int mealCount =
        ui->mealCountInput->text().toInt();

    QString date =
        ui->mealDateInput
            ->date()
            .toString("dd-MM-yyyy");

    // Validate input
    if(memberName.isEmpty() ||
        memberId <= 0 ||
        mealCount <= 0)
    {
        QMessageBox::warning(
            this,
            "Error",
            "Invalid meal input!"
            );
        return;
    }

    QSqlQuery query;

    query.prepare(
        "INSERT INTO meals "
        "(member_id, meal_count, meal_date) "
        "VALUES (:member_id, :meal_count, :meal_date)"
        );

    query.bindValue(
        ":member_id",
        memberId
        );

    query.bindValue(
        ":meal_count",
        mealCount
        );

    query.bindValue(
        ":meal_date",
        date
        );

    if(query.exec())
    {
        QMessageBox::information(
            this,
            "Success",
            "Meal Added!"
            );

        loadMeals();
        loadRecentMeals();
        updateDashboardStats();
        loadMemberBills();
        updateBillingStats();

        ui->mealCountInput->clear();

        // Activity
        QSqlQuery activity;

        activity.prepare(
            "INSERT INTO activities "
            "(activity, activity_time) "
            "VALUES (:activity, :time)"
            );

        activity.bindValue(
            ":activity",
            memberName +
                " added " +
                QString::number(mealCount) +
                " meals"
            );

        activity.bindValue(
            ":time",
            QDateTime::currentDateTime()
                .toString("dd-MM hh:mm")
            );

        activity.exec();

        loadRecentActivities();
    }
    else
    {
        QMessageBox::warning(
            this,
            "Error",
            query.lastError().text()
            );
    }
}


void MainWindow::on_addMemberBtn_clicked()
{
    QString name = ui->memberNameInput->text();
    QString phone = ui->memberPhoneInput->text();
    QString room = ui->memberRoomInput->text();

    // Check empty fields
    if(name.isEmpty() || phone.isEmpty() || room.isEmpty())
    {
        QMessageBox::warning(this,
                             "Warning",
                             "Please fill all fields!");
        return;
    }

    QSqlQuery query;

    if(currentMemberId == -1)
    {
        QSqlQuery checkQuery;

        checkQuery.prepare(
            "SELECT COUNT(*) FROM members WHERE name=:name");

        checkQuery.bindValue(":name", name);
        checkQuery.exec();

        if(checkQuery.next() && checkQuery.value(0).toInt()>0)
        {
            QMessageBox::warning(this,
                                 "Duplicate",
                                 "Member already exists!");
            return;
        }

        query.prepare(
            "INSERT INTO members(name,phone,room)"
            "VALUES(:name,:phone,:room)");
    }
    else
    {
        query.prepare(
            "UPDATE members "
            "SET name=:name,"
            "phone=:phone,"
            "room=:room "
            "WHERE id=:id");

        query.bindValue(":id", currentMemberId);
    }

    query.bindValue(":name", name);
    query.bindValue(":phone", phone);
    query.bindValue(":room", room);

    if(query.exec())
    {
        // Reload table
        loadMembers();
        loadMemberNames();
        loadPaymentMembers();
        // Update dashboard stats
        updateDashboardStats();
        updateBillingStats();

        currentMemberId = -1;

        ui->addMemberBtn->setText("Add Member");

        QMessageBox::information(
            this,
            "Success",
            "Saved Successfully!");

        // Clear inputs
        ui->memberNameInput->clear();
        ui->memberPhoneInput->clear();
        ui->memberRoomInput->clear();
    }
    else
    {
        QMessageBox::warning(this,
                             "Error",
                             "Failed to add member!");
    }
    QSqlQuery activity;

    activity.prepare(
        "INSERT INTO activities "
        "(activity, activity_time) "
        "VALUES(:activity,:time)");

    activity.bindValue(
        ":activity",
        "New member: " + name);

    activity.bindValue(
        ":time",
        QDateTime::currentDateTime()
            .toString("dd-MM hh:mm"));

    activity.exec();
    loadRecentActivities();
}

void MainWindow::on_btnDashboard_clicked()
{
    ui->dashboardStack->setCurrentIndex(0);
}


void MainWindow::on_btnMeals_clicked()
{
    ui->dashboardStack->setCurrentIndex(1);
}


void MainWindow::on_btnMeals_2_clicked()
{
    ui->dashboardStack->setCurrentIndex(2);
}


void MainWindow::on_btnBilling_clicked()
{
    ui->dashboardStack->setCurrentIndex(3);
}


void MainWindow::on_btnLogout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_searchMemberInput_textChanged(const QString &text)
{
    for(int row = 0; row < ui->memberTable_2->rowCount(); row++)
    {
        bool match = false;

        for(int col = 0; col < ui->memberTable_2->columnCount(); col++)
        {
            QTableWidgetItem *item =
                ui->memberTable_2->item(row, col);

            if(item &&
                item->text().contains(text,
                                      Qt::CaseInsensitive))
            {
                match = true;
                break;
            }
        }

        ui->memberTable_2->setRowHidden(row, !match);
    }
}
void MainWindow::on_deleteMemberBtn_clicked()
{
    int row = ui->memberTable_2->currentRow();

    if(row == -1)
    {
        QMessageBox::warning(this,
                             "Warning",
                             "Please select a member!");
        return;
    }

    QString phone =
        ui->memberTable_2->item(row, 2)->text();
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(
        this,
        "Delete Member",
        "Are you sure you want to delete this member?",
        QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::No)
    {
        return;
    }
    QSqlQuery query;

    query.prepare("DELETE FROM members "
                  "WHERE phone = :phone");

    query.bindValue(":phone", phone);

    if(query.exec())
    {
        QMessageBox::information(this,
                                 "Success",
                                 "Member deleted!");

        loadMembers();
        loadMemberNames();      // refresh meals combobox
        loadPaymentMembers();
        updateDashboardStats();
        updateBillingStats();
    }
    else
    {
        QMessageBox::warning(this,
                             "Error",
                             "Delete failed!");
    }
}

void MainWindow::on_searchMealInput_textChanged(const QString &text)
{
    for(int row = 0; row < ui->mealTable->rowCount(); row++)
    {
        bool match = false;

        for(int col = 0; col < ui->mealTable->columnCount(); col++)
        {
            QTableWidgetItem *item =
                ui->mealTable->item(row, col);

            if(item &&
                item->text().contains(text,
                                      Qt::CaseInsensitive))
            {
                match = true;
                break;
            }
        }

        ui->mealTable->setRowHidden(row, !match);
    }
}
void MainWindow::loadRecentExpenses()
{
    ui->recentExpenseTable->setRowCount(0);

    QSqlQuery query;

    query.exec("SELECT type, amount, expense_date "
               "FROM expenses "
               "ORDER BY id DESC LIMIT 5");

    int row = 0;

    while(query.next())
    {
        ui->recentExpenseTable->insertRow(row);

        QTableWidgetItem *item1 =
            new QTableWidgetItem(
                query.value(0).toString());

        QTableWidgetItem *item2 =
            new QTableWidgetItem(
                query.value(1).toString());

        QTableWidgetItem *item3 =
            new QTableWidgetItem(
                query.value(2).toString());

        item1->setTextAlignment(Qt::AlignCenter);
        item2->setTextAlignment(Qt::AlignCenter);
        item3->setTextAlignment(Qt::AlignCenter);

        ui->recentExpenseTable->setItem(row, 0, item1);
        ui->recentExpenseTable->setItem(row, 1, item2);
        ui->recentExpenseTable->setItem(row, 2, item3);

        row++;
    }
}
void MainWindow::updateBillingStats()
{
    QSqlQuery query;

    // TOTAL EXPENSES
    query.exec("SELECT SUM(amount) FROM expenses");

    double totalExpenses = 0;

    if(query.next())
    {
        totalExpenses = query.value(0).toDouble();
    }

    ui->totalExpenseLabel->setText(
        QString::number(totalExpenses));

    // TOTAL MEALS
    query.exec("SELECT SUM(meal_count) FROM meals");

    double totalMeals = 0;

    if(query.next())
    {
        totalMeals = query.value(0).toDouble();
    }

    ui->billingTotalMealsLabel->setText(
        QString::number(totalMeals));

    // TOTAL MEMBERS
    query.exec("SELECT COUNT(*) FROM members");

    int totalMembers = 0;

    if(query.next())
    {
        totalMembers = query.value(0).toInt();
    }

    ui->billingMemberLabel->setText(
        QString::number(totalMembers));

    // MEAL RATE
    double mealRate = 0;

    if(totalMeals > 0)
    {
        mealRate = totalExpenses / totalMeals;
    }

    ui->mealRateLabel_2->setText(
        QString::number(mealRate, 'f', 2));
}
void MainWindow::loadMemberBills()
{
    ui->memberBillTable->setRowCount(0);

    // -----------------------------
    // TOTAL EXPENSES
    // -----------------------------
    QSqlQuery expenseQuery;

    expenseQuery.exec(
        "SELECT COALESCE(SUM(amount), 0) "
        "FROM expenses"
        );

    double totalExpenses = 0;

    if(expenseQuery.next())
    {
        totalExpenses =
            expenseQuery.value(0).toDouble();
    }

    // -----------------------------
    // TOTAL MEALS
    // -----------------------------
    QSqlQuery mealQuery;

    mealQuery.exec(
        "SELECT COALESCE(SUM(meal_count), 0) "
        "FROM meals"
        );

    double totalMeals = 0;

    if(mealQuery.next())
    {
        totalMeals =
            mealQuery.value(0).toDouble();
    }

    // -----------------------------
    // MEAL RATE
    // -----------------------------
    double mealRate = 0;

    if(totalMeals > 0)
    {
        mealRate = totalExpenses / totalMeals;
    }

    // -----------------------------
    // LOAD MEMBERS
    // -----------------------------
    QSqlQuery memberQuery;

    memberQuery.exec(
        "SELECT id, name "
        "FROM members "
        "ORDER BY name"
        );

    int row = 0;

    while(memberQuery.next())
    {
        int memberId =
            memberQuery.value(0).toInt();

        QString memberName =
            memberQuery.value(1).toString();

        // -----------------------------
        // MEMBER MEALS
        // -----------------------------
        QSqlQuery mealCountQuery;

        mealCountQuery.prepare(
            "SELECT COALESCE(SUM(meal_count), 0) "
            "FROM meals "
            "WHERE member_id = :member_id"
            );

        mealCountQuery.bindValue(
            ":member_id",
            memberId
            );

        mealCountQuery.exec();

        int meals = 0;

        if(mealCountQuery.next())
        {
            meals =
                mealCountQuery.value(0).toInt();
        }

        // -----------------------------
        // MEMBER PAYMENTS
        // -----------------------------
        QSqlQuery paymentQuery;

        paymentQuery.prepare(
            "SELECT COALESCE(SUM(amount), 0) "
            "FROM payments "
            "WHERE member_id = :member_id"
            );

        paymentQuery.bindValue(
            ":member_id",
            memberId
            );

        paymentQuery.exec();

        double paid = 0;

        if(paymentQuery.next())
        {
            paid =
                paymentQuery.value(0).toDouble();
        }

        // -----------------------------
        // LAST PAYMENT DATE
        // -----------------------------
        QSqlQuery dateQuery;

        dateQuery.prepare(
            "SELECT payment_date "
            "FROM payments "
            "WHERE member_id = :member_id "
            "ORDER BY id DESC "
            "LIMIT 1"
            );

        dateQuery.bindValue(
            ":member_id",
            memberId
            );

        dateQuery.exec();

        QString paymentDate = "-";

        if(dateQuery.next())
        {
            paymentDate =
                dateQuery.value(0).toString();
        }

        // -----------------------------
        // BILL CALCULATION
        // -----------------------------
        double totalBill =
            meals * mealRate;

        double balance =
            paid - totalBill;

        // -----------------------------
        // ADD ROW
        // -----------------------------
        ui->memberBillTable->insertRow(row);

        QTableWidgetItem *item1 =
            new QTableWidgetItem(
                QString::number(row + 1));

        QTableWidgetItem *item2 =
            new QTableWidgetItem(memberName);

        QTableWidgetItem *item3 =
            new QTableWidgetItem(
                QString::number(meals));

        QTableWidgetItem *item4 =
            new QTableWidgetItem(
                QString::number(
                    totalBill,
                    'f',
                    2));

        QTableWidgetItem *item5 =
            new QTableWidgetItem(
                QString::number(
                    paid,
                    'f',
                    2));

        QTableWidgetItem *item6 =
            new QTableWidgetItem(
                QString::number(
                    balance,
                    'f',
                    2));

        QTableWidgetItem *item7 =
            new QTableWidgetItem(
                paymentDate);

        // -----------------------------
        // ALIGNMENT
        // -----------------------------
        item1->setTextAlignment(Qt::AlignCenter);
        item2->setTextAlignment(Qt::AlignCenter);
        item3->setTextAlignment(Qt::AlignCenter);
        item4->setTextAlignment(Qt::AlignCenter);
        item5->setTextAlignment(Qt::AlignCenter);
        item6->setTextAlignment(Qt::AlignCenter);
        item7->setTextAlignment(Qt::AlignCenter);

        // -----------------------------
        // BALANCE COLOR
        // -----------------------------
        if(balance > 0)
        {
            item6->setForeground(Qt::darkGreen);
        }
        else if(balance < 0)
        {
            item6->setForeground(Qt::red);
        }

        // -----------------------------
        // INSERT INTO TABLE
        // -----------------------------
        ui->memberBillTable->setItem(
            row, 0, item1);

        ui->memberBillTable->setItem(
            row, 1, item2);

        ui->memberBillTable->setItem(
            row, 2, item3);

        ui->memberBillTable->setItem(
            row, 3, item4);

        ui->memberBillTable->setItem(
            row, 4, item5);

        ui->memberBillTable->setItem(
            row, 5, item6);

        ui->memberBillTable->setItem(
            row, 6, item7);

        row++;
    }
}
void MainWindow::on_deleteMealBtn_clicked()
{
    int row =
        ui->mealTable->currentRow();

    if(row < 0)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Select a meal row!");
        return;
    }

    int mealId =
        ui->mealTable
            ->item(row, 0)
            ->data(Qt::UserRole)
            .toInt();

    QSqlQuery query;

    query.prepare(
        "DELETE FROM meals "
        "WHERE id = :id");

    query.bindValue(":id", mealId);

    if(query.exec())
    {
        loadMeals();
        loadRecentMeals();
        loadMemberBills();
        updateDashboardStats();
        updateBillingStats();

        QMessageBox::information(this,
                                 "Success",
                                 "Meal deleted!");
    }
    else
    {
        QMessageBox::warning(this,
                             "Error",
                             "Delete failed!");
    }
}
void MainWindow::on_addExpenseBtn_clicked()
{
    QString type =
        ui->expenseTypeInput->text();

    int amount =
        ui->expenseAmountInput->text().toInt();

    QString date =
        ui->expenseDateInput->date()
            .toString("dd-MM-yyyy");
    if(type.isEmpty() || amount <= 0)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Invalid expense!");
        return;
    }
    QSqlQuery query;

    if(currentExpenseId==-1)
    {
        query.prepare(
            "INSERT INTO expenses(type,amount,expense_date)"
            "VALUES(:type,:amount,:date)");
    }
    else
    {
        query.prepare(
            "UPDATE expenses "
            "SET type=:type,"
            "amount=:amount,"
            "expense_date=:date "
            "WHERE id=:id");

        query.bindValue(":id",currentExpenseId);
    }

    query.bindValue(":type", type);
    query.bindValue(":amount", amount);
    query.bindValue(":date", date);

    if(query.exec())
    {
        currentExpenseId=-1;

        ui->addExpenseBtn->setText("Add Expense");
        loadExpenses();
        loadExpenseChart();
        loadRecentExpenses();
        updateBillingStats();
        loadMemberBills();
        updateDashboardStats();

        QMessageBox::information(this,
                                 "Success",
                                 "Expense Added!");

        ui->expenseTypeInput->clear();
        ui->expenseAmountInput->clear();
    }
    else
    {
        QMessageBox::warning(this,
                             "Error",
                             "Failed to add expense!");
    }
    QSqlQuery activity;

    activity.prepare(
        "INSERT INTO activities "
        "(activity, activity_time) "
        "VALUES(:activity,:time)");

    activity.bindValue(
        ":activity",
        "Expense added: " + type);

    activity.bindValue(
        ":time",
        QDateTime::currentDateTime()
            .toString("dd-MM hh:mm"));

    activity.exec();
    loadRecentActivities();
}

void MainWindow::on_deleteExpenseBtn_clicked()
{
    int row =
        ui->expenseTable->currentRow();

    if(row < 0)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Select an expense row!");
        return;
    }

    int expenseId =
        ui->expenseTable
            ->item(row, 0)
            ->data(Qt::UserRole)
            .toInt();

    QSqlQuery query;

    query.prepare(
        "DELETE FROM expenses "
        "WHERE id = :id");

    query.bindValue(":id", expenseId);

    if(query.exec())
    {
        loadExpenses();
        loadExpenseChart();
        loadRecentExpenses();

        updateDashboardStats();
        updateBillingStats();
        loadMemberBills();

        QMessageBox::information(this,
                                 "Success",
                                 "Expense deleted!");
    }
    else
    {
        QMessageBox::warning(this,
                             "Error",
                             "Delete failed!");
    }
}
void MainWindow::loadPaymentMembers()
{
    ui->paymentMemberCombo->clear();

    QSqlQuery query;

    query.exec(
        "SELECT id, name "
        "FROM members "
        "ORDER BY name"
        );

    while(query.next())
    {
        int memberId = query.value(0).toInt();
        QString memberName = query.value(1).toString();

        ui->paymentMemberCombo->addItem(
            memberName,
            memberId
            );
    }
}
void MainWindow::on_updatePaymentBtn_clicked()
{
    QString memberName =
        ui->paymentMemberCombo->currentText();

    int memberId =
        ui->paymentMemberCombo->currentData().toInt();

    double amount =
        ui->paymentAmountInput->text().toDouble();

    QString paymentDate =
        ui->paymentDateInput
            ->date()
            .toString("dd-MM-yyyy");

    if(memberName.isEmpty() || memberId <= 0 || amount <= 0)
    {
        QMessageBox::warning(
            this,
            "Error",
            "Invalid payment data!"
            );
        return;
    }

    QSqlQuery query;

    query.prepare(
        "INSERT INTO payments "
        "(member_id, amount, payment_date) "
        "VALUES (:member_id, :amount, :date)"
        );

    query.bindValue(":member_id", memberId);
    query.bindValue(":amount", amount);
    query.bindValue(":date", paymentDate);

    if(query.exec())
    {
        QMessageBox::information(
            this,
            "Success",
            "Payment Added!"
            );

        ui->paymentAmountInput->clear();

        ui->paymentDateInput->setDate(
            QDate::currentDate()
            );

        loadMemberBills();
        updateBillingStats();
        updateDashboardStats();

        // Activity
        QSqlQuery activity;

        activity.prepare(
            "INSERT INTO activities "
            "(activity, activity_time) "
            "VALUES (:activity, :time)"
            );

        activity.bindValue(
            ":activity",
            memberName +
                " paid Tk " +
                QString::number(amount, 'f', 2)
            );

        activity.bindValue(
            ":time",
            QDateTime::currentDateTime()
                .toString("dd-MM hh:mm")
            );

        activity.exec();

        loadRecentActivities();
    }
    else
    {
        QMessageBox::warning(
            this,
            "Error",
            query.lastError().text()
            );
    }
}
void MainWindow::loadRecentActivities()
{
    ui->activityTable->setRowCount(0);

    QSqlQuery query;

    query.exec(
        "SELECT activity, activity_time "
        "FROM activities "
        "ORDER BY id DESC "
        "LIMIT 10");

    int row = 0;

    while(query.next())
    {
        ui->activityTable->insertRow(row);

        QString activity =
            query.value(0).toString();

        QTableWidgetItem *item =
            new QTableWidgetItem(activity);

        if(activity.contains("paid"))
            item->setForeground(Qt::green);

        else if(activity.contains("Expense"))
            item->setForeground(Qt::yellow);

        else if(activity.contains("meal"))
            item->setForeground(Qt::cyan);

        ui->activityTable->setItem(
            row,
            0,
            item);

        QTableWidgetItem *timeItem =
            new QTableWidgetItem(
                query.value(1).toString());

        timeItem->setTextAlignment(
            Qt::AlignCenter);

        ui->activityTable->setItem(
            row,
            1,
            timeItem);
        row++;
    }
}
void MainWindow::loadExpenseChart()
{
    QPieSeries *series = new QPieSeries();

    QSqlQuery query;

    query.exec(
        "SELECT type, SUM(amount) "
        "FROM expenses "
        "GROUP BY type");

    while(query.next())
    {
        QString type =
            query.value(0).toString();

        double amount =
            query.value(1).toDouble();

        series->append(type, amount);
    }

    series->setPieSize(0.9);

    QChart *chart = new QChart();

    chart->addSeries(series);

    chart->setTitle("Expense Breakdown");

    chart->setBackgroundVisible(false);

    chart->setTitleBrush(
        QBrush(Qt::white));

    chart->legend()->setLabelColor(
        Qt::white);

    chart->legend()->setAlignment(
        Qt::AlignRight);

    chart->setMargins(
        QMargins(0,0,0,0));

    chart->setAnimationOptions(
        QChart::SeriesAnimations);

    if(!chartView)
    {
        chartView = new QChartView(chart);

        chartView->setRenderHint(
            QPainter::Antialiasing);

        chartView->setStyleSheet(
            "background: transparent;");

        QVBoxLayout *layout =
            new QVBoxLayout(ui->chartWidget);

        layout->setContentsMargins(
            0,0,0,0);

        layout->addWidget(chartView);
    }
    else
    {
        chartView->setChart(chart);
    }
}