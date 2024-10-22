#include <iostream>
using namespace std;

int main () {

    int exp_output = 50,
    input = 5;

    cout << "insert number: "
    << input << " (for testing)" << endl;
    

    for (int i = 1; i <= 10; i++)
    {
        cout << input << " x " << i << " = " 
        << input * i << endl;
        
    }

    if (exp_output == input * 10) {
        cout << "[Test succeed!! :>]" << endl;
    }
    else {
        cout << "[Test failed?! :<]" << endl;
    }
    return 0;
    
}