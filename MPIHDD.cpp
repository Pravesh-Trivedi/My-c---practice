#include<iostream>
using namespace std;

/*Syntax for inheriting in multiplies inheritance
class Derived: visibility-mode base1, visibility-mode base2
{
    class body of class "Derivedc" };*/

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }

};
class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }

};
class Base3{
    protected:
        int base3int;
    public:
        void set_base3int(int a){
            base3int = a;
        }

};

class Derived : public Base1, public Base2, public Base3
{
    public:
    void show(){
        cout<<" The value of base1 is "<<base1int<<endl;
        cout<<" The value of base2 is "<<base2int<<endl;
        cout<<" The value of base3 is "<<base3int<<endl;
        cout<<" The sum of there value is "<<base1int+base2int+base3int<<endl;

    }
};
/*
The inherited derived class will look something like this:
Data members:
base1int--> protected
base2int--> protected

Members functions:
set_base1int() -->public
set_base2int() -->public
set_show()-->public*/

 
int main(){
    Derived pravesh;
    pravesh.set_base1int(436);
    pravesh.set_base2int(489);
    pravesh.set_base3int(378);
    pravesh.show();
    return 0;
}