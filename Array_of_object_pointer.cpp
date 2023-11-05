#include<iostream>
using namespace std;

class Shopitem{
    int id;
    float price;
    public:
    void setData(int a, float b){
        id = a;
        price = b;
    }
    void getData(){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"price of this item is "<<price<<endl;
    }
};

int main(){
    int size = 3;
    //int *ptr =&size;
    //int *ptr = new int [34];
    //general Shop item, veggies item, hardware item
    Shopitem *ptr = new Shopitem [size];
    Shopitem *ptrTemp = ptr;
    int p , i;
    float q;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item" <<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"Item number:: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    
    return 0;
}