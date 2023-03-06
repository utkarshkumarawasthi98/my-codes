#include<iostream>
using namespace std;

int main(){
    int k=1;
    int n=6;
    int l=n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        if (k%i != 0)
        {
            /* code */
            b[i]=k;
            k++;
        }
        else if (k%i == 0)
        {
            /* code */
            b[l-i]=k;
            k++;
        }
    cout<<k;
    for (int i = 0; i < n; i++)
    {
            /* code */
            cout<<b[i];
     }
        
        
        
    }
    cout<<b[2];
    
    return 0;
}