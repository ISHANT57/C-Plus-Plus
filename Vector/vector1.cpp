#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create a vector of integers
    vector<int> numbers;

    // Add some elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Display the elements of the vector
    cout << "Vector elements: ";
    for (const int& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Display the size of the vector
    cout << "Size of vector: " << numbers.size() << endl;

    return 0;
}
 