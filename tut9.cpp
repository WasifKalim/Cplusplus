// Loops and conditional statements and switch case
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    // Selection control structure: If-else ladder;
    // if(age<18)
    //     cout<<"You shold keep it up"<<endl;
    // else if(age<18)
    //     cout<<"You should enjoy"<<endl;
    // else if(age==18)
    //     cout<<"You are a kid you will get a kid pass to a party"<<endl;
    // else
    //     cout<<"You can come to the party"<<endl;
// Selection control structure: Switch Cae structure
    
    switch(age){
        case 18:
            cout<<"You are 18"<<endl;
            break;
        case 22:
            cout<<"You are 22"<<endl;
            break;
        case 23:
            cout<<"You are 23"<<endl;
            break;
        default:
            cout<<"No specail case"<<endl;
            break;
        }
}