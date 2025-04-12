#include<bits/stdc++.h>
using namespace std;
// Problem Name:Reverse nodes in kth group
// Link:https://leetcode.com/problems/reverse-nodes-in-k-group/description/
// Code
class Solution {
    public:
        ListNode* reverseLinkedlist(ListNode* head) {
            ListNode* temp=head;
            ListNode* prev=NULL;
            while(temp!=NULL){
                ListNode* Front=temp->next;
                temp->next=prev;
                prev=temp;
                temp=Front;}
            return prev;}
        ListNode* getKthNode(ListNode* temp,int k){
            k=k-1;
            while(temp!=NULL && k>0){
                k--;
                temp=temp->next;}
        return temp;}
        ListNode* reverseKGroup(ListNode* head, int k) {
            ListNode* temp=head;
            ListNode* prevLast=NULL;
            while(temp!=NULL){
                ListNode* kthNode=getKthNode(temp,k);
                if(kthNode==NULL){
                    if(prevLast){
                        prevLast->next=temp;
                        break;}}
                ListNode* nextNode=kthNode->next;
                kthNode->next=NULL;
                reverseLinkedlist(temp);
                if(temp==head){
                    head=kthNode;}
                else{
                    prevLast->next=kthNode;}
                prevLast=temp;
                temp=nextNode;}
        return head;}
    };
// TC:O(N)
// SC:O(1)
// Approach:Traverse the list in groups of k. For each group, reverse the nodes and reconnect the reversed
// group to the previous part of the list. Continue until fewer than k nodes remain