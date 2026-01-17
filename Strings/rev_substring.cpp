#include <iostream>
#include <string>
#include <algorithm>   // for reverse()
using namespace std;

int main() {

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "You entered: " << s << endl;

    int length = s.length();
    cout << "Length of the string: " << length << endl;

    // Check if substring of index 2 and length 5 is possible
    if (length >= 7) {

        // Extract substring
        string sub = s.substr(2, 5);
        cout << "Substring from index 2 of length 5: " << sub << endl;

        // Reverse the substring
        reverse(sub.begin(), sub.end());
        cout << "Reversed Substring: " << sub << endl;

    } else {
        cout << "String is too short to extract substring." << endl;
    }

    return 0;
}
