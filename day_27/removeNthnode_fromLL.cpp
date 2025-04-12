#include<bits/stdc++.h>
using namespace std;
// Problem Name:Remove nth node from end of Linked list
// Link:https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
// Code
class Solution{
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* slow=head;
            ListNode* fast=head;
            for(int i=0;i<n;i++){
                fast=fast->next;
            }
            if(fast==NULL){
                return head->next;
            }
            while(fast->next!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            ListNode* delNode=slow->next;
            slow->next=slow->next->next;
            delete delNode;
            return head;}
    };
// TC:O(N)
// SC:O(1)
// Approach:Use two pointers. Move fast n steps ahead, then move both slow and fast until 
// fast reaches the end. Slow will point to the node before the target. Remove the target node.