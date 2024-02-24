#include<iostream>
using namespace std;

int fact(int n){
    if(n<=1){
        return 1;
    }
    return n * fact(n-1);
}
// Step by step calculation of factorial 
// fact(4)= 4 * fact(3);
// fact(4)= 4 * 3 * fact(2);
// fact(4)= 4 * 3 * 2 * fact(1);
// fact(4)= 4 * 3 * 2 * 1;


int fib(int n){
    if(n<2)
        return 1;
    return fib(n-1)+fib(n-2);
}
// Repeative Call unnecassary
// fib(4)
// fib(3) + fib(2)
// fib(2) +fib(1) +fib(1) + fib(0)

int main(){
    // factorial of a number
    // 6! = 6*5*4*3*2*1=720;
    // 0!=1 by defination
    // n! = n*(n-1)!
    int n;
    cout<<"Enter a no. :"<<endl;
    cin>>n;
    cout << "The term in fibonacci sequence is :"<<fib(n)<<endl;
    // cout <<"The fact of n is "<<fact(n)<<endl;
    return 0;
}