// Exercise  in C++ Inhritance

/*
Create 2 classes:
    1.SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2.ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function.

    Hybrid - combining old to make new from old ones
    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?--Multuple Inheritance
    Q2. Which mode of Inheritance are you using?--public SimpleCalculator, public SimpleCalculator
    Q3. Create an Object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented
*/

// Solution to Exercise on CPP Inheritance of tut42

#include<bits/stdc++.h>
#include<cmath>
using namespace std;
class SimpleCalculator{
    int a, b;
    public:
        void getDataSimple(){
            cout <<"Enter the value of a "<<endl;
            cin>>a;
            cout <<"Enter the value of b "<<endl;
            cin>>b;
        }
        void perform_operationsSimple(){
            cout<<"The value of a + b is "<<a + b<<endl;
            cout<<"The value of a - b is "<<a - b<<endl;
            cout<<"The value of a * b is "<<a * b<<endl;
            cout<<"The value of a / b is "<<a / b<<endl;
        }
};

class ScientificCalculator{
    int x, y;
    public:
        void getDataScientific(){
            cout <<"Enter the value of x "<<endl;
            cin>>x;
            cout <<"Enter the value of y "<<endl;
            cin>>y;
        }
        void perform_operationsScientific(){
            cout<<"The value of cos(x) is "<<cos(x)<<endl;
            cout<<"The value of sin(x) is "<<sin(x)<<endl;
            cout<<"The value of exp(x) is "<<exp(x)<<endl;
            cout<<"The value of tan(x) is "<<tan(x)<<endl;
        } 
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator
{
    // It is enough to access other base class members
};
int main()
{
    // SimpleCalculator sc;
    // sc.getData();
    // sc.perform_operations();

    // ScientificCalculator calc;
    // calc.getData();
    // calc.perform_operationsScientific();

    HybridCalculator calc;
    calc.getDataScientific();
    calc.perform_operationsScientific();

    calc.getDataSimple();
    calc.perform_operationsSimple();
    return 0;
}