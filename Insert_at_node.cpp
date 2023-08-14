#include<iostream>
using namespace std;


 int perm(int i,int j){
        int answer=1;
        int n=i;
        for(int i=1;i<=j;i++){
            answer=answer*n;
            n--;
            answer=answer/(i);
        }
        return answer;
    }


int main(){


    long long ans=perm(10000,2);
    cout<<ans;
    return 0;
}