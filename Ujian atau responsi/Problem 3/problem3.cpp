#include <iostream>
using namespace std;

string cekGanjilgenap(int n) {
    if (n == 1) {
        return "bilangan ganjil";
    }
    else if (n % 2 == 0) {
        return "bilangan genap";
    }
    else if (n % 2 != 0) {
        return "bilangan ganjil";
    }
}

int main() {
    //Berikut nilai-nilai yang akan diperiksa
    //apakah termasuk bilangan genap atau ganjil
    //sebagai penguji angka1, angka2, dan angka3 akan diisi
    //berturut-turut 27, 1998, dan 1001
    int angka1, angka2, angka3;
    angka1 = 27;
    angka2 = 1998;
    angka3 = 1001;

    //Proses penyeleksian dengan memanggil fungsi 
    //yang telah dibuat
    cout << "Hasil dari pengujian: " << endl;
    cout << angka1 << " merupakan " << cekGanjilgenap(angka1) << endl; 
    cout << angka2 << " merupakan " << cekGanjilgenap(angka2) << endl;
    cout << angka3 << " merupakan " << cekGanjilgenap(angka3) << endl;
    
    if (cekGanjilgenap(angka1) == "bilangan ganjil" &&
        cekGanjilgenap(angka2) == "bilangan genap" &&
        cekGanjilgenap(angka3) == "bilangan ganjil" 
    ) {
        cout << "Test Succesful!" << endl;
    }
    else {
        cout << "Test Unsuccesful!" << endl;
    }

    return 0;
}