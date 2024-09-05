#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

// Function for payslip calculation
void generatePayslip(std::string name, double baseSalary, double percentage, double installment, double insurance) {
    double grossSalary = baseSalary * (percentage / 100.0);
    double tax = grossSalary * 0.20;
    double netSalary = grossSalary - tax - installment - insurance;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Payslip for Employee" << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Gross Salary: Rp" << grossSalary << std::endl;
    std::cout << "Tax (20%): Rp" << tax << std::endl;
    std::cout << "Installment: Rp" << installment << std::endl;
    std::cout << "Insurance: Rp" << insurance << std::endl;
    std::cout << "Net Salary: Rp" << netSalary << std::endl << std::endl;
}

// Function for quadratic equation solver
void solveQuadraticEquation(double a, double b, double c) {
    double discriminant, root1, root2, realPart, imaginaryPart;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and different." << std::endl;
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        std::cout << "Roots are real and the same." << std::endl;
        std::cout << "Root = " << root1 << std::endl;
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = std::sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are complex and different." << std::endl;
        std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    // Test Cases for Payslip Calculation
    std::cout << "Testing Payslip Calculation:" << std::endl;
    generatePayslip("John Doe", 10000000, 150, 200000, 150000);
    generatePayslip("Jane Smith", 8000000, 120, 300000, 100000);
    generatePayslip("Alice Brown", 5000000, 100, 50000, 250000);

    // Test Cases for Quadratic Equation Solver
    std::cout << "Testing Quadratic Equation Solver:" << std::endl;
    solveQuadraticEquation(1, -3, 2);   // Discriminant > 0, two real roots
    solveQuadraticEquation(1, 2, 1);    // Discriminant = 0, one real root
    solveQuadraticEquation(1, 2, 3);    // Discriminant < 0, complex roots

    return 0;
}
