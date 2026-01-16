#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << "Initial value of a: " << a << endl;

    // Using post-increment
    cout << "Using post-increment (a++): " << a++ << endl;
    cout << "Value of a after post-increment: " << a << endl;

    // Using pre-increment
    cout << "Using pre-increment (++a): " << ++a << endl;
    cout << "Value of a after pre-increment: " << a << endl;

    // Using post-decrement
    cout << "Using post-decrement (a--): " << a-- << endl;
    cout << "Value of a after post-decrement: " << a << endl;

    // Using pre-decrement
    cout << "Using pre-decrement (--a): " << --a << endl;
    cout << "Value of a after pre-decrement: " << a << endl;

    return 0;
}