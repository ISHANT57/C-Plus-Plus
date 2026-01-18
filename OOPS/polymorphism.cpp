#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle starting\n";
    }
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car starting with key\n";
    }
};

class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike starting with self\n";
    }
};

int main() {
    Vehicle* v;

    Car c;
    Bike b;

    v = &c;
    v->start();

    v = &b;
    v->start();
}
// Output:
// Car starting with key
// Bike starting with self