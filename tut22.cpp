// OOPs Recap & Nesting of Member Functions 

// OOPs - Classes and Objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structure (in C)
// structure had limitations
//       --> members are public
//       --> No methods\
    // classes = structure + more
// classes can have methods and properties
// classes --> can make few members as private or few as public
// structure in C++ are typedef
// you can declare objects along with the class declaration like this:
/*class Employee{
        // classs defination
    } harry, rohan, lovish;*/
// harry.salary = It makes no sense if salary is private

// Nesting of Member functions--If you have a function and it is using private variable then it can call a second function without using '.';

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void);
    // void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary no. " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones(void)
{
    chk_bin();// Nesting member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Display your binary no. :" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}