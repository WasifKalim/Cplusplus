// File I/O in C++ open() and eof() functions
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("Sample60O.txt");
    out<<"This is me\n";
    out<<"This is also me\n";
    out<<"This is alsi me";
    out.close();

    ifstream in;
    string st, st2;
    in.open("Sample60I.txt");
    // getline(in, st);
    // in>>st>>st2;
    // cout<<st<<" "<<st2;

    while(in.eof() ==0 ){// eof-end of file
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}