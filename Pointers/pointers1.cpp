#include <iostream>
using namespace std;

int main() {
    int var = 42;
    int* ptr = &var; // Pointer holding the address of var

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value of ptr (address of var): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    // Modifying the value of var using the pointer
    *ptr = 100;
    cout << "New value of var after modification through ptr: " << var << endl;

    return 0;
}

//pass by reference