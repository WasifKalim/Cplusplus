// Pointers to object and Arrow Operators
#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
        void getData(){
            cout <<"The imaginary part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex[3];//Alternate way
    (*ptr).setData(1, 34);// bracket is must beacause '.' has higher precedence than '*'
    ptr->getData();

    // Array of Object
    // Complex *ptr1 = new Complex[4];
    // ptr1->setData(1, 4);
    // ptr1->getData();
    // In next Video in details
    return 0;
}