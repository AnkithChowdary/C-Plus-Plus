/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 * LeetCode 141
 */ 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,bool>mp;
        ListNode* ptr=head;
        while(ptr!=NULL){
            if(mp[ptr]==true)
            return true;
            mp[ptr]=true;
            ptr=ptr->next;
        }
        return false;
    }
};