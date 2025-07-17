/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
GFG Link:https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1

*/

class Solution {
  public:
    Node* reverseList(Node* &prev,Node* &curr){
        while(curr!=NULL){
            Node* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        // Your Code here
        Node* prev=NULL;
        Node* newHead=reverseList(prev,head);
        int carry=1;
       
        Node* ptr=newHead;
        while(ptr->next!=NULL){
            int num=ptr->data+carry;
        carry=num/10;
        ptr->data=num%10;
        ptr=ptr->next;
        }
        
        int num=ptr->data+carry;
        carry=num/10;
        ptr->data=num%10;
        if(carry!=0){
            Node* temp=new Node(carry);
            ptr->next=temp;
            
        }
        
        prev=NULL;
        Node* ansHead=reverseList(prev,newHead);
        return ansHead;
        
        // return head of list after adding one
    }
};