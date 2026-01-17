
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Ishan";
    s.push_back('t'); // Appending 't' to the string single charater
    cout << s;
    // Output: Ishant
    cout << endl;
    s.push_back(' Bhoyar'); // Appending space

    cout << s;
    // Output: Ishantr
    

}