#include<iostream>
using namespace std;

int main()
{
    /*
    There are three types of loops in C++;
    1. for loop
    2. while Loop
    3. do-While Loop
    */

    // For Loop in C++
    // int i = 1;
    // cout<<i;
    // i++;
    
    // Syntax for the loop
    // for(initiallization; condition; updation)
    // {
    //     loop body(C++ code);
    // }
    
    for (int i = 0; i < 40; i++)
    {
        /* code */
        cout<<i<<endl;
        

    }
    // Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40)
    // {
    //     cout<<i;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while(true)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    
    // do-While loop in C++
    // Syntax:
    // do
    // {
    //     C++ statements;
    // } while (condition);
    
    int i =1;
    do{
        cout<<i<<endl;
        i++;
    }while(i=<40);
}