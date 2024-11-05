#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double Diskriminan, akar1, akar2, baganReal, imajiner;
    double a, b, c;

    //memisalkan input bilangan adalah 1, 2, dam 3

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan nilai c: ";
    cin >> c;

    //Rumus Diskriminan
    Diskriminan = b * b - 4 * a * c;

   if (Diskriminan > 0)
   {

    //apabila diskriminan lebih dari nol
    //maka akar-akarnya berupa bilangan real dan
    //berbeda

    akar1 = (-b + sqrt(Diskriminan)) / (2 * a);
    akar2 = (-b - sqrt(Diskriminan)) / (2 * a);
    cout << "akar 1 " << akar1 << endl;
    cout << "akar 2 " << akar2 << endl;
    cout << "akar-akar yang dihasilkan adalah real dan berbeda" << endl;
   }

   else if (Diskriminan == 0)
   {

    //apabila diskriminan sama dengan nol
    //akarnya hanya satu dan berupa bilangan real

    akar1 = (-b + sqrt(Diskriminan)) / (2 * a);
    akar2 = (-b - sqrt(Diskriminan)) / (2 * a);
    cout << "akar 1 " << akar1 << endl;
    cout << "akar 2 " << akar2 << endl;
    cout << "akar-akar yang dihasilkan adalah real dan sama" << endl;
   }

   else {

    //apabila tidak ada opsi yang memenuhi
    //menunjukkan diskriminan lebih dari nol
    //maka akar-akarnya berupa bilangan imajiner
     
    baganReal = -b / (2 * a);
    imajiner = sqrt(-Diskriminan) / (2 * a);
    cout << baganReal << " + " << imajiner << "i" << endl;
    cout << baganReal << " - " << imajiner << "i" << endl;
    cout << "akar-akar yang dihasilkan adalah imajiner" << endl; 
   }

   return 0;


}