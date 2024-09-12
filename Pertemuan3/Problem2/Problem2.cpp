#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2, bilangan3;
    
    //input bilangan, misalkan nilainya 
    //adalah 1, 2, dan 3

    bilangan1 = 1;
    bilangan2 = 2;
    bilangan3 = 3;

    if (bilangan1 > bilangan2 && bilangan1 > bilangan3) {

        //apabila bilangan 1 lebih besar dari bilangan 2
        //dan lebih besar dari bilangan 3
        //maka bilangan 1 merupakan bilangan terbesar

        cout << "bilangan terbesar adalah = " << bilangan1 << endl;
    }

    else if (bilangan2 > bilangan1 && bilangan2 > bilangan3) {

        //bilangan 2 akan menjadi bilangan terbesar apabila
        //lebih besar dari bilangan 1 dan bilangan 3

        cout << "bilangan terbesar adalah = " << bilangan2 << endl;
    }

    else {
        //Namun, apabila bilangan 1 dan bilangan 2 tidak 
        //memenuhi maka bilangan terbesar adalah
        //bilangan 3

        cout << "bilangan terbesar adalah = " << bilangan3 << endl;
    }

    return 0;

}