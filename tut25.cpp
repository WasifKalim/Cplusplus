// Array as objects and passing objects as Function
#include<iostream>
using namespace std;

// Class is a custom data type
class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary=12000;
            cout<<"Enter the id of Employee ";
            cin>>id;
        }
        void getId(void){
            cout<<"The id of this employee is "<<id<<endl;
            cout<< "The salary of the Employee is " <<salary<<endl;
        }
};
int main(){
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];// WE can access class as array 
    for(int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}