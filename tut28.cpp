// Friend funtion
#include<iostream>
using namespace std;

class Y;
// forward declaration

class X{
    int data;
    public:
    void setdata(int value){
        data = value;
    }
    friend void add(X, Y);
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X, Y);
};

void add(X o1, Y o2){
    cout<<"Summing data of x and y objects gives me "<< o1.data + o2.num;
}

int main(){
    X a1;
    a1.setdata(3);

    Y b1;
    b1.setValue(5);

    add(a1, b1);
    return 0;
}