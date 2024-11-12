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
    int j = 0;

    int n = 5;
    double num[n] = {1, 2, 3, 4, 5};

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


    if (revAverage(num, n) == 3) {
        cout << "[Test succeed!! :>]" << endl;
    }
    else {
        cout << "[Test failed?! :<]" << endl;
    }

    return 0;
}