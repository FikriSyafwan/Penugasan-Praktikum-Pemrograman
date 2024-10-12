#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> result;

    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");  // Multiple of both 3 and 5
        } else if (i % 3 == 0) {
            result.push_back("Fizz");  // Multiple of 3
        } else if (i % 5 == 0) {
            result.push_back("Buzz");  // Multiple of 5
        } else {
            result.push_back(to_string(i));  // Not a multiple of 3 or 5
        }
    }

    // Print the contents of the vector
    for (const auto& entry : result) {
        cout << entry << endl;
    }

    return 0;
}
