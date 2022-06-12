#include<iostream>
using namespace std;

int lpos(int a[], int n,int x){
    if (n==0)
    {
        return -1;
    }
    int ans=lpos(a+1,n-1,x);
    if (ans== -1)
    {
        return ans+1;
    }
    if (a[0]==x)
    {
        return 0;
    }
    else
    {
        return ans+1;
    }
    
}
int main(){
    int a[8]={11,1,2,3,43,4,4,3};
    int n=8;
    int x=11;
    cout<<lpos(a,n,x);
    return 0;
}