#include<bits/stdc++.h>
using namespace std;
// Problem Name:Pallindrome in Linked list
// Link:https://leetcode.com/problems/palindrome-linked-list/
// Code
class Solution {
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* Front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=Front;}
        return prev;}
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;}
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;}
            ListNode* newhead=reverseList(slow->next);
            ListNode* first=head;
            ListNode* second=newhead;
            while(second!=NULL){
                if(first->val != second->val){
                    reverseList(newhead);
                    return false;
                } 
                first=first->next;
                second=second->next;
            }
            reverseList(newhead);
            return true;
    }
};
// TC:O(n)
// SC:O(1)
// Approach:Find the middle of the list using slow and fast pointers. Reverse the second half and compare 
// it with the first half. Restore the list before returning.

