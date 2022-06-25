#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n=7;
    while (i<=7)
    {
        if (i<=4)
        {
            int j=1;
            while (j<=4)
            {
                if (i+j>=5)
                {
                    cout<<"*";
                    j++;
                }
                else
                {
                    cout<<" ";
                    j++;
                }
            }
            int k=1;
            while (j>4 & i-k>=1)
            {
                cout<<"*";
                k++;    
            }
            
        }
        else
        {
            int j=1;
            while (j<=4)
            {
                if (abs(i-j)<=3)
                {
                    cout<<"*";
                    j++;
                }
                else
                {
                    cout<<" ";
                    j++;
                }
                
            }
            int k=i;
            while (n-k>0)
            {
                cout<<"*";
                k++;
            }
            
        }
        cout<<endl;
        i++;
        
        
    }
    
    return 0;
}