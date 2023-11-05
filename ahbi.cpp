#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter your charachter"<<endl;;
    if(49<ch){
         cout<<"this is a lower case"<<endl;;
    }
    if(97<ch){
        cout<<"this is a upper case"<<endl;
    }
    if(ch<9){
        cout<<"this is a numeric case "<<endl;
    } 
    return 0;
}