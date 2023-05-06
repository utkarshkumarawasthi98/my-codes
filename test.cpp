#include<iostream>
using namespace std;

void merge(int a[],int l,int mid,int r){
    int i=l;
    int j=mid+1; 
    int k=l;
    int b[l+1];
    
    while (j<=mid && j<=r)
    {class Solution {
public:
    int partitionString(string s) {
        
    }
};
        if(a[i]<a[j])
            b[k]=a[i];
            i++;

        b[k]=a[j];
        j++;
    }
    k++;
}

void mergesort(int a[],int l,int r){
    int mid=(l+r)/2;
    if(l<r)
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);

}
int main(){
    int a[8]={1,5,9,13,2,6,10,14};
    mergesort(a,0,7);
    for (int i = 0; i < 8; i++)
    {
        cout<<a[i]<<" ";
    }
    
return 0;
}