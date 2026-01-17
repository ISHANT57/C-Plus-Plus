#include <iostream>
#include <string>
#include <algorithm>   // for reverse()
using namespace std;

int main() {

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int start = 0;   // starting index of a word

    for (int i = 0; i <= s.length(); i++) {

        // If space or end of string found
        if (i == s.size() || s[i] == ' ') {

            // Reverse the word from start to i-1
            reverse(s.begin() + start, s.begin() + i);

            // Move start to next word
            start = i + 1;
        }
    }

    cout << "Reversed each word: " << s << endl;

    return 0;
}
