#include <iostream>
using namespace std;

class A {
public:
    int x;
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main() {
    D obj;
    obj.x = 50;      // ✅ only one copy of A
    cout << obj.x;
}
// Output: 50