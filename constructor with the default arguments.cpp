#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 9, int c = 6)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printnumber();
};

void simple ::printnumber()
{
    cout << "The value of data is " << data1 << " and " << data2 << " and " << data3 <<endl;
    
}

int main()
{
    simple s(12, 13, 54);
    s.printnumber();
    return 0;
}