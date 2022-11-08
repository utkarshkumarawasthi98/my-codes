#include<iostream>
using namespace std;

int main(){
    int b[3];
    b[1]=99;
    b[2]=11;
    b[0]=23;
    cout<<b[0]<<b[1]<<b[2];
    b[1]=79;
    cout<<b[1];
    return 0;
}