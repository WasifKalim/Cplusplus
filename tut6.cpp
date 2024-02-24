#include <iostream>
// There are two types of header files:
// 1.SSystem header files: It comes with the compiler
// 2.User defined header files: It is written by the programmer
// #include <this.h>

using namespace std;
int main()
{
    int a=6,b=3;
    cout<<"This is hello world program";
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic operators
    cout <<"The value of a + b is " <<a + b<< endl;
    cout <<"The value of a - b is " <<a - b<< endl;
    cout <<"The value of a * b is " <<a * b<< endl;
    cout <<"The value of a / b is " <<a / b<< endl;
    cout <<"The value of a % b is " <<a % b<< endl;
    cout <<"The value of a ++ b is " <<a++<< endl;
    cout <<"The value of a -- is " <<a--<< endl;
    cout <<"The value of ++a is " <<++a<< endl;
    cout <<"The value of --a is " <<--a<< endl;

    // Assignment Operators --> used to assign values to variables
    // int a = 3, b= 9;
    // char d='d';

    // Comparison Operators
    cout<<"The value of a == b is "<< (a==b)<<endl;
    cout<<"The value of a != b is "<< (a!=b)<<endl;
    cout<<"The value of a >= b is "<< (a>=b)<<endl;
    cout<<"The value of a <= b is "<< (a<=b)<<endl;
    cout<<"The value of a > b is "<< (a>b)<<endl;
    cout<<"The value of a < b is "<< (a<b)<<endl;
    return 0;
}