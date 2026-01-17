#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "Ishant Bhoyar";

    int freq[256] = {0};   // Array to store frequency of characters

    // Step 1: Count frequency of each character
    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    // Step 2: Print frequency of each character (no duplicates)
    for (int i = 0; i < s.length(); i++) {

        // Skip space
        if (s[i] == ' ')
            continue;

        // Print only first occurrence
        if (freq[s[i]] != 0) {
            cout << s[i] << " : " << freq[s[i]] << endl;
            freq[s[i]] = 0;   // Mark as printed
        }
    }

    return 0;
}
