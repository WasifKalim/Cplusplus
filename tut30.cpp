// Parametrized Constructor & Default Constructor
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);// -- It is a parameterized constructor(takes arguments)
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    // Complex(void);// --it is a default constructor(No arguments)

    void printNumber()
    {
        cout << "Your no. is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ---> This is a parameterized constructor as it takes as parameters
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex a(4, 6);

    // Explicit call
    Complex b = Complex(5, 7);

    a.printNumber();
    b.printNumber();
    return 0;
}