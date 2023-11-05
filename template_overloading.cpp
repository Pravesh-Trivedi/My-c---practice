#include<iostream>
using namespace std;

template<class T>
class sonick{
    public:
    T data;
    sonick(T a){
        data = a;

    }
    void display();
};

template< class T>
void sonick<T>::display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first func "<<a<<endl;;
}

template<class T>
void func(T a){
    cout<<"I am templatised func "<<a<<endl;;
}

int main(){

   // sonick<int> sio(5);
   // cout<<sio.data<<endl;

   func(7);//Exact match takes the highest priority
    return 0;
}