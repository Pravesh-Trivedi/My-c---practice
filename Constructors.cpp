#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    /*Creating a Constructor
    Constructor is a special number function with the same as of the class.
    it is used to initialize the object of its class
    It is automatically invoked whenever an object is created*/

    Complex(void); // Constructor Declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i " << endl;
    }
};

Complex ::Complex(void) //---->This is a default constructor as it takes no parameters
{
    a = 10;
    b = 89;
    //cout<<"Hello World";
}

int main()
{

    Complex c1, c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
    
   
}
/*---->>CHARACTERISTICS OF CONSTRUCTOR ::
1.It should be declared in the public section of the 
2.They are automatically invoked whenever the obeject is created 
3.They cannot return value and do not have return types
4.It can have default arguments
5.We cannot refer to their address
*/