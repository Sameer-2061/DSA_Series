#include<bits/stdc++.h>
using namespace std;
// Problem Name:Cycle in Linked list
// Link:https://leetcode.com/problems/linked-list-cycle/description/
// Code
class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode* slow=head;
            ListNode* fast=head;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast){
                    return true;
                }
            }
        return false;    
        }
    };
// TC:O(N)
// SC:O(1)
// Approach:Use two pointers (slow and fast). Move slow by one step and 
// fast by two steps. If they meet, a cycle exists.