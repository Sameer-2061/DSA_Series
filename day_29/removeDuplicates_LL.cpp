#include<bits/stdc++.h>
using namespace std;
// Problem Name:Remove duplicates from sorted list 2
// Link:https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/
// Code
class Solution {
    public:
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode *dummy=new ListNode(0,head);
      ListNode *prev=dummy;
      while(head!=NULL){
          if(head->next!=NULL && head->val==head->next->val){
              while(head->next!=NULL && head->val==head->next->val)head=head->next;
              prev->next=head->next;
              }   
          else{
              prev=prev->next;}           
              head=head->next;
          }
          return dummy->next;   
      }
  };
// TC:O(N)
// SC:O(1)
// Approach:Use a dummy node and traverse the list. If duplicates are found (consecutive same values), 
// skip all of them by adjusting pointers; else move the prev pointer forward.