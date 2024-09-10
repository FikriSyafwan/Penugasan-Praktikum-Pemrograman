#include <iostream>
#include <iomanip>

using namespace std;

void generatePayslip(string name, double baseSalary, double percentage, double installment, double insurance) {
    // Calculate Gross Salary
    double grossSalary = baseSalary * (percentage / 100.0);

    // Calculate Tax
    double tax = grossSalary * 0.20;

    // Calculate Net Salary
    double netSalary = grossSalary - tax - installment - insurance;

    // Output the payslip
    cout << fixed << setprecision(2);
    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Gross Salary: Rp" << grossSalary << endl;
    cout << "Tax (20%): Rp" << tax << endl;
    cout << "Installment: Rp" << installment << endl;
    cout << "Insurance: Rp" << insurance << endl;
    cout << "Net Salary: Rp" << netSalary << endl;
}

int main() {
    string name = "John Doe";
    double baseSalary = 15000000.00;  // Base salary
    double percentage = 100;  // 100% of the base salary
    double installment = 200000.00;
    double insurance = 150000.00;

    generatePayslip(name, baseSalary, percentage, installment, insurance);

    return 0;
}
