#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

// Function for payslip calculation
void generatePayslip(string name, double baseSalary, double percentage, double installment, double insurance) {
    double grossSalary = baseSalary * (percentage / 100.0);
    double tax = grossSalary * 0.20;
    double netSalary = grossSalary - tax - installment - insurance;

    cout << fixed << setprecision(2);
    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Gross Salary: Rp" << grossSalary << endl;
    cout << "Tax (20%): Rp" << tax << endl;
    cout << "Installment: Rp" << installment << endl;
    cout << "Insurance: Rp" << insurance << endl;
    cout << "Net Salary: Rp" << netSalary << endl << endl;
}

// Function for quadratic equation solver
void solveQuadraticEquation(double a, double b, double c) {
    double discriminant, root1, root2, realPart, imaginaryPart;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and the same." << endl;
        cout << "Root = " << root1 << endl;
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    cout << endl;
}

int main() {
    // Test Cases for Payslip Calculation
    cout << "Testing Payslip Calculation:" << endl;
    generatePayslip("Alice Brown", 5000000, 100, 50000, 250000);

    // Test Cases for Quadratic Equation Solver
    cout << "Testing Quadratic Equation Solver:" << endl;
    solveQuadraticEquation(1, -3, 2);   // Discriminant > 0, two real roots
    solveQuadraticEquation(1, 2, 1);    // Discriminant = 0, one real root
    solveQuadraticEquation(1, 2, 3);    // Discriminant < 0, complex roots

    return 0;
}
