#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVector(const vector<int>& input) {
    vector<int> reversed;
    
    // Iterate through the input vector in reverse order
    for (int i = input.size() - 1; i >= 0; --i) {
        reversed.push_back(input[i]);
    }
    
    return reversed;
}

int main() {
    // Example input
    vector<int> input = {1, 2, 3, 4, 5};
    
    // Get the reversed vector
    vector<int> output = reverseVector(input);
    
    // Print the reversed vector
    cout << "Reversed vector: ";
    for (int i : output) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
