// Static Data Members & Methods in C++
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // Static variable is default initialized with 0;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id;//throws an error
        cout<< "The value of count is "<<count << endl;
    }
};

int Employee ::count = 1000; // default value is 0
// Count is the static data member of class employee

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;// Cannot set id beacause 'id' is a Private
    // harry.count = 1;// Cannot set id beacause 'count' is also a Private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}