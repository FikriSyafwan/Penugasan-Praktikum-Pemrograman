#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    vector<int> DeretFib;

    cout << "Masukkan angka: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i <= 2) {
        DeretFib.push_back((1));
        }
        else {
            DeretFib.push_back(DeretFib[i-2] + DeretFib[i-3]);
        }
    }

    cout << "Deret Fibonacci: ";
    for (int k = 0; k < n; k++) {
        if (k != n - 1) {
        cout << DeretFib[k] << " + ";
        }
        else {
             cout << "((" << DeretFib[k] << "))" << " + ...";
        }
    }

    cout << endl;

    cout << "Angka ke-" << n << " dari deret angka fibonacci adalah "
    << fibonacci(n) << endl;

    return 0;
}