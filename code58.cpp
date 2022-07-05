#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        /* code */
        int j=1;
        int h=1;
        while (j<=n)
        {
            /* code */
            if (/* condition */i+j>=n+1)
            {
                /* code */
               
                cout<<h;
                h++;
            }
            else
            {
                cout<<" ";
            }
            
            j++;
         
        }
        cout<<endl;
        i++;
    }
    



    
}