#include<iostream>
using namespace std;

// function prototype
// type function-name (agruments);
int sum(int a, int b); //-Aceptable
int sum(int a, b); //- Not Aceptable
int sum(int , int); //- Aceptable
void g(void); //- Aceptable
int main(){
    int num1,num2,c;
    cout<<"Enter num1: "<<endl;
    cin>>num1;
    cout<<"Enter num2: "<<endl;
    cin>>num2;
    // num1 nd num2 are actual parameters
    c=sum(num1,num2);
    cout <<c;
    g();
    return 0;
}

int sum(int a,int b)
{
    // Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
    return c;
}

void g(){
    cout<<"\nHello Good Morning";
}