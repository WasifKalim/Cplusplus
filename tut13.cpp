#include<iostream>
using namespace std;

int main(){
    int marks[4]= {23, 34, 45 ,43};
    int i=0;
    for(int i=0; i<4; i++)
    {
        // You can change the value of the array
        marks[2]=33;
        cout<<marks[i]<<endl;
    }

    // Quick quiz: Do it using while and do-while

    // while
    while(i<4){
        cout<<marks[i]<<endl;
    }

    // do-while
    do
    {
        cout<<marks[i]<<endl;
        i++;
    }while(i<4);



    // Pointers and Arrays
    int *p= marks;// pointer is pointing to already made array
    // cout <<*(p++);
    // cout<<*(++p);
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;// it will move the pointer to next index of the array(it works as an increment)
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}