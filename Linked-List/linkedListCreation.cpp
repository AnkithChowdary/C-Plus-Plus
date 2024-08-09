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
void insertAtTail(int value,node * &head,node* &tail){
  node* newnode=new node(value);
    if(head==NULL&&tail==NULL){
      
      head=newnode;
      tail=newnode;
    }else{
      tail->next=newnode;   // Current last node connection with newnode
      tail=newnode;         // Newnode is the tail
    }
}

void printLinkedList(node* head){
  
  if(head == NULL){
    cout << "Linked List doesn't exist";
  }else{
    node* ptr=head;
    while(ptr!=NULL){
      cout << ptr->data <<"->";
      ptr=ptr->next;
    }
    cout<<"NULL\n";

  }
}


int main() {
    node* head = NULL;
    node* tail = NULL;
    insertAtHead(10, head, tail);
    insertAtHead(11, head, tail);
    insertAtHead(12, head, tail);
    printLinkedList(head);
    insertAtTail(13,head,tail);
    insertAtTail(14,head,tail);
    printLinkedList(head);
    return 0;
}