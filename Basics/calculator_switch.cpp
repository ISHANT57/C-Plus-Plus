#include <iostream>
using namespace std;

int main(){
    int num1, num2, choice;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the choice: ";
    cin >> choice;
    switch(choice){
        case 1: cout << num1 + num2 << endl; break;
        case 2: cout << num1 - num2 << endl; break;
        case 3: cout << num1 * num2 << endl; break;
        case 4: cout << num1 / num2 << endl; break;
        default: cout << "Invalid choice" << endl; break;
    }
    return 0;
}