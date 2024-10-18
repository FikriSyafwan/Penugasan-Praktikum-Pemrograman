//==============================================
//=     Projek (test) Praktikum Pemrograman    =        
//=               Pertemuan 6                  =
//=           Ifham Syafwan Fikri              =
//==============================================

//Pencatatan barang pada toko swalayan
//input berupa kode barang, nama barang, harga barang, dan
//jumlah barang

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
    int exp_output1 = 7,        //expected output
        exp_output2 = 13000; 

    int n = 3;                  //input

    cout << "==================================" << endl;
    cout << "    Selamat Datang di Toko XXX    " << endl;
    cout << "==================================" << endl;

    cout << endl;

    cout << "Masukkan banyak barang = " << n << " (for testing)"<< endl;
    cout << endl;

    idBarang Barang[n];
    Barang[0].kodeBarang = "111";
    Barang[0].namaBarang = "esKrim";
    Barang[0].hargaBarang = 3000;
    Barang[0].jumlahBarang = 2;

    Barang[1].kodeBarang = "112";
    Barang[1].namaBarang = "kopiBubuk";
    Barang[1].hargaBarang = 35000;
    Barang[1].jumlahBarang = 1;

    Barang[2].kodeBarang = "113";
    Barang[2].namaBarang = "looseLeaf";
    Barang[2].hargaBarang = 12500;
    Barang[2].jumlahBarang = 4;
    


    cout << "    Masukkan data barang! (for testing)   " << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data barang " << i + 1 << endl;
        cout << "=============" << endl;
        
        cout << "Kode barang  : " << 
        Barang[i].kodeBarang   << endl;
        cout << "Nama barang  : " << 
        Barang[i].namaBarang   << endl;         //tanpa spasi
        cout << "Harga barang : " << 
        Barang[i].hargaBarang  << endl;         //tanpa titik
        cout << "Jumlah barang: " << 
        Barang[i].jumlahBarang << endl;         //maksimal 50 barang
        cout << endl;                           //untuk tes barang di-set
                                                //menjadi 3.
    }
    cout << endl;
    

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

    if (p == exp_output1 && q / p == exp_output2) {
        cout << "[Test succeed!! :>]" << endl;
    }
    else {
        cout << "[Test failed?! :<]" << endl;
    }
    

    return 0;
}