#include <iostream>
using namespace std;
class Complex {
    int real, imag;
    public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    // Overloading the + operator
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }
};
int main() {
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 + c2; // Using overloaded + operator
    c3.display(); // Output: 4 + 6i
    }