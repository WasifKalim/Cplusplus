#include<iostream>
#include<iomanip> // manipulators
using namespace std;

int main()
{
    // int a = 34;
    // char c = 'c';
    // cout <<"The value of a was:"<<a<<endl;

    // a = 45;
    // cout <<"The value of a is:"<<a<<endl;
//********** Constants in C++
    // const int a = 3;
    // cout<<"The value of a was:"<<a<<endl;
    // a = 45;
    // cout<<"THe value of a is:"<<a<<endl;

    // **Manipulators in C++
    // int a = 4, b=35, c = 4533;
    // cout<<"The value of a without setw is :"<<a<<endl;
    // cout<<"The value of b without setw is :"<<b <<endl;
    // cout<<"The value of c without setw is :"<<c <<endl;

    // it takes the digit place value in the output screen
    // cout<<"The value of a is :"<<setw(4)<<a<<endl;
    // cout<<"The value of b is :"<<setw(4)<<b <<endl;
    // cout<<"The value of c is :"<<setw(4)<<c<<endl;

    // Operator Precedence
    // It follows some rules and associatatives for solving the expressions
    int a = 3, b=4;
    // int c = (a*5)+b-45;
    int c = ((((a*5)+b)-45)+87);

    cout <<c;

    return 0;
}