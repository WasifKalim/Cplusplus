// File I/O Reading and Writing files
#include<bits/stdc++.h>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in C++ are:
1. fstream -- derived from fstreambase
2. ofstream -- derived from fstreanbase
*/

/*
In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1. using the constructor
2. Using the member function open[] of the class 
*/

int main(){
    string st = "Harry bhai";
    string st2;
    // // Opening files using constructor & and writing it
    // ofstream out("Sample60O.txt"); // Write operation
    // out<<st;


    // Opening files using constructor & reading it
    ifstream in("SampleI.txt"); // Write operation
    // in>>st2;
    getline(in, st2); // getline function will take the whole line as it is.
    cout<<st2;
    return 0;
}