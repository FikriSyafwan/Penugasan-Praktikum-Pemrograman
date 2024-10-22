#include <iostream>
using namespace std;

int main () {
    int exp_output = 15,        //expected output
    input = 5;                  //input

    int total_sum = 0;

    cout << "input number: " << input << " (for testing)" << endl;

    for (int i = 1; i <= input; i++) 
    {
        total_sum += i;
    }

    cout << "total sum: " << total_sum << endl;


    if (exp_output == total_sum) {
        cout << "[Test succeed!! :>]" << endl;
    }
    else {
        cout << "[Test failed?! :<]" << endl;
    }

    return 0;
}