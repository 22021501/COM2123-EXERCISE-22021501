#include <iostream>
using namespace std;

int main() {
    double merchandiseCost, employeeSalary, yearlyRent, electricityCost;

    // Prompt user to enter expenses
    cout << "Enter total cost of merchandise: ";
    cin >> merchandiseCost;

    cout << "Enter yearly salary of employees (including your own salary): ";
    cin >> employeeSalary;

    cout << "Enter yearly rent: ";
    cin >> yearlyRent;

    cout << "Enter estimated yearly electricity cost: ";
    cin >> electricityCost;

    // Calculate total expenses
    double totalExpenses = merchandiseCost + employeeSalary + yearlyRent + electricityCost;

    // Calculate revenue needed for desired profit
    double revenueNeeded = totalExpenses / 0.9; // 10% profit -> 90% of revenue after expenses

    // Adjust revenue for sale discount
    revenueNeeded /= 0.85; // 15% sale discount

    // Calculate markup
    double markup = revenueNeeded - merchandiseCost;

    // Output markup needed
    cout << "Markup needed for desired profit: " << markup << endl;

    return 0;
}
