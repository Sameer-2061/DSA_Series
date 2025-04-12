#include<bits/stdc++.h>
using namespace std;
// Problem Name:Middle of Linked List
// Link:https://leetcode.com/problems/middle-of-the-linked-list/description/
// Code
class Solution {
    public:
       ListNode* middleNode(ListNode* head) {
       ListNode* slow=head;
       ListNode* fast=head;
       while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }return slow;}
    };
// TC:O(N)
// SC:O(1)
// Approach:Use two pointers (slow and fast). Move slow by one step 
// and fast by two steps. When fast reaches the end, slow will be at the middle.