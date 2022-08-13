#include<iostream>
using namespace std;

int lpos(int a[],int n,int x){
    if (n==0)
    {
        return -1;
    }
    if (a[n]==x)
    {
        return n;
    }
    int ans=lpos(a,n-1,x);
    return ans;
    
    
    
}




int main(){
    int a[8]={1,1,1,1,1,1,1,1};
    int n=8;
    int x=1;
    cout<<lpos(a,n-1,x);
    return 0;
}