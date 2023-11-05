#include<iostream>

using namespace std;

int main() {
    float n1 ,n2;
    char op ;

    cout<<"enter 2 numbers: "<<endl;
    cin>>n1;
    cin>>n2;

    cout<<"enter operator: "<<endl;
    cin>>op;

    switch(op)
    {
    
    case'+':
       cout<<n1+n2<<endl;
       break;
    case'-':
        cout<<n1-n2<<endl;
        break;
    case'*':
        cout<<n1*n2<<endl;
        break;
    case'/':
        cout<<n1/n2<<endl;
        break;
    
    default:
        cout<<"operator not found!"<<endl;
        break;
    }



  return 0;
 }