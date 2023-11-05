#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
//This will not swap a and b
void swap(int a, int b){ //Temp a b
    int temp = a;        // 4   4 5
    a = b;               // 4   5 5
    b = temp;            // 4   5 4
}
//call by reference using pointers
void swappointer(int* a, int* b){ //Temp a b
    int temp = *a;               // 4   4 5
    *a = *b;                     // 4   5 5
    *b = temp;                   // 4   5 4
}
//call by reference using c++ reference variables
int & swapreferencevar(int &a, int &b){ //Temp a b
    int temp = a;               // 4   4 5
    a = b;                     // 4   5 5
    b = temp;                   // 4   5 4
    return b;
}
int main(){
    int x=4, y=5;
    //cout<<"The sum is 4 of 5 is "<<sum(a,b);
    cout<<"The value of X "<<x<<"  and The value of y is "<<y<<endl;
    //swap(x, y);//This will not swap a and b
    //swappointer(&x, &y);//This will  swap a and b using pointers reference
    swapreferencevar(x, y) = 1089; //This will swap a and b using reference variables
    cout<<"The value of x "<<x<<" and The value of y is "<<y<<endl;

    return 0; 
}