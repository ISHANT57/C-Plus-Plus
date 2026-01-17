#include <iostream>
using namespace std;

class Car {
public:
    string name;
    string model;
    int year;
    double mileage;
};

void changeCar(Car &car) {   // 🔥 pass by reference
    car.name = "Ferrari";
    car.model = "488 Spider";
    car.year = 2022;
    car.mileage = 15000.75;
}

int main() {
    Car myCar;
    myCar.name = "Lamborghini";
    myCar.model = "Huracan EVO";
    myCar.year = 2021;
    myCar.mileage = 20000.50;

    cout << "Before changeCar function:\n";
    cout << myCar.name << endl;
    cout << myCar.model << endl;
    cout << myCar.year << endl;
    cout << myCar.mileage << endl;


    changeCar(myCar);

    cout << "After changeCar function:\n";
    cout << myCar.name << endl;
    cout << myCar.model << endl;
    cout << myCar.year << endl;
    cout << myCar.mileage << endl;

    return 0;
}
