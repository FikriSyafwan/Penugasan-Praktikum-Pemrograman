//==============================================
//=        Projek Praktikum Pemrograman        =        
//=               Pertemuan 6                  =
//=           Ifham Syafwan Fikri              =
//==============================================

#include <iostream>
#include <cmath>
using namespace std;


struct idBarang {
    string kodeBarang;
    string namaBarang;
    float hargaBarang;
    float jumlahBarang;
};

int main () {
    int n;

    cout << "==================================" << endl;
    cout << "    Selamat Datang di Toko XXX    " << endl;
    cout << "==================================" << endl;

    cout << endl;

    cout << "Masukkan banyak barang = ";
    cin >> n;
    cout << endl;

    idBarang Barang[n];
    
    cout << "    Masukkan data barang!    " << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data barang " << i + 1 << endl;
        cout << "=============" << endl;
        
        cout << "Kode barang: ";
        cin >> Barang[i].kodeBarang;
        cout << "Nama barang: ";
        cin >> Barang[i].namaBarang;
        cout << "Harga barang: ";
        cin >> Barang[i].hargaBarang;
        cout << "Jumlah barang: ";
        cin >> Barang[i].jumlahBarang;
        cout << endl;

    }
    cout << endl;
    getchar();

    cout << "       -Data barang-       " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data barang " << i + 1 << endl;
        cout << "=============" << endl;

        cout << "Kode barang  : " << Barang[i].kodeBarang   << endl;
        cout << "Nama barang  : " << Barang[i].namaBarang   << endl;
        cout << "Harga barang : " << Barang[i].hargaBarang  << endl;
        cout << "Jumlah barang: " << Barang[i].jumlahBarang << endl;
        cout << endl;

    }
    cout << endl;
   

    cout << "-Jumlah dan harga rata-rata barang-" << endl;
    float p, q, r;
    for (int i = 0; i < n; i++) {
        p += Barang[i].jumlahBarang;
        q += Barang[i].hargaBarang * Barang[i].jumlahBarang;
        r = q / p;

    }

    cout << " <Jumlah barang> " << endl; 
    cout << "> " << p << " <" << endl;

    cout << endl;

    cout << " <Harga rata-rata barang> " << endl;
    cout << "> " << static_cast<int>(round(r)) << " <" << endl;

    

    return 0;
}