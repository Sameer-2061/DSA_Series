#include<bits/stdc++.h>
using namespace std;
// Problem Name:Sort List
// Link:https://leetcode.com/problems/sort-list/description/
// Code
class Solution {
    public:
        ListNode* sortList(ListNode* head) {
            vector<int> ans;
            int n=ans.size();
            ListNode* temp=head;
            while(temp!=NULL){
                ans.push_back(temp->val);
                temp=temp->next;
            }
            sort(ans.begin(),ans.end());
            int i=0;
            temp=head;
            while(temp!=NULL){
                temp->val=ans[i];
                i=i+1;
                temp=temp->next;
            }
        return head;}
    };
// TC:O(N*(log(N))
// SC:O(1)
// Approach:Store all node values in a vector, sort the vector, then assign
//  the sorted values back to the linked list nodes.