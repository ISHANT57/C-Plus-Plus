#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;
    float avg;

    Cricketer(string n, int r, float a) {
        name = n;
        runs = r;
        avg = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Average: " << avg << endl;
    }
};

int main() {

    Cricketer c1("Virat Kohli", 12040, 59.33);
    Cricketer c2("Rohit Sharma", 9205, 48.96);
    Cricketer* c3 = new Cricketer("Sachin Tendulkar", 18426, 44.83);
    Cricketer* c4 = new Cricketer("Rahul Dravid", 14000, 69.33);

    c1.display();
    cout << endl;
    c2.display();
    cout << endl;
    c3->display();
    cout << endl;
    c4->display();
    delete c3;
    delete c4;

    return 0;
}
