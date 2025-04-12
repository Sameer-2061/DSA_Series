#include<bits/stdc++.h>
using namespace std;
// Problem Name:Remove LL elements
// Link:https://leetcode.com/problems/remove-linked-list-elements/description/
// Code
class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            ListNode* ans=new ListNode(0, head);
            ListNode* dummy=ans;
            while(dummy!=NULL){
                while(dummy->next!=NULL && dummy->next->val==val){
                    dummy->next=dummy->next->next;
                    }
                dummy=dummy->next;
                }
            ListNode* result=ans->next;
            delete ans;
            return result;
        }
    };
// TC:O(N)
// SC:O(1)
// Approach:Use a dummy node pointing to the head. Traverse the list and skip nodes whose value matches
// the target. Return the updated list starting from dummy’s next. 