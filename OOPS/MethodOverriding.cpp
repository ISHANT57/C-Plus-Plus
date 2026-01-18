#include <iostream>
using namespace std;

// Base class
class Overriding {
public:
    // virtual function
    virtual void display() { //if virtual removed base class method will be called
        cout << "Base class method" << endl;
    }
};

// Derived class
class Derived : public Overriding {
public:
    // overriding
    void display() {
        cout << "Derived class method" << endl;
    }
};

int main() {
    Overriding* obj = new Derived(); // base pointer → derived object
    obj->display();                 // calls Derived's method
    return 0;
}
