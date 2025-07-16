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
int getLength(node* head){
  int len=0;
  node* temp=head;
  while(temp!=NULL){
    temp=temp->next;
      len++;
  }
  return len;
}
void insertAtPosition(int position, int value, node* &head, node* tail) {
  int length=getLength(head);

  if(position == 1) {
    insertAtHead(value, head, tail);
  }
  else if(position == length + 1){
    insertAtTail(value, head, tail);
  }else{
    node* temp=head;
    for(int i=1;i<=position-2;i++){
      temp=temp->next;
    }
    node* newnode=new node(value);
    newnode->next=temp->next;
    temp->next=newnode;
  }
}
void deleteHead(int pos,node* &head,node* &tail){
  if(head==NULL&&tail==NULL){
    cout<<"List is emmpty"<<endl;
  }else{

  if(head==tail){
    node *temp=head;
    head=NULL;
    tail=NULL;
    free(temp);
  }
    
  }
}

void searchElement(int val,node* &head,node*tail){
  node *ptr=head;
  int pos=0;
  if(val==head->data)
  cout<<pos+1<<endl;
  else{
    while(ptr!=NULL){
      if(ptr->data==val){
        cout<<pos+1<<endl;
      }
      pos++;
      ptr=ptr->next;
    }
  }
  if(ptr==NULL){
    cout<<-1<<endl;
  }

}



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

void deleteElement(node* &head,node* &tail,int element){
    
    node* temp=head;
    node* prev=NULL;

    if(head->data==element){
      head=head->next;
      free(temp);
      cout<<"Successfully deleted  at head "<<endl;
      printLinkedList(head);
      return;
    }
    while(temp!=NULL&&temp->data!=element){
      prev=temp;
       temp=temp->next;
    }
    if(temp==NULL){
      cout<<"No element to delete"<<endl;
    }else{
      if(tail==temp){
        tail=prev;
      }
      cout<<"Successfully deleted"<<endl;
    prev->next=temp->next;
    free(temp);
     printLinkedList(head);
    }

}


void deletePosition(node* &head,node* &tail,int position){
  if(head==NULL){
    return;
  }
  int cnt=1;
  node* curr=head;
  node* prev=NULL;
  if(position==1)
  
  node* temp=NULL;
  while(curr!=NULL&&cnt<position){
    prev=curr;
    curr=curr->next;
    cnt++;
  }
   
  
  if(tail==curr){
     tail=prev;
  }
  if(curr==head){
    head=head->next;
    
  }
  prev->next=curr->next;

  free(curr);
  printLinkedList(head);
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
    insertAtPosition(3,4,head,tail);
    printLinkedList(head);
    searchElement(12,head,tail);
    deleteElement(head,tail,4);

    deletePosition(head,tail,2);


    return 0;
}