#include<iostream>
using namespace std; 
class student{
  public:
  string name;
  int roll;
  int sem;
  string bracnh;
   void display(){
    cout<<"name "<<name<<endl;
    cout<<"roll  "<<roll;
   }
};

int main(){
  student obj1;
  obj1.name = "pravesh";
  obj1.roll = 23;
  obj1.display();
  return 0;
}