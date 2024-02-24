// Revision Pointers-new and delete Keywords in CPP
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Basic Pointers Example
    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    
    cout<<"The value of a is "<<(ptr)<<endl;
    cout<<"The value of a is "<<ptr<<endl;
    cout<<"The value of a is "<<*(ptr)<<endl;
    cout<<"The value of a is "<<*ptr<<endl;

    // new Keyword
    int *p = new int(40);
    // float *p = new float(40.78);
    cout<<"The value at address p is "<<*(p)<<endl;
    cout<<"The value at address p is "<<p<<endl;

    int *arr = new int[4];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    arr[3] = 40;
    // After deleting, there is no garanty of giving the correct values
    // delete arr;// delete the array
    // delete[] arr;// delete the contigous memory allocated dynamically
    cout<<"The value of arr[0]  is "<<arr[0]<<endl;
    cout<<"The value of arr[1]  is "<<arr[1]<<endl;
    cout<<"The value of arr[2]  is "<<arr[2]<<endl;
    cout<<"The value of arr[3]  is "<<arr[3]<<endl;

    // Delete operator
    
    return 0;
}