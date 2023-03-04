#include<iostream>
using namespace std;

int main(){
    int n=7;
    int b[n] ;
    for (int i = 0; i <= (n-1)/2; i++)
    {
        b[i]=2*i +1;
        
    }
    int k= 2*(n/2);
    for (int i = ((n-1)/2+1) ; i < n; i++)
    {
        b[i]=k;
        k=k-2;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i];
    }
    
    
    
    return 0;
}