// Single Inheritance Deep Dive
#include<iostream>
using namespace std;
class Base{
    int data1; // private by default and is not inhertable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};
void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}

class Derived : public Base{// Class is being derived publically
    int data3;
    public:
        void process();
        void display();
};
void Derived :: process(){
    data3 = data2 * getData1();// We can not access directly data1(private) we have to get it by call function
}

void Derived :: display(){
    cout<<"Vaule of data 1 is "<<getData1()<<endl;
    cout<<"Vaule of data 1 is "<<data2<<endl;
    cout<<"Vaule of data 1 is "<<data3<<endl;
}
int main(){
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}