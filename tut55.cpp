// Pointers to derived Classes
#include<bits/stdc++.h>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
        }
};
int main(){
    BaseClass *base_class_pointer;
    BaseClass obj1_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;// Pointer base class pointer to derived class

    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    base_class_pointer->var_base = 1134;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    // base_class_pointer->var_derived = 45; -->Will throw an error
    return 0;
}