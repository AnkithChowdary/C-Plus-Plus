/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * LeetCode:https://leetcode.com/problems/reverse-nodes-in-k-group/description/
 * GFG: https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
 */
class Solution {
public:
    int getLength(ListNode* head){
        int cnt=0;
        ListNode* ptr=head;
        while(ptr!=NULL){
            ptr=ptr->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        // If list is empty or only single element is present
        if(head==NULL||head->next==NULL){
            return head;
        }

        // atleast 2 node , or ->1nodes
        // 1 Case hum krenge , baaki recursion
        // 1 Case->k length ko reverse krna hai
    ListNode* prev=NULL;
    ListNode* curr=head;
     int position=0;
     int len=getLength(head);
     if(len<k){
        return head;
     }
     while(position<k){
        ListNode* nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
        position++;

     }   
     if(curr!=NULL){
        ListNode* recursionHead=reverseKGroup(curr,k);
        head->next=recursionHead;
     }
     return prev;
        
    }
};