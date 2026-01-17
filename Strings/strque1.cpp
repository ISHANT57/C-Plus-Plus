#include <iostream>
using namespace std;
#include <string>

int main(){
    string s ;
    cout <<"Enter a string: ";
    getline (cin,s); // To take a complete line as input
    cout << "You entered: " << s << endl;

    
    int length = s.length();
    cout << "Length of the string: " << length << endl;

    if (length >5){
    for(int i=0; i<length; i++){
        string sub = s.substr(2,5);
        cout << "Substring from index 2 of length 5: " << sub << endl;
        break;
    }

    
    
       
    }
}