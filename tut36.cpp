// Inheritance
#include<iostream>
using namespace std;

int main(){
    /*
    1.Reusability is a very important feature of OOPs
    2. In C++ we can reuse a class and add additional features to it
    3.Reusing classes saves time and money
    4.Reusing already tested and debugged class will save a lot of effort of devloping and debugging thing again.

    What is Inheritance in C++
    1.The concept of reusability in C++ is supported using Inheritance
    2.We can reuse the properties of an existing class by inheriting from it
    3.The existing class is called as the Base Class
    4.The new class which is inherited is called as the Derived Class
    5.Reusing classes saves time and money
    6.There are different types of inheritance in C++

    Forms of Inheritance in C++
    1.Single Inheritance-- (A->B-- 'B is derived from A'  || Employee -> Programmer(Ex- dino gaming)-if employee is retired then programmer will extent its work)
    2.Multiple Inheritance-- (A->C && B->C -- C is derived from both A and B || Empl->Programmer && Asistant->Programmer)- A derived class with more than one base class
    3.Hierarchical Inheritance--(C->A && C->B || Empl->prog && Empl->Manager -- Serveral derived classes from a single base case)
    4.Multilevel Inheritance-- (A->B->C || Animal->Mammal->Human) --Deriving a class from alredy derived class(Mammal = animal + more || Cow = Mammal + more)
    5.Hybrid Inheritance-- (A->B->D && A->C->D )   i.Hybrid inheritance is a combination of multiple inheritance and multiplevel inheritance.
                                                  ii.A class derived from two classes as in multiple inheritance.
                                                 iii.However, one of the parent classes is not a base class.
                                                 (Animal->Mammal->Bat && Animal->bird->Bat)
    */
    return 0;
}