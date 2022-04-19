#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    int k=1;
    cin>>n;
    while (k<=n)
    {
        if ((3*i+2) %4 !=0)
        {
            cout<<(3*i+2)<<endl;
            i++;
            k++;
        }
        else
        {
            i++;
        }
        
        
    }
    
    
    return 0;
}