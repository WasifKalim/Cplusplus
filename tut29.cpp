// Constructor in C++
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // creating a constructor
    // Constructor is a specail member function with same name as of the class.
    // It is automatically invoked(auto self-call) whenever an object is created
    // It is used to initialize the objects of its class
    Complex(void); // constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

//Constructor- have to be same class name
// This is a default constructor as it takes no parameter

Complex ::Complex(void) 
{
    a = 10;
    b = 3;
    cout << "Hello World";
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

// Characteristics of constructor
/*
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address

*/