#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVector(const vector<int>& input) {
    vector<int> reversed;
    
    for (int i = input.size() - 1; i >= 0; --i) {
        reversed.push_back(input[i]);
    }
    
    return reversed;
}

int main() {
    vector<int> input = {7, 5, 3, 2, 9};
    
    vector<int> output = reverseVector(input);
    
    cout << "Reversed vector: ";
    for (int i : output) {
        cout << i << " ";
    }
    cout << endl;

    if (output[0] == 9 &&
        output[1] == 2 &&
        output[2] == 3 &&
        output[3] == 5 &&
        output[4] == 7) {
        cout << "[Test succeed!! :>]" << endl;
    }
    else {
        cout << "[Test failed?! :<]" << endl;
    }
    
    return 0;
}
