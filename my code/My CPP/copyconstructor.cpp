#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // when no copy constructor found , compiler supplies its own constructor
    number(number &obj)
    {
        cout << "copy constructor called !! " << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(46);
    x.display();
    y.display();
    z.display();
    number z1(z); // copy constructor invoked
    z1.display();
  
    return 0;
}