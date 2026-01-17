#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

public:
    // 1️⃣ Default Constructor
    Student() {
        roll = 0;
        marks = 0.0;
        cout << "Default Constructor Called" << endl;
    }

    // Student(){

    // }

    // 2️⃣ Parameterized Constructor
    Student(int r, float m) {
        roll = r;
        marks = m;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Display function
    void display() {
        cout << "Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;              // Default constructor
    s1.display();

    Student s2(101, 92.5);   // Parameterized constructor
    s2.display();

    return 0;
}
