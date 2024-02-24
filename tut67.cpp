// Function Templates & Function Templates with Parameters
#include<bits/stdc++.h>
using namespace std;

// float functionAvg(int a, int b){
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// float functionAvg2(int a, float b){
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    int x = 5, y = 7;
    swap(x, y);
    cout<<x<<endl<<y;
    return avg;
}

// template < class T1, class T2>
// float funct(T1 a, T2 b){
//     float avg = (a +b) / 2;
//     return 0;
// }

int main(){
    float a;
    a = funcAverage(3, 4.2);
    printf("\nThe avg is :%.2f\n", a);
    int x = 5, y = 7;
    swapp(x, y);
    cout<<x<<endl<<y;
    return 0;
}