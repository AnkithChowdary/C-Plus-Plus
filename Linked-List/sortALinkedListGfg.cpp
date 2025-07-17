/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
    GFG URL:https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
};*/ 
class Solution {
  public:
    void insertAtTail(Node* &newNode,Node* &head,Node* &tail){
        if(head==NULL&&tail==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    Node* segregate(Node* head) {
        // code here
        Node* zeroHead=NULL;
        Node* zeroTail=NULL;
        
        Node* oneHead=NULL;
        Node* oneTail=NULL;
        
        Node* twoHead=NULL;
        Node* twoTail=NULL;
        
        
        Node* ptr=head;
        while(ptr!=NULL){
            Node* toMove=ptr;
            ptr=ptr->next;
            toMove->next=NULL;
            if(toMove->data==0){
                insertAtTail(toMove,zeroHead,zeroTail);
            }else if(toMove->data==1){
                 insertAtTail(toMove,oneHead,oneTail);
            }else{
                 insertAtTail(toMove,twoHead,twoTail);
            }
        }
        if(zeroHead!=NULL){
            if(oneHead!=NULL){
                // If one list is non empty
                zeroTail->next=oneHead;
              
                    oneTail->next=twoHead;
                
            }else{
                // if one list is empty
                zeroTail->next=twoHead;
            }
            return zeroHead;
        }else{
            
            if(oneHead!=NULL){
                oneTail->next=twoHead;
                return oneHead;
            }else{
                return twoHead;
            }
            
        }
        
    }
};