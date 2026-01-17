#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Ishant";
    s.pop_back();
    cout << s;
    // Output: Ishan
    // The last character 't' is removed from the string
}