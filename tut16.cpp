#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

// This will not swap a and b
void swap(int a, int b)
{
    int tem = a;
    a=b;
    b=tem;
}

// Now it will swap after using pointer
void swap(int *a, int *b)
{
    int tem = *a;
    *a=*b;
    *b=tem;
}

// void swapPointer(int &a, int &b)
// {
//     int tem = *a;
//     *a=*b;
//     *b=tem;
// }

// *******New*************
int & swapReferenceVar(int &a, int &b)
{
    int tem = a;
    a=b;
    b=tem;
    return a;
}

int main(){
    int x=4, y=5;
    // cout << "the sum is "<<sum(a,b);
    
    // swapPointer(&x,&y);// THis will swap using pointer reference
    //swapReferenceVar(x,y);// This will swap using reference variable
    swapReferenceVar(x, y);// This will swap using reference variable
    swapReferenceVar(x, y)= 766;// This will swap using reference variable
    // swap(x,y);
    cout << "THe value of x is: "<<x<<endl<<"the value of y is: "<<y<<endl;
    
    return 0;
}