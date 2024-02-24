// Protected Access Modifier
#include <iostream>
using namespace std;

class Base
{
protected: //Same as private but it gets inherited
    int a;

private:
    int b;
};
/*
Protect will inherit but not print
For a protected member:
                                Public derivation   Private Derivation   Protected Derivation
    1. Private memebers         No herited          No inherited         No Inherited
    2. Protected members        Protected           Private              Protected  
    3. Public members           Public              Private              Protected
*/
class Derived : protected Base{
    
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a<<endl; Will not work since a is protected in both base as well as derived class
    return 0;
}