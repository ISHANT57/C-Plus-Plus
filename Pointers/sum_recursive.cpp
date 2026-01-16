#include <iostream>
using namespace std;

void printSum(int n, int sum) {
    // Base case
    if (n == 0) {
        cout << "Sum = " << sum << endl;
        return;
    }

    // Recursive call
    printSum(n - 1, sum + n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    printSum(n, 0);  // initial sum = 0
    return 0;
}
