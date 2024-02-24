// Inheriting Class & its types
#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){}
};
// Derived Class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
// Note by default visibility mode is private.
Public visibilityMode : Public members of the base class becomes public members of the derived class
Private visibilityMode : Public members of the base class becomes private members of the derived class
Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(1);
    cout << skillF.languageCode<<endl;
    // cout << skillF.id<<endl;// Can not inherit beacause it is now a private after derived class
    cout << skillF.id<<endl;// Now it is working beacause it is now a public derived class
    skillF.getData();
    return 0;
}