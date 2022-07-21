#include<iostream>
using namespace std;

int main(){
    int n=88888;
    int s=0;
    int temp=n;
    while (temp>0)
    {
        
        int c=temp%10;
        if (c%2==0)
        {
            
            s=s+c;
        }
        temp=temp/10;
    }
    cout<<s;



    return 0;
}