#include<iostream>
using namespace std;

int pos(int a[], int n, int x){
    if (n==0)
    {
        return -1;
    }
    if (a[n] == x) {
        return n;
    }

    int ans=pos(a,n-1,x);

    return ans;
    
}

int main(){
    int a[15]={11,5,34,5,5};
    int n=5;
    int x=995;
    cout<<pos(a,n-1,x);

    
    return 0;
}