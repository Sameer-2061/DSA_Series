#include<bits/stdc++.h>
using namespace std;
// Problem Name:Delete a Node in Linked list
// Link:https://leetcode.com/problems/delete-node-in-a-linked-list/description/
// Code
class Solution{
    public:
    struct ListNode{
            int val;
            ListNode *next;
            ListNode(int x) : val(x), next(NULL) {}
}
        void deleteNode(ListNode* node){
            if(node==NULL || node->next==NULL){
                return;}
            node->val=node->next->val;
            ListNode* temp=node->next;
            node->next=node->next->next;
            delete temp;}
};
// TC:O(1)
// SC:O(1)
// Approach:Simply the value in the current node is being updated with the value of next of pointer value
// and then move the pointer of current node to replicate towards next to next node from the current node,
// by this we replace the node just next to current node.