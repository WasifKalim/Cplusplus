// Multilevel Inheritance Deep Dive
#include<iostream>
using namespace std;

/*
For a protected member:
                            Public derivation   Private Derivation  Protected Derivation
    1. Private members      Not inherited       Not Inherited       Not Inherited
    2. Proctected members   Protected           Private             Protected
    3. Public members       Public              Private             Protected
*/
class Derived: protected Base{

}

int main(){
    Base b;
    Derived d;
    cout <<d.a; // will not work since a is protected in both base as will as derived class
    return 0;
}