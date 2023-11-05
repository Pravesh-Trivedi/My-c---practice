#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumComplex(complex o1, complex o2);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setData(4, 5);
    c1.printNumber();

    c2.setData(7, 9);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
/*
1. Not in the scope of class
2. since it is not the scope of the class, it cannot be called form the object of that class. C1.sumcomplex() == invalid
3.can be invoked without the help of any object 
4.Usually contans the object as arguments
5.Can be declared inside public or private section of the class
6.It cannot access the members directly by their names and need object_ name.member_name to access any member
*/