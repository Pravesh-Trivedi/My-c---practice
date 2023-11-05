#include<iostream>
using namespace std;
//function prototype
//type function name (argument)
//int sum(int a, int b);{Acceptavble}
//int sum (a, b); {Not Acceptable}
int sum(int, int); //-->{Acceptable}
//void H(void);//-->{Acceptable}
void H();
//int sum(int a, int b){
//    int c = a+b;
//    return c;
//}

int main(){
    int num1, num2;
    cout<<"Enter the value of num1 "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2 "<<endl;
    cin>>num2;
    //num1 and num are actual parameters
    cout<<"The sum is "<<sum(num1,num2);
    H();
    return 0;
}
int sum(int a, int b){
    // /formal parameters a and b will be taking value from actual parameters num1 and num2 
    int c = a+b;
    return c;
}

void H(){
    cout<<"\nHello pravesh limit is your ahead";
}