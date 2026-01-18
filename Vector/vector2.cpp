#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<int> numbers = {10, 20, 30, 40, 50};
for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << " ";
}
cout << endl;

cout << "Size of vector: " << numbers.size() << endl;
return 0;

}