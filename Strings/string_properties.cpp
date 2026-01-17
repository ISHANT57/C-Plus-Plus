#include <iostream>
#include <string>
using namespace std;

int main() {

    // -------------------------------
    // 1. String Declaration & Input
    // -------------------------------
    string s1 = "Ishant";
    string s2 = " Bhoyar";
    string s3;

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    // -------------------------------
    // 2. length() / size()
    // -------------------------------
    cout << "Length of s1: " << s1.length() << endl;   // 6
    cout << "Size of s1: " << s1.size() << endl;       // 6

    // -------------------------------
    // 3. Concatenation (+)
    // -------------------------------
    s3 = s1 + s2;
    cout << "Concatenation (s3): " << s3 << endl;      // Ishant Bhoyar

    // -------------------------------
    // 4. append()
    // -------------------------------
    s1.append(" Kumar");
    cout << "After append s1: " << s1 << endl;         // Ishant Kumar

    // -------------------------------
    // 5. Access characters
    // -------------------------------
    cout << "s1[0]: " << s1[0] << endl;                 // I
    cout << "s1.at(1): " << s1.at(1) << endl;           // s

    // -------------------------------
    // 6. front() and back()
    // -------------------------------
    cout << "First char: " << s1.front() << endl;       // I
    cout << "Last char: " << s1.back() << endl;        // r

    // -------------------------------
    // 7. clear()
    // -------------------------------
    string temp = "Temporary";
    temp.clear();
    cout << "After clear, temp length: " << temp.length() << endl; // 0

    // -------------------------------
    // 8. empty()
    // -------------------------------
    if (temp.empty())
        cout << "temp string is empty" << endl;

    // -------------------------------
    // 9. compare()
    // -------------------------------
    string a = "apple";
    string b = "banana";
    cout << "Compare apple & banana: " << a.compare(b) << endl;
    // negative value → apple < banana

    // -------------------------------
    // 10. substr(start, length)
    // -------------------------------
    cout << "Substring of s3: " << s3.substr(0, 6) << endl; // Ishant

    // -------------------------------
    // 11. find()
    // -------------------------------
    cout << "Position of Bhoyar: " << s3.find("Bhoyar") << endl; // 7

    // -------------------------------
    // 12. erase(start, length)
    // -------------------------------
    string e = "Ishant Bhoyar";
    e.erase(6, 7);
    cout << "After erase: " << e << endl;               // Ishant

    // -------------------------------
    // 13. insert(position, string)
    // -------------------------------
    string ins = "Ishant";
    ins.insert(6, " Bhoyar");
    cout << "After insert: " << ins << endl;            // Ishant Bhoyar

    // -------------------------------
    // 14. replace(start, length, string)
    // -------------------------------
    string rep = "Ishant Bhoyar";
    rep.replace(0, 6, "Mr.");
    cout << "After replace: " << rep << endl;           // Mr. Bhoyar

    // -------------------------------
    // 15. push_back()
    // -------------------------------
    string pb = "Hello";
    pb.push_back('!');
    cout << "After push_back: " << pb << endl;          // Hello!

    // -------------------------------
    // 16. pop_back()
    // -------------------------------
    pb.pop_back();
    cout << "After pop_back: " << pb << endl;           // Hello

    // -------------------------------
    // 17. swap()
    // -------------------------------
    string x = "First";
    string y = "Second";
    x.swap(y);
    cout << "After swap x: " << x << " y: " << y << endl;

    // -------------------------------
    // 18. getline() (full line input)
    // -------------------------------
    string line;
    cout << "Enter a full line: ";
    getline(cin, line);
    cout << "You entered: " << line << endl;

    return 0;
}
