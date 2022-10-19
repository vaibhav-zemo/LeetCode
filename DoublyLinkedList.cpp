#include<bits/stdc++.h>
using namespace std;


class node{

    public:
    node* prev;
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }    
};

void InsertAtHead(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    head->prev=n;
    n->next=head;
    head=n;
    
}

void InsertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;  
    return ;
}

void Delete(node* &head, int val){
    node* temp=head;
    if(head==NULL){
        cout<<"Linked List is Empty"<<endl;
    }
    if(head->data==val){
        head=temp->next;
        temp->next->prev=NULL;
        delete temp;
        return;
    }
    while(temp->data!=val){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    delete temp;
    return;
}
 

void display(node* head){
    node* temp=head;
    if(head==NULL){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int main(){
    node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,6);
    InsertAtTail(head,11);
    InsertAtHead(head,10);
    Delete(head,10);
    display(head);
}