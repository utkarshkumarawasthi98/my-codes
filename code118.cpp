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
    int a[5];
    int n =5;
    cout<<"enter the elements of arrays ";
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    
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