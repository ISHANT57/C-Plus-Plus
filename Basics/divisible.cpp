#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking input
    cout << "Enter a positive integer: ";
    cin >> n;

    // Checking conditions
    if ((n % 5 == 0 || n % 3 == 0) && (n % 15 != 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
