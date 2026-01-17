#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string major;
    double gpa;
Student(string n, int a, string m, double g)
{
    name = n;
    age = a;
    major = m;
    gpa = g;
}

// Student(string name, int age, string major, double gpa)
// {
//     this->name = name;
//     this->age = age;
//     this->major = major;
//     this->gpa = gpa;
// }


// Student(string n, int a, string m, double g)
// {
//     name = n;
//     age = a;
//     major = m;
//     gpa = g;
// }

  

};

int main() {
    Student student1("Alice", 20, "Computer Science", 3.8);
    cout << "Student Name: " << student1.name << endl;
    cout << "Student Age: " << student1.age << endl;
    cout << "Student Major: " << student1.major << endl;
    cout << "Student GPA: " << student1.gpa << endl;
    return 0;
}