#include <iostream>
using namespace std;

// Parent class 1
class Father {
public:
    int money;

    Father() {
        money = 10000;
    }

    void showFather() {
        cout << "Father money: " << money << endl;
    }
};

// Parent class 2
class Mother {
public:
    int gold;

    Mother() {
        gold = 500;
    }

    void showMother() {
        cout << "Mother gold: " << gold << endl;
    }
};

// Child class (Multiple Inheritance)
class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "Child inherited money: " << money << endl;
        cout << "Child inherited gold: " << gold << endl;
    }
};

int main() {
    Child c;

    c.showFather();  // from Father
    c.showMother();  // from Mother
    c.showChild();   // from Child

    return 0;
}
