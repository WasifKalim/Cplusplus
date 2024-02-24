// File I/O in C++ Read Write in the Same Program & Closing Files in C++

/*
C++: File I/O[Reading & Writing to a file]

*3 usefull classes 
   1. fstreambase
   2. ifstream -> Derived from fstreambase
   3. ofstream -> Derived from fstreambase
   Note: 3 of classes have same header files: <fstream>

* Read operation
    ifstream in("this.txt");
    string st;
    in>>st; // Just like cin

* Write operation
    ofstream out("this.txt");
    string st = "Harry";
    out<<st; // Writes to a file this.txt!
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("Sample60O.txt");

    // Creating a name variable and filling it with the string entered by the user
    cout<<"Enter your name:";
    string name;
    cin>>name;

    // Writing a string to the file
    hout<<"My name is : "<<name;
    hout.close();

    ifstream hin("sample60I.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"The content of this file is: "<<content;
    return 0;
}