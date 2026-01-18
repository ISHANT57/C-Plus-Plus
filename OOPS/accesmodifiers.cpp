#include <iostream>
using namespace std;

class Parent {
    // 🔴 DEFAULT → private
    int defaultVar;

private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    Parent() {
        defaultVar = 1;
        privateVar = 2;
        protectedVar = 3;
        publicVar = 4;
    }

    void showInsideParent() {
        cout << "Inside Parent class\n";
        cout << defaultVar << " " << privateVar << " "
             << protectedVar << " " << publicVar << endl;
    }
};

class Child : public Parent {
public:
    void showInsideChild() {
        cout << "Inside Child class\n";
        // cout << defaultVar;  ❌
        // cout << privateVar;  ❌
        cout << protectedVar << " " << publicVar << endl; // ✅
    }
};

int main() {
    Parent p;
    Child c;

    cout << "Inside main\n";
    // cout << p.defaultVar;   ❌
    // cout << p.privateVar;   ❌
    //cout << p.protectedVar;
    cout << p.publicVar << endl; // ✅

    p.showInsideParent();
    c.showInsideChild();
}
