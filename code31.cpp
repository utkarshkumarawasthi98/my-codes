#include<iostream>
using namespace std;

int allindex(int a[],int n,int x,int output[]){
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
void pindex(int a[], int n,int x){
    int output[n];
    int size=allindex(a,n,x,output);
    cout<<"size of the output array : "<<size<<endl;
    cout<<"the index positions of the given number are :  ";
    for (int i = 0; i < size; i++)
    {
        cout<<output[i]<<" ";
    }
    
}


int main(){
    int a[16]={2,341,41,1,1,32,3,3,4,2,3,3342,3,3,4,5};
    int n=16;
    int x=3;
    pindex(a,n,x);
    return 0;
}