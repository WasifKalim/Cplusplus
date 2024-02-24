#include<iostream>
using namespace std;

// Use inline when call function is short
// It the function is inline do not use static
// Inline is a request to compiler
// inline int product(int a, int b)
// {

//     return a*b;
// }

float moneyReceived(int currentMoney, float factor=1.04)
{
    return currentMoney * factor;
}
// int product(int a, int b)
// {
//     static int c=0; // It runs one time in starting
//     c=c+1; // Next Time this function is run, the value of c will be retained
//     return a*b+c;
// }
int main(){
    int a,b;
    // cout <<"Enter the value of a and b";
    // cin>>a>>b;
    // cout <<"the product of a and b is "<<product(a,b)<<endl;
    // cout <<"the product of a and b is "<<product(a,b)<<endl;
    // cout <<"the product of a and b is "<<product(a,b)<<endl;
    // cout <<"the product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<< "if you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<< "For VIP: if you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money,1.10)<< "Rs after 1 year";
    return 0;
}