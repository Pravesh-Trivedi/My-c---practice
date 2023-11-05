#include<iostream>
using namespace std;

/*
Synatx for initialization list in constructor :
constructor (argument- list) : initilization-section {
    assignment + other code;
    }
class Test{
    int a ;
    int b;
    public: 
    Test(int i int j) : a(i), b(j){
        constructor-body}
    };
}       */
class Test{
    int a ;
    int b;
    public: 
    //Test(int i , int j) : a(i), b(j)
    //Test(int i , int j) : a(i), b(i+j)
    //Test(int i , int j) : a(i), b(2 * j)
    
    //Test(int i , int j) : b(j) , a(i + b)//--this problem because a initiliaze frist decleard first {
      //Test(int i , int j) : a(i)
      Test(int i , int j)
 {           
        a = i;
        b = j;
        cout<<"constructor excecuation"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b  is "<<b<<endl;
    }

    };
    
int main(){
    Test t(6, 5);
    return 0;
}