#include<iostream>
using namespace std;

int fib(int n){
    if (n==1)
    {
        return 1;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2) ;
    }    
}

int main(){
    int n;
    cout<<"enter the starting term which you want  ";
    cin>>n;
    int m;
    cout<<"enter the last term till where you want  ";
    cin>>m;

    for (int i = n; i < m+1; i++)
    {
        cout<<fib(i)<<" ";
    }    
    return 0;
}