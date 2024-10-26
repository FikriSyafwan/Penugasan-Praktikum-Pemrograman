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
    
    return 0;
}
