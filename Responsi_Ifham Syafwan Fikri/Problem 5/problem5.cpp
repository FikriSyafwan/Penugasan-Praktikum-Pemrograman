#include <iostream>
using namespace std;

string palindrome (string n) {
    int j = n.size();
    if (j <= 1) {
        return " merupakan palindrome";
    }
    if (n[0] != n[j-1]) {
        return " bukan merupakan palindrome";
    }
    return palindrome(n.substr(1, j-2));

}

int main () {
    string
    kalimat1, kalimat2, kalimat3;

    //sebagai test, kalimat-kalimat yang diberikan akan
    //diperiksa apakah sama hasilnya apabila dibalik 
    //sebagai tes, kalimat1, kalimat2, dan kalimat akan diberi nilai 
    //berturut-turut Ifham Syafwan Fikri, sama sama, dan masam.
    kalimat1 = "Ifham Syafwan Fikri";
    kalimat2 = "sama sama";
    kalimat3 = "masam";

    cout << "Hasil dari pengujian: " << endl;
    cout << kalimat1 << palindrome(kalimat1) << endl;
    cout << kalimat2 << palindrome(kalimat2) << endl;
    cout << kalimat3 << palindrome(kalimat3) << endl;


 if(palindrome(kalimat1) == " bukan merupakan palindrome" &&
    palindrome(kalimat2) == " bukan merupakan palindrome" &&
    palindrome(kalimat3) == " merupakan palindrome" 
    ) {
        cout << "Test Succesful!" << endl;
    }
    else {
        cout << "Test Unsuccesful!" << endl;
    }

    return 0;
}