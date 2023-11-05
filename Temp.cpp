#include<iostream>
using namespace std;

template <class T1 , class T2, class T3 >
class Sonick{
    public:
    T1 a;
    T2 b;
    T3 c;
    Sonick(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"This value of a is "<<a<<endl;
        cout<<"This value of b is "<<b<<endl;
        cout<<"This value of c is "<<c<<endl;
    }
};
    
int main(){
    Sonick<int, float, char>obj(4, 4.6, 's');
    obj.display();
    return 0;
}