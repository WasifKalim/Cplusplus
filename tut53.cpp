// This pointer in C++
#include <bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
        // void setData(int a){
        //     this->a  = a;
        // }
        A & setData(int a){
            this->a  = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    // this is the keyword which is a pionter which points to the object which invokes the member function
    A a;
    a.setData(5).getData();
    // a.getData();
    return 0;
}