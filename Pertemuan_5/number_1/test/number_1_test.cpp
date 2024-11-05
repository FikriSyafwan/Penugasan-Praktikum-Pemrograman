#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string exp_output1, exp_output2, exp_output3;        //output 
    exp_output1 = "Fizz";
    exp_output2 = "Buzz";
    exp_output3 = "FizzBuzz";


    vector<string> result;

    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz"); 
        } else if (i % 3 == 0) {
            result.push_back("Fizz");  
        } else if (i % 5 == 0) {
            result.push_back("Buzz"); 
        } else {
            result.push_back(to_string(i));  
        }
    }
    
    for (const auto& entry : result) {
        cout << entry << endl;
    }

    if (result[2]== exp_output1 && result[4] == exp_output2 
    && result[14] == exp_output3 ) {
        cout << "[Test succeed!! :>]" << endl;
    }
    else {
        cout << "[Test failed?! :<]" << endl;
    }
   
    return 0;
}


