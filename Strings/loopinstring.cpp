#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "Ishant Bhoyar";

    cout << s << endl;

    cout << "\nCharacters in the string are: " << endl;
    for(int i = 0; i < s.size(); i++){
        cout << s[i] << endl;
    }

    return 0;
}
