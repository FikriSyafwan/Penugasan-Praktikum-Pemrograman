#include <iostream>
using namespace std;

int main () {

    int n, 
    total_sum = 0;

    cout << "input number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        total_sum += i;
    }

    cout << "total sum: " << total_sum << endl;

    return 0;
}