#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    string model;
    int year;
    double mileage;

};

void changeCar(Car car){
    car.name = "Ferrari";
    car.model = "488 Spider";
    car.year = 2022;
    car.mileage = 15000.75;
    cout << "Inside changeCar function:" << endl;
    cout << "Car Name: " << car.name << endl;
    cout << "Car Model: " << car.model << endl;
    cout << "Car Year: " << car.year << endl;
    cout << "Car Mileage: " << car.mileage << endl;
}

int main() {
    Car myCar;
    myCar.name = "Lamborghini";
    myCar.model = "Huracan EVO";      
    myCar.year = 2021;
    myCar.mileage = 20000.50;
    cout << "Before changeCar function:" << endl;
    cout << "Car Name: " << myCar.name << endl;
    cout << "Car Model: " << myCar.model << endl;   
    cout << "Car Year: " << myCar.year << endl;
    cout << "Car Mileage: " << myCar.mileage << endl;
    changeCar(myCar);
    cout << "After changeCar function:" << endl;
    cout << "Car Name: " << myCar.name << endl;

    cout << "Car Model: " << myCar.model << endl;   
    cout << "Car Year: " << myCar.year << endl;
    cout << "Car Mileage: " << myCar.mileage << endl;
    return 0;

}