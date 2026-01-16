#include <iostream>
using namespace std;

int main()
{
    int x=4,y=0;
    y= x++ + ++x + --x + x--;
    cout<<x<<" "<<y;
}