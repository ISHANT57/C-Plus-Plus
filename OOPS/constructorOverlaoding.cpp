#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // 1️⃣ Default constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default constructor called\n";
    }

    // 2️⃣ Constructor with 1 parameter
    Student(int r) {
        roll = r;
        name = "Unknown";
        cout << "1-parameter constructor called\n";
    }

    // 3️⃣ Constructor with 2 parameters
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "2-parameter constructor called\n";
    }

    void display() {
        cout << roll << " " << name << endl;
    }
};

int main() {
    Student s1;                 // default
    Student s2(101);            // 1-parameter
    Student s3(102, "Ishant");  // 2-parameter

    s1.display();
    s2.display();
    s3.display();
}
