// List in C++ STL
// Interesting topic
#include<bits/stdc++.h>
#include <list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;// we have to make iterator
    for(it = lst.begin(); it!= lst.end(); it++)// lst.begin() - it is begin of list && lst.end() -- it is end of list
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1; // List of 0 length
    list1.push_back(5);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(6);
    list1.push_back(3);
    list1.push_back(15);
    display(list1);

    // Removing element from the list------
    // list1.pop_back(); // pop from back
    // display(list1);
    // list1.pop_front(); // pop from front
    // display(list1);
    // list1.remove(3);

    // Sorting the list
    // list1.sort(); // it will sort the list 
    // display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);


    // list <int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter;

    list<int> list2(3); // Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 42;
    iter++;
    *iter = 48;
    iter++;
    display(list2);

    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 After merging: "<<endl;
    display(list1);
    
    return 0;
}