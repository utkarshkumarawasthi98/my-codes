#include<iostream>
using namespace std;

bool sort(int a[] ,int n){
    if (n==0 || n==1)
    {
        return true;
    }
 
    else if (a[0] > a[1])
    {
        return false;
    }
    return sort(a+1 , n-1);
}
int main(){
    int a[5]={11,23,44,56,6};
    int n =5;
    
    if (sort(a,n))
    {
        cout<<"sorted";
    }
    else
    {
        cout<<"not sorted";
    }
    return 0;
}