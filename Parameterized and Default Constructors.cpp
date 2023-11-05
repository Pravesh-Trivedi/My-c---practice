#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:

    Complex(int, int); // Constructor Declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i " << endl;
    }
};

Complex ::Complex( int X, int Y) //---->This is a default constructor as it takes 2 parameters
{
    a = X;
    b = Y;
    //cout<<"Hello World";
}

int main(){
    //Implicit call
    Complex a(4,7);
    
    //Explicit call
Complex b(9,8);

    a.printNumber();   
    b.printNumber();
    
    return 0;
}