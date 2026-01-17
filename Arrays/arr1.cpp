#include <iostream>
using namespace std;

int arrsum(int arr [],int n){
    if(n==0){
        return 0;
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}


int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result=arrsum(arr,n);
    cout<<"Sum of array elements: "<<result<<endl;
    return 0;
}