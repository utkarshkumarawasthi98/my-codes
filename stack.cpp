#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    unordered_map<string,int> m;
    m["love"]=11;
    m["babbar"]=2;
    m["hello"]=1;
    m["baby"]=5;
    m["kid"]=6;
    unordered_map<string,int> :: iterator it=m.begin();
    while (it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}