#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout <<"Enter a string: ";
    getline(cin, str); // To take a complete line as input

    cout << "You entered: " << str << endl;

    int length = str.length();
    cout << "Length of the string: " << length << endl;

    for(int i=0; i<length; i++){
       if(i%2==0){
           str[i]='a'; // Replacing even indexed characters with 'a'
           }
    }

    cout << "Modified string: " << str << endl;

    return 0;
}