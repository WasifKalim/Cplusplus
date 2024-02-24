// Map in C++
// Map- key value store krne k kam ata h(marks of students)
// Map -- Vector -- List

#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 58;
    marksMap["Rohan"] = 8;

    marksMap.insert({{"Kozume", 234}, {"Kuroo", 211}});
    map<string, int> :: iterator iter;
    for( iter = marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl; // (*iter).first-> se key(harry) mil jaiga aur (*iter).second -> se value(98) mil jaiga
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty size is: "<<marksMap.empty()<<endl; // return false
    return 0;
}