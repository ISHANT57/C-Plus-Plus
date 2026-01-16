#include <iostream>
using namespace std;

int main() {
    float cp, sp;

    // Taking input
    cout << "Enter Cost Price: ";
    cin >> cp;

    cout << "Enter Selling Price: ";
    cin >> sp;

    // Checking profit or loss
    if (sp > cp) {
        cout << "Profit occurred." << endl;
        cout << "Profit amount = " << sp - cp;
    }
    else if (cp > sp) {
        cout << "Loss occurred." << endl;
        cout << "Loss amount = " << cp - sp;
    }
    else {
        cout << "No Profit No Loss.";
    }

    return 0;
}
