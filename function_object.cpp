#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //Function object: (functor) function wrapped in a class so that 
    int arr[] = {1, 4, 5, 7};
    sort(arr, arr+5);
    sort(arr, arr+5, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}