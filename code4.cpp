#include<iostream>
using namespace std;

int main(){
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin>>b[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (b[i] == 22)
        {
            /* code */
            cout<<i+1;
                break; 
        }
        else if (i==4 & b[4]!= 22)
        {
            /* code */
            cout<<-1;
        }
        
        
    
    }
    


    return 0;
}