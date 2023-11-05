#include<iostream>
using namespace std;
//Base Class 
class Employee{
   
    public:
     int id;
     float salary;    

    Employee(int inpId){
        id = inpId;
        salary = 1000;
    }
    Employee(){}

};

//Derived Class Syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/method/etc...
}
Note
1.Default visibility mode is private
2.Public visibility mode :: public members fo the base class becomes public members of the derived class
3.Private visibility mode :: public members fo the base class becomes private members of the derived class
4.Private members are never inheritance 
*/
//Creating a program class derived from Employee Base class
class programer : public Employee{
    public:
    programer(int inpId){
        id = inpId;
    }
    int language = 9;
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee kanha(1) , pravesh(2);
    cout<<kanha.salary<<endl;
    cout<<pravesh.salary<<endl;
    programer skillf(10);
    cout<<skillf.language<<endl;
    cout<<skillf.id<<endl;
    skillf.getData();
   
    
    return 0;
}