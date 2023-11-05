#include<iostream>
using namespace std;
 int product(int a, int b){
    // static int c=0; //this line executes only once
    // c = c+1;
    return a*b;
}
 
float moneyReceived(int currentmoney, float factor=1.04){
    return currentmoney * factor;
}

//int strlen(const char *p){

//}

int main(){
    int a, b;
    //cout<<"Entre the value of a and b "<<endl;
   // cin>>a>>b;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account , you will recive "<<moneyReceived(money)<< " Rs after 1 years"<<endl;
    cout<<"for vip If you have "<<money<<" Rs in your bank account , you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 years";
      
      
    return 0;
}