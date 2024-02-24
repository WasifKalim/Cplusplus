// Pointer
#include<iostream>
using namespace std;

int main(){
    // pointer is a data type which holds the address of other data types

    int a =3;
    int *b= &a;
    // & ---> (Address of) operator
    cout<< "The address of a is :"<< &a<<endl;
    cout<< "The address of a is :" <<b<<endl;


    // *---> (value at) Dereference operator
    cout<< "The value at address b is : " <<*b<<endl;

    // Pointer to pointer
    int **c= &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the value of b is "<<c<<endl;
    cout<<"the value at address b is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) b is "<<**c<<endl;
    return 0;
}