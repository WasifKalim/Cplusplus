#include<bits/stdc++.h>
using namespace std;

// Why vector is not excepted as class?
template <class T>
class vectoro{
    public:
    T * arr;
    int size;
        vectoro(int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(vectoro &v)
        {
            T d = 0;
            for(int i=0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main(){
    vectoro <float>v1(3);
    v1.arr[0] = 0.2;
    v1.arr[1] = 0.45;
    v1.arr[2] = 1.45;
    vectoro <float>v2(3);
    v2.arr[0] = 1.45;
    v2.arr[1] = 4.24;
    v2.arr[2] = 0.43;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}