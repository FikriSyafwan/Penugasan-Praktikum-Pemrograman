#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2, bilangan3;
    
    //input bilangan, misalkan nilainya 
    cout << "Masukkan bilangan 1: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan 2: ";
    cin >> bilangan2;
    cout << "Masukkan bilangan 3: ";
    cin >> bilangan3;

    
    if (bilangan1 > bilangan2 && bilangan1 > bilangan3) {
        cout << "bilangan terbesar adalah " << bilangan1 << endl;
    }

    else if (bilangan2 > bilangan1 && bilangan2 > bilangan3) {
        cout << "bilangan terbesar adalah " << bilangan2 << endl;
    }

    else {
        cout << "bilangan terbesar adalah " << bilangan3 << endl;
    }

    return 0;

}