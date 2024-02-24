// Array of objects Using Pointers
#include <bits/stdc++.h>
using namespace std;

class ShopItem{// ShopItem is a Template
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Id of this item is "<<id<<endl;

            cout<<"Price of this item is "<<price<<endl;
        }
};
/*
        1   2   3
        ^
        |
        |
        ptr-- it had moved to 3 in first for loop, so for second for loop it can not be used
        ptrTemp
*/
int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];
    // general store item1
    // veggies item2
    // hardware item3
    ShopItem *ptr = new ShopItem[size];//Shop type k object store krta h
    ShopItem *ptrTemp = ptr;

    int p, i;
    float q;
    for( i = 0; i <size; i++){
        cout<<"Enter id and price of item"<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }
    for(i=0; i< size; i++){
        cout <<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}