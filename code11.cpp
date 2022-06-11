#include<iostream>
using namespace std;

int main(){
    int b[] ={1,2,3,4,5};
    int c[5]; 
    int l=5;
   for (int i = 0; i < 5; i++)
    {

        c[i]=b[l-1];
        l=l-1;
    }
    

    for (int i = 0; i < 5; i++)
     {
       cout<<c[i];
     }
    
    
    
    return 0;
}