#include<iostream>
using namespace std;

typedef struct  employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
}ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    //enum meal{paino,harmonica,banjo};
    //meal m1 = banjo;
    //cout<<m1;
    //cout<<paino<<endl;
    //cout<<harmonica<<endl;
    //cout<<banjo<<endl;
   //union money m1;
   //m1.rice = 74;
   //m1.car = 'c';
   //cout<<m1.car;
    // ep pravesh;
    //pravesh . eid = 7;
    //pravesh . favchar = 's';
    //pravesh . salary = 2000000000;
    //cout<<"The value is "<<pravesh . eid<<endl;
    //cout<<"The value is "<<pravesh . favchar<<endl;
    //cout<<"The value is "<<pravesh . salary<<endl;
    return 0;
}