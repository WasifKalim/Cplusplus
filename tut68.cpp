// Member Function Templates and Overloading Template function
#include<bits/stdc++.h>
using namespace std;

template <class T>
class Harry{
    public:
        T data;
        Harry(T a){
            data = a;
        }
        void display();
};

template <class T>
void Harry<T> :: display(){
    cout<<data;
}
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
template <class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main(){
    // Harry<float> h(5.7);
    // Harry<char> h('c');
    // Harry<int> h(87);
    // cout<<h.data<<endl;
    // h.display();

    // Exact matching takes the priority
    // func(4);
    func1(4);
    return 0;
}