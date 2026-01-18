#include <iostream>
using namespace std;

class Fraction {
    int num;
    int den;

public:
    // Default constructor
    Fraction() {
        num = 0;
        den = 1;
    }

    // Parameterized constructor
    Fraction(int n, int d) {
        num = n;
        den = d;
    }

    void display() const {
        cout << num << " / " << den << endl;
    }

    // Operator overloading
    Fraction operator+(Fraction f2) { //necessary to write operator keyword
        Fraction f3; // Resultant fraction
        f3.num = (num * f2.den) + (f2.num * den);
        f3.den = den * f2.den;
        return f3;
    }

    Fraction operator-(Fraction f2) {
        Fraction f3;
        f3.num = (num * f2.den) - (f2.num * den);
        f3.den = den * f2.den;
        return f3;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    cout << "Fraction 1: ";
    f1.display();

    cout << "Fraction 2: ";
    f2.display();

    Fraction f3 = f1 + f2;
    cout << "Sum of Fractions: ";
    f3.display();

    Fraction f4 = f1 - f2;
    cout << "Difference of Fractions: ";
    f4.display();


    return 0;
}
