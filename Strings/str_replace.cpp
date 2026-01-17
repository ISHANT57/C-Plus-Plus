#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Ishant Bhoyar";
    s.replace(0, 7, "Mr.");
    cout << s;
    // Output: Mr. Bhoyar

}