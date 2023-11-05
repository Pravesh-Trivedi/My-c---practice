#include<iostream>
using namespace std;

int main(){
    
    int marks[] = {45, 54, 49, 89};

    
    int mathmarks[4];
    mathmarks[0] = 453; 
    mathmarks[1] = 465;
    mathmarks[2] = 655;
    mathmarks[3] = 278;

    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    //cout<<"these are marks"<<endl;
    //cout<<marks[0]<<endl;
    //cout<<marks[1]<<endl;
    //cout<<marks[2]<<endl;
    //cout<<marks[3]<<endl; 
   ////you can change the value of an array
   marks[2] = 1089;
   //cout<<marks[0]<<endl;
   //cout<<marks[1]<<endl;
   //cout<<marks[2]<<endl;
   //cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
         cout<<"The value of marks " <<i<<" is "<<marks[i]<<endl;
    }
    int* p = marks;
     cout<<"The value of *p is "<<*p<<endl;
     cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
     cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
     cout<<"The value of *(p+3) is "<<*(p+3)<<endl;


      
      
   
   
   


    

    return 0;
}