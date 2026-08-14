#include <iostream>
#include<vector>
using namespace std;


class Node{
  public:
  Node* prev;
  int data;
  Node* next;

  Node(int value){
    data=value;
    prev=NULL;
    next=NULL;
  }
};
void printLinkedList(Node *head){
  Node* ptr=head;
  while(ptr!=NULL){
    cout<<ptr->data<<"->";
    ptr=ptr->next;
  }
  cout<<"NULL"<<endl;
}
int getLength(Node* head){
  int cnt=0;
  Node* ptr=head;
  while(ptr!=NULL){
    cnt++;
    ptr=ptr->next;
  }
  return cnt;
}

void insertAtHead(Node* &head,Node* &tail,int val){
  
  Node *newNode=new Node(val);
   cout<<"Insertion at head"<<endl;
  if(head==NULL&&tail==NULL){
    head=newNode;
    tail=newNode;
    
  }else{
  head->prev=newNode;
  newNode->next=head;
  head=newNode;
 
  
  }
  printLinkedList(head);
}

void printReverse(Node *tail){
  Node* ptr=tail;
  while(ptr!=NULL){
    cout<<ptr->data<<"->";
    ptr=ptr->prev;
  }
  cout<<"NULL"<<endl;
}

void insertAtTail(Node* &head,Node* &tail,int val){
  Node* newNode=new Node(val);
   if(head==NULL&&tail==NULL){
      head=newNode;
      tail=newNode;
   }else{
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
   }
   cout<<"Insertion at tail"<<endl;
   printLinkedList(head);
}

void insertPosition(Node* &head,Node* &tail,int position,int val){
  
  int length=getLength(head);
  if(position==1){
     insertAtHead(head,tail,val);
  }else if(position<=0||position>length+1){
      cout<<"Invalid position"<<endl;
  }else if(position==length+1){
    insertAtTail(head,tail,val);
  }else{
    Node *newNode=new Node(val);
  Node* ptr=head;
   int cnt=1;
   while(cnt<position){
    ptr=ptr->next;
    cnt++;
   }
   newNode->next=ptr;
   newNode->prev=ptr->prev;

   ptr->prev->next=newNode;
   ptr->prev=newNode;

   
  }

  cout<<"Insertion at Position "<<position<<endl;
  printLinkedList(head);
}
void deleteAtHead(Node* &head,Node* &tail){
   if(head==NULL&&tail==NULL){
    cout<<"LinkedList is empty"<<endl;
   }else{
    Node* temp=head;
    if(head==tail){
      
      head=NULL;
      tail=NULL;
      free(temp);
    }else{
    
    head=head->next;
    head->prev=NULL;
    delete temp;
    }
   }
}
void deleteAtTail(Node* &head,Node* &tail){
  
  if(head==NULL&&tail==NULL){
    cout<<"LinkedList is empty"<<endl;
   }else{
    Node* temp=tail;
    if(head==tail){
       head=NULL;
      tail=NULL;
    
    }else{
    tail=tail->prev;
    tail->next=NULL;
    }
     delete temp;
   }

}
void deletePos(Node* &head,Node* &tail,int position){
    int length=getLength(head);
    if(position<=0||position>length){
      cout<<"Invalid position"<<endl;
      return;
    }
    if(position==1){
      deleteAtHead(head,tail);
    }else if(position==length){
      deleteAtTail(head,tail);
    }else{
      int cnt=1;
      Node* temp=head;
      while(cnt<position){
        temp=temp->next;
          cnt++;
      }
      temp->prev->next=temp->next;
      temp->next->prev=temp->prev;
      delete temp;
      printLinkedList(head);
    }

    
    
}
void deleteElement(Node* &head,Node* &tail,int val){
  if(head==NULL&&tail==NULL){
    cout<<"Nothing to delete"<<endl;
    return;
  }
if(head->data==val){
  deleteAtHead(head,tail);
}else if(tail->data==val){
  deleteAtTail(head,tail);
}else{
  Node *ptr=head;
  while(ptr!=NULL&&ptr->data!=val){
    ptr=ptr->next;
  }

  if(ptr==NULL){
    cout<<"Element not found"<<endl;
  }else{
    if(ptr->prev!=NULL){
      ptr->prev->next=ptr->next;
      ptr->next->prev=ptr->prev;
    }
    free(ptr);
    cout<<"ELement successfully deleted"<<endl;
    printLinkedList(head);
    
  }
}
}







int main() {
  Node* head=NULL;
  Node* tail=NULL;
  insertAtHead(head,tail,5);
  insertAtHead(head,tail,41);
  insertAtTail(head,tail,12);
  insertAtTail(head,tail,7);
  insertAtHead(head,tail,15);
  printReverse(tail);
  insertPosition(head,tail,2,42);
  cout<<"Printing reverse"<<endl;
  printReverse(tail);
  cout<<"Deleting at a position"<<endl;
  deletePos(head,tail,3);
  deleteElement(head,tail,5);
    return 0;
}