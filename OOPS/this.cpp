#include <iostream>
using namespace std;

class Student {
    int age;
public:
    void setAge(int age) {
        this->age = age;   // this->age = object variable
    }

    void show() {
        cout << "Age: " << age;
    }
};

int main() {
    Student s1;
    s1.setAge(20);
    s1.show();
}
 