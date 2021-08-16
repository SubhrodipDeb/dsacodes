#include<iostream>
using namespace std;
//REVERSE  A LINKED LIST
class node
{
    public:
        int data;
        node* next;
        node(int val){
            data=val;
            next=NULL;
        }
};
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    )
    return l;
}
void kappend(node* &head,int k)
{
    node* newtail;
    node* newhead;
    node* tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
//node* reverse(node* &head){
  //  node* prevptr=NULL;
    //node* currptr=head;
    //node* nextptr;

    //while(currptr!=NULL){
      //  nextptr=currptr->next;
        //currptr->next=prevptr;

        //prevptr=currptr;
       // currptr=nextptr;
    //}
   // return prevptr;
//}


//node* reverseRecursive(node* &head){
  //  if(head==NULL || head->next==NULL){
    //    return head;
    ///}
   // node* newhead=reverseRecursive(head->next);
   // head->next->next=head;
    //head->next=NULL;
    //return newhead;
//
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    node* newhead=kappend(head,3);
    display(newhead);
    return 0;
}