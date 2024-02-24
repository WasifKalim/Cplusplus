// Structure as a function and Union
#include<iostream>
using namespace std;

// In structure we can not access function
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;

// Union use only one member at a time so it save space(C++)
union money
{
    int rice;//4
    char car;//1
    float pounds;//4
    // storage alloted to the union is 4(maximun value of an individual member of union)
};

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = dinner;
    Meal m2 = breakfast;
    cout <<(m2==1)<<endl; // gives 0 as it is wrong case
    cout <<(m1==2)<<endl; // it gives 1 as a true case
    // cout << breakfast;
    cout << dinner<<endl; // gives 2 as index is 2
    cout << lunch; // gives 1 as index is 1
    // ep harry; 
    // union money m1;
    // m1.rice=34;
    // m1.car='c';
    // cout <<m1.car;
    // struct employee harry;
    // struct employee Agarwall;
    // harry.eId = 1;
    // harry.favChar = 'C';
    // harry.salary = 35523;
    // cout <<harry.eId<<endl;
    // cout <<harry.salary<<endl;
    // cout <<harry.favChar<<endl;
    
    return 0;
}