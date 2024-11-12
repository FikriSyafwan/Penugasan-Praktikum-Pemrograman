#include <iostream> 
using namespace std;

double average(double num[], int i, int n) {
    if (i == n - 1) {
        return num[i];
    }   
    
    else {
        return (num[i] + average(num, i+1, n));
    }
}

double revAverage(double num[], int n) {
    return average(num, 0, n) / n;
}

int main() {
    int n, j = 0;

    cout << "Masukkan berapa banyak angka: ";
    cin >> n;

    double num[n];

    for(int i = 0; i < n; i++) {
        cout << "Angka ke-" << i + 1 << " = ";
        cin >> num[i]; 
    }

    cout << "Maka rata-rata dari angka ";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
        cout << "dan " << num[i] << " adalah ";
        }
        else {
            cout << num[i] << ", ";
        }
    }

   for(int i = 0; i < n; i++) {
    if (num[i] == 0) {
        j += 1;
    }
   }
    n = n - j;
    cout << endl;
    cout << revAverage(num, n) << endl;

    return 0;
}