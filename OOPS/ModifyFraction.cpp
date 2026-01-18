#include <iostream>
using namespace std;

class Fraction {
private:
    int num;
    int den;

    // Helper function to find GCD
    int gcd(int a, int b) const {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    // Helper function to simplify fraction
    void simplify() {
        int g = gcd(abs(num), abs(den));
        num /= g;
        den /= g;

        // keep denominator positive
        if (den < 0) {
            num = -num;
            den = -den;
        }
    }

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
        simplify();
    }

    // Display function
    void display() const {
        cout << num << " / " << den << endl;
    }

    // Addition
    Fraction operator+(const Fraction& f) const {
        Fraction result;
        result.num = num * f.den + f.num * den;
        result.den = den * f.den;
        result.simplify();
        return result;
    }

    // Subtraction
    Fraction operator-(const Fraction& f) const {
        Fraction result;
        result.num = num * f.den - f.num * den;
        result.den = den * f.den;
        result.simplify();
        return result;
    }

    // Multiplication
    Fraction operator*(const Fraction& f) const {
        Fraction result;
        result.num = num * f.num;
        result.den = den * f.den;
        result.simplify();
        return result;
    }

    // Division
    Fraction operator/(const Fraction& f) const {
        Fraction result;
        result.num = num * f.den;
        result.den = den * f.num;
        result.simplify();
        return result;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    cout << "Fraction 1: ";
    f1.display();

    cout << "Fraction 2: ";
    f2.display();

    Fraction sum = f1 + f2;
    cout << "Sum: ";
    sum.display();

    Fraction diff = f1 - f2;
    cout << "Difference: ";
    diff.display();

    Fraction prod = f1 * f2;
    cout << "Product: ";
    prod.display();

    Fraction div = f1 / f2;
    cout << "Division: ";
    div.display();

    return 0;
}
