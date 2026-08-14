/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 * LeetCode:https://leetcode.com/problems/linked-list-cycle-ii/
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         unordered_map<ListNode*,bool>mp;
        ListNode* ptr=head;
        while(ptr!=NULL){
            if(mp[ptr]==true)
            return ptr;
            mp[ptr]=true;
            ptr=ptr->next;
        }
        return NULL;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode* hasCycle(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast!=NULL&&fast->next!=NULL){
            
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast)
//             return slow;
//         }
//         return nullptr;
//     }
//     ListNode *detectCycle(ListNode *head) {
//          ListNode* fast=hasCycle(head);
//         if(!fast){
//             return nullptr;
//         }
//        ListNode* slow=head;
//        while(slow!=fast){
        
//         slow=slow->next;
//         fast=fast->next;
//        }
//         return slow;
//     }
// };