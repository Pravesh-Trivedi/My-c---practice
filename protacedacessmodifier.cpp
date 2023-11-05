#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;
};
/*
For a protected member:
                     public derivation    private derivation   protected derivation
1.private members     Not INherited         Not INherited        Not INherited
2.protected members    protected              private             protected
3.public members        public                private             protected
*/

class derived: protected Base{

};
int main(){
    Base b;
    derived d;
   // cout<<d,a;// Will not work since a is protected in both base as well as derived class
    
    return 0;
}