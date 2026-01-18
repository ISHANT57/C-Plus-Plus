#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string name;
    int balance;

public:
    Account(string n, int b) {
        name = n;
        balance = b;
    }

    // Setter
    void setBalance(int b) {
        if (b >= 0)
            balance = b;
    }

    // Getter
    int getBalance() const {
        return balance;
    }

    string getName() const {
        return name;
    }
};

int main() {
    Account acc("Ishant", 5000);

    acc.setBalance(7000);
    cout << "Name: " << acc.getName() << endl;
    cout << "Balance: " << acc.getBalance() << endl;
}
// Output:
// Name: Ishant
// Balance: 7000