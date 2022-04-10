#include<iostream>
#include<string>
using namespace std;

class binary{

    private:
        string s;
    public:
        void read();
        void chkbin();
        void onescomp();
        void display();

};
void binary::read(){
    cout<<"enter string s"<<endl;
    cin>>s;
}

void binary::chkbin(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"not a binary"<<endl;
            exit(0);
        }
        
    }

}

void binary::onescomp(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
    
}

void binary::display(){
    cout<<"displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    b.chkbin();
    b.display();
    b.onescomp();
    b.display();
    
    return 0;
}
