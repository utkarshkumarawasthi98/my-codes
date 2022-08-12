#include<iostream>
using namespace std;

int pos(int a[] ,int n,int x){
    if (n==0)
    {
        return -1;
    }
    if (a[0]==x)
    {
        return 0;
    }
    int ans=pos(a+1,n-1,x);
    if (ans==-1)
    {
        return -1;
    }
    return ans+1;
    
}


int main(){
    int a[7]={1,2,3,4,4,4,5};
    int n=7;
    int x=4;
    cout<<pos(a,n,x);
    return 0;
}