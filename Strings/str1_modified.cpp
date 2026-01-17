#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "You entered: " << str << endl;

    int length = str.length();
    cout << "Length of the string: " << length << endl;

    // Find first non-space character
    int start = 0;
    while(start < length && str[start] == ' '){
        start++;
    }

    // Replace even indexed characters (ignoring leading spaces)
    for(int i = start; i < length; i++){
        if((i - start) % 2 == 0){
            str[i] = 'a';
        }
    }

    cout << "Modified string: " << str << endl;

    return 0;
}
