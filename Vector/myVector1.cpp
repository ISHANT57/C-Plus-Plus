#include <iostream>
using namespace std;

class Vector{
    public:
        int size;
        int capacity;
        int *arr;
    
    Vector(){
        size=0;
        capacity=1;
        arr=new int[capacity];
    }
    
    void add(int data){
        if(size==capacity){
            capacity*=2;
            int *arr2=new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            
            arr=arr2;
            
        }
        
        arr[size++]=data;
    }
    
    void print(){
        for(int i=0;i<size;i++){
            cout <<arr[i]<<" ";
        }
        cout <<endl;
    }
};



int main(){
    Vector v1;
    cout << "size is : "<< v1.size <<" "<< "capacity is : "<<v1.capacity<<endl;
    v1.add(10);
    cout << "size is : "<< v1.size <<" "<< "capacity is : "<<v1.capacity<<endl;
    v1.print();
    v1.add(20);
    cout << "size is : "<< v1.size <<" "<< "capacity is : "<<v1.capacity<<endl;
    v1.print();
    v1.add(30);
    cout << "size is : "<< v1.size <<" "<< "capacity is : "<<v1.capacity<<endl;
    v1.print();
}