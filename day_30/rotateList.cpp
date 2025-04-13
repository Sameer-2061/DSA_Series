#include<bits/stdc++.h>
using namespace std;
// Problem Name:Rotate List
// Link: https://leetcode.com/problems/rotate-list/ 
// Code
class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
            if(head==0 || head->next==0 || k==0){
                return head;}
            int cnt=0;
            ListNode* temp=head;
            while(temp!=NULL){
                cnt++;
                temp=temp->next;
            }
            k=k % cnt;
            if(k==0){
                return head;}
            int stopAt=cnt-k;
            temp=head;
            for(int i=1;i<stopAt;i++){
                temp=temp->next;}
            ListNode* newHead=temp->next;
            temp->next=NULL;
            temp=newHead;
            while(temp->next!=NULL){
                temp=temp->next;}
            temp->next=head;
        return newHead;}
    };
// TC:O(N)
// SC:O(1)
// Approach:Count the total number of nodes. Compute effective rotation as k % length. Break the list at the
// (length - k)-th node, make the next node the new head, and connect the old tail to the original head.