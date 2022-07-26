#include<iostream>
using namespace std;

int allindex(int a[], int n, int x,int output[]){
    if (n==0)
    {
        return 0;
    }
    int ans=allindex(a,n-1,x,output);
    if (a[n-1]==x)
    {
        output[ans]=n-1;
        ans++;
    }
    return ans;
}
void pindex(int a[],int n,int x){
    int output[n];
    int size= allindex(a,n,x,output);
    for (int i = 0; i < size; i++)
    {
        cout<<output[i]<<" ";
    }
}
int main(){
    int a[7]={1,2,43,4,4,5,3};
    int n=7;
    int x=4;
    pindex(a,n,x);
    return 0;
}