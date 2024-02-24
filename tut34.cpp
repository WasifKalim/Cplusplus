// Copy Constructor
#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 100;// The value of a is set to default value
        }//Should make default constructor

        Number(int num){
            a = num;
        }
        
        // Copy Constructor
//**IMPORTANT***//   When no copy constructor is found compiler supplies its own copy constructor
        Number(Number &obj){
            cout << "Copy Constructor Call !!!"<< endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<< a << endl;
        }
};
    
int main(){
    Number x(23), y, z(45), z2;
    x.display();
    y.display();
    z.display();
    
    // Copy Constructor
    // z1 naya object bana x ki help se
    // z1(x) ki value ho gai a k barabar
    // z1 should exactly resemble z or x or y

    Number z1(x);// Copy constructor invoked(called)
    z1.display();

    z2 = z;// Copy constructor not called

    Number z3 = z;// Copy constructor called
    z3.display();
    // Kab nhi hoga - jab bana banaya huwa object(z2) use kr rahe h

    return 0;
}