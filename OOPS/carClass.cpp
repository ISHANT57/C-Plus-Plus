#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string name;
    string model;
    int year;
    double mileage;

public:
    // Constructor
    Car(string name, string model, int year, double mileage)
        : name(name), model(model), year(year), mileage(mileage)
    {
    }

    // Getter functions
    string getName() const {
        return name;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    double getMileage() const {
        return mileage;
    }

    // Display function
    void display() const {
        cout << "Car Name: " << name << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
        cout << "Car Mileage: " << mileage << endl;
    }
};

int main() {
    Car myCar("Bugatti", "Chiron", 2026, 30000.56);
    myCar.display();
    return 0;
}
