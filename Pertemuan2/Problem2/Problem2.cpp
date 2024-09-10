#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Input coefficients a, b, c
    a = 1;
    b = 2;
    c = 3;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Determine the nature of the roots based on the discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // One real root
        root1 = -b / (2 * a);
        cout << "Roots are real and the same." << endl;
        cout << "Root = " << root1 << endl;
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}

