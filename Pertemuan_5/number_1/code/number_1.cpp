#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {


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
   
    return 0;
}


