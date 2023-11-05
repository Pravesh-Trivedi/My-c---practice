#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
     void setData(int a, int b){
        real = a;
        imaginary = b;
     }
     void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
     }
};

int main(){
  //Complex c1;
  //Complex *ptr = &c1;
  Complex *ptr = new Complex;
    //(*ptr).setData(48, 58); is exactly samea as
    //(*ptr).getData(); is as good as 
    ptr->setData(48, 58);
    ptr->getData();
    //Array of Object
    Complex *ptr1 = new Complex[4];
     ptr->setData(7, 87);
     ptr->getData();
    return 0;
}