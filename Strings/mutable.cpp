#include <iostream>
using namespace std;
int main(){
    char str[] = "Hello World";

    cout <<"Original string: " << str << endl;

    // Modifying the string
    str[0] = 'h';
    str[6] = 'w';

    cout <<"Modified string: " << str << endl;

    string s = "raghav";
    s[0] = 'R';
    s.push_back('x');
    s.append("abc");


    cout <<"Modified string: " << s << endl;



    return 0;
}