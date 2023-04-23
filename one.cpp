
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int value){
        data=value;
        next=NULL;
    }


};

void insertIntoHead(node* &head,int value){
    node* new_node=new node(value);
    new_node->next=head;
    head=new_node;

}

void display(node* head){
    node*temp=head;
    while (temp!= NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    

}


int main(){
    node* head=NULL;
    insertIntoHead(head,22);
    display(head);

     return 0;
}
