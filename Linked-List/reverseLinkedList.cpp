#include<iostream>
using namespace std;
class node{
  public:
        int data;
        node* next;
  node(int value){
    this->data=value;
    this->next=NULL;
  }

};
void printLinkedList(node* head) {
  
  if(head == NULL){
    cout << "Linked List doesn't exist";
  }else{
    node* ptr=head;
    while(ptr!=NULL){
      cout << ptr->data <<"->";
      ptr=ptr->next;
    }
    cout << "NULL\n";

  }
}
void insertAtHead(int value,node* &head,node* &tail){
  node* newnode=new node(value);
  if(head == NULL && tail == NULL) {
    head=newnode;
    tail=newnode;
  }else{
    newnode->next=head;
    head=newnode;
  }
 
}
node* reverseIterative(node* head,node* &tail){
   tail=head;
   node* prev=NULL,*curr=head,*nextNode;
   while(curr!=NULL){
    nextNode=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextNode;
   }
   return prev;
}

node* reverseByRecursion(node* curr,node* prev){
        if(curr==NULL){
            return prev;
        }
        node* nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
        return reverseByRecursion(curr,prev);
    
}
void findMidNode(node* head){
  node* slow=head;
  node* fast=head;
  while(fast!=NULL&&fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
  cout<<slow->data<<endl;
}
int main(){
node* head = NULL;
    node* tail = NULL;
    insertAtHead(10, head, tail);
    insertAtHead(11, head, tail);
    insertAtHead(12, head, tail);
    insertAtHead(17, head, tail);
    insertAtHead(15, head, tail);
    printLinkedList(head);
    head=reverseIterative(head,tail);
    cout<<"After reversing"<<endl;
    printLinkedList(head);
    node* prev=NULL;
    node* curr=head;
    head=reverseByRecursion(curr,prev);
    cout<<"After reversing"<<endl;
    printLinkedList(head);
    findMidNode(head);

return 0;
}
    