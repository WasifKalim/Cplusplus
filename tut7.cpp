#include<iostream>
using namespace std;

int c = 45;

int main()
{
// *****************Build in Data Types ******************
//     int a, b, c;
//     cout <<"Enter no. 1:\n" << endl;
//     cin >> a;

//     cout << "Enter the value of b:"<<endl;
//     cin>>b;

//     c= a+b;
//     cout << "The sum is :" << c <<endl;
//     cout << "THe global c is :"<<::c; // For the access of global variables we need to put scope resolution 

    // *****************float, double and long double Literals******************
    // float d = 34.5f;
    // long double e=34.5L;
    // cout << "The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout << "The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout << "The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout << "The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout << "The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // 34.5 : by default it is taken by double
    // 34.5f; now it is safed as float variable 
    // cout <<"The value of d is "<< d<<endl<<"The value of e is "<<e; 

    // *************Ranges of Data types for competative programming*************
    // int -->> -1 * 10^9 to  1 * 10^9;
    // long int  --->> -1 * 10^12 to  1 * 10^12;
    // long long int  -->> -1 * 10^18 to 1 * 10^18
    // double --->> -1 * 10*24 to  1 * 10^24

    // *****************Reference Variables *************************************
    // shubham ----> rohan ----> Monty ------> Dangerous Coder (All names are indicated to a single person by different names)
    // float x = 455;
    // float & y = x;
    // float *p = x; // it is wrong because pointer can not access variable it can access 'address' of a variable 
    // cout <<x<<endl;
    // cout <<y<<endl;

    // *****************Typecasting ******************
    int a = 45;
    float b = 45.3;
    cout << "The value of a is "<<(float)a<<endl;
    cout << "The value of a is "<<float(a)<<endl;

    cout<<"The value of b is :"<<(int)b<<endl;
    cout<<"The value of b is :"<<int(b)<<endl;
    int c= int(b);

    cout <<"The Expression is :"<<a + b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;


    return 0;
}
