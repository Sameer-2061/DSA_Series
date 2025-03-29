#include<bits/stdc++.h>
using namespace std;
// Problem Name:Delete A Doubly Linked list
// Link:https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-node-in-doubly-linked-list
// Code
class Solution {
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
    Node* deleteNode(Node* head, int x) {
        Node* temp=head;
        Node* newNode=NULL;
        if(x==1){
            head=head->next;
            if(head!=NULL){
            head->prev=NULL;}
            delete temp;
            return head;}
        int cnt=1;
        while(temp!=NULL && cnt<x){
            temp=temp->next;
            cnt++;
        }
        if(temp->prev!=NULL){
            temp->prev->next=temp->next;}
        if(temp->next!=NULL){
            temp->next->prev=temp->prev;}
    delete temp;
    return head;}
  };
// TC:O(N)
// SC:O(1)
// Approach:Simple 