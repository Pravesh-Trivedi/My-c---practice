#include<iostream>
using namespace std;

int main(){
    int N=5;
    int sum=0, total;
    int A[] = {1,2,3,5};
     
    
    total = (N*(N+1))/2;
    for (int i = 0; i<N-1; i++)
    {
       sum = sum+A[i];
        
    }
    cout<<total-sum<<endl;

    return 0;
}
