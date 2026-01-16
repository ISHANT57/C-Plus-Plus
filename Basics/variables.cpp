#include <iostream>
using namespace std;
int main()
{
    int x;
    x = 10;
    cout << "The value of x is: " << x << endl;
    cout << "The value of x is: " << x+2 << endl;
    x=x+1;
    cout << "The value of x is: " << x << endl;
    int y;
    y=11;
    cout << "The value of y is: " << y << endl;
    cout << "The value of y is: " << y+x << endl;
    y=50;
    cout << "The value of y is: " << y << endl;
    cout << "The value of y is: " << y+x << endl;
    return 0;

}