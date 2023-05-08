#include<iostream>
#include<stack>
using namespace std;



int main(){
    stack<char> s;
    s.push('l');
    s.push('o');
    s.push('v');
    s.push('e');
    s.push('u');
    cout<<s.size()<<endl;

    while (!s.empty())
    {
        /* code */
        cout<<"yesss"<<endl;
        s.pop();
    }
    


    return 0;
}

