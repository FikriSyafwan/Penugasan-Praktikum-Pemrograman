#include <iostream>
#include <iomanip>

using namespace std;

void generatePayslip(string name, double baseSalary, double percentage, double installment, double insurance) {
    // Calculate Gross Salary
    double grossSalary = baseSalary * (percentage / 100.0);

    // Calculate Tax
    double tax = grossSalary * 0.90;

    // Calculate Net Salary
    double netSalary = grossSalary - tax - installment - insurance;

    // Output the payslip
    cout << fixed << setprecision(2);
    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Gross Salary: Rp" << grossSalary << endl;
    cout << "Tax (90%): Rp" << tax << endl;
    cout << "Installment: Rp" << installment << endl;
    cout << "Insurance: Rp" << insurance << endl;
    cout << "Net Salary: Rp" << netSalary << endl;
}

int main() {
    string name = "Mas Agus";
    double baseSalary = 250000000.00;  // Base salary
    double percentage = 150;  // 150% of the base salary
    double installment = 2000000.00;
    double insurance = 1500000.00;

    generatePayslip(name, baseSalary, percentage, installment, insurance);

    return 0;
}