#include <iostream>
using namespace std;
/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS (ONE , TWO , OR MORE THEN TWO)
template<class T1, class T2>.....(COMMA SEPARATED)
class nameofclass{
    //body
} */
template <class T1, class T2>
class MYclass
{
public:
    T1 data1;
    T2 data2;
    MYclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};
int main()
{
    MYclass<int, float> obj(7, 3.4);
    obj.display();
    return 0;
}