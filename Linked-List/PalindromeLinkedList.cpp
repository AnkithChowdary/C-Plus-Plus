/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * 
 * LeetCode 234
 */
class Solution {
public:
    ListNode* getMiddle(ListNode* head,ListNode* &prev){
        ListNode* slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* prev,ListNode* curr){
        
          while(curr!=NULL){
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
          }
          return prev;
    }
    bool isPalindrome(ListNode* head) {
        // Travel till the middle node and break the linked in list into two halfs and compares them 
        ListNode* middleNodePrev=NULL;
        ListNode* middleNode=getMiddle(head,middleNodePrev);
        if(middleNodePrev!=NULL)
        middleNodePrev->next=NULL;
        ListNode* newHead=reverseList(NULL,middleNode);
        ListNode* ptr1=head;
        
        while(ptr1!=NULL){
            if(ptr1->val!=newHead->val){
                return false;
            }
            ptr1=ptr1->next;
            newHead=newHead->next;
        }
        return true;
        
    }
};