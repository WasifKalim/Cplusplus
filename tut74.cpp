// Function Objects(functors)
#include<bits/stdc++.h>
#include<functional>
using namespace std;

int main()
{
    // Function Objects: Function wrapped in a class so that it is available like an object
    int arr[] = {1, 4, 3, 12, 77, 54};
    sort(arr, arr+5); // it will sort the first five no.s
    sort(arr, arr+5), greater<int<>);
    for(int i=0; i<6; i++)
    {
    cout<<arr[i]<<endl;

    }

}