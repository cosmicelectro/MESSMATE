#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginBtn_clicked();
    void on_logoutBtn_clicked();

    void on_addMealBtn_clicked();

    void on_addMemberBtn_clicked();
    void loadMembers();

    void on_btnDashboard_clicked();

    void on_btnMeals_clicked();

    void on_btnMeals_2_clicked();

    void on_btnBilling_clicked();

    void on_btnLogout_clicked();
    void updateDashboardStats();

    void on_searchMemberInput_textChanged(const QString &arg1);

    void on_deleteMemberBtn_clicked();

    void on_searchMealInput_textChanged(const QString &arg1);
    void loadRecentMeals();
    void loadRecentExpenses();

    void on_deleteMealBtn_clicked();

    void on_addExpenseBtn_clicked();

    void on_deleteExpenseBtn_clicked();

    void on_updatePaymentBtn_clicked();

private:
    void loadMeals();
    void loadMemberNames();
    void loadExpenses();
    void updateBillingStats();
    void loadMemberBills();
    void loadPaymentMembers();
    void loadRecentActivities();
    void loadExpenseChart();
    QChartView *chartView = nullptr;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H