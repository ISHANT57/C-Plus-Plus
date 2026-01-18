#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int m) {   // setter
        marks = m;
    }

    int getMarks() {         // getter
        return marks;
    }
};

int main() {
    Student s;
    s.setMarks(85);
    cout << "Marks: " << s.getMarks();
}
