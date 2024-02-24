// Continue and Break statement
#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<4; i++)
    {
        if(i==2)
            break;
        cout << i<<endl;
    }
    cout<<endl;
    for(int i=0; i<4; i++)
    {
        if(i==2)
            continue;
        cout << i<<endl;
    }
    return 0;
}