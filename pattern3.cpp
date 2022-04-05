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
        while (j<=n)
        {
            /* code */
            cout<<char('A'+i+j-2)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    



    return 0;
}