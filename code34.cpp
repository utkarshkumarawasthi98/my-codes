#include <iostream>
using namespace std;

int allindex(int a[], int n , int x, int output[]){
    if (n==0)
    {
        return 0;
    }
    int ans= allindex(a+1,n-1,x,output);
    if (a[0]==x)
    {
        for (int i = ans-1; i >= 0; i--)
        {
            output[i+1]=output[i]+1;
        }
        output[0]=0;
        ans++;
        
    }
    else
    {
        for (int i = ans-1; i >=0; i--)
        {
            output[i]=output[i]+1;
        }
        
    }
    return ans;
}
void pindex(int a[], int n, int x){
    int output[n];
    int size=allindex(a,n,x,output);
    for (int i = 0; i < size; i++)
    {
        cout<<output[i]<<" ";
    }
}
int main(){
    int a[7]={2,33,4,45,2,4,2};
    int n=7;
    int x=2;
    pindex(a,n,x);
    return 0;
}