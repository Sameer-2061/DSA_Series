#include<bits/stdc++.h>
using namespace std;
// Problem Name:Reverse A Doubly Linked list
// Link:https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-a-doubly-linked-list
// Code
class Solution{
    public:
      int data;
      DLLNode *next;
      DLLNode *prev;
      DLLNode(int val){
          data=val;
          this->next=NULL;
          this->prev=NULL;}
      DLLNode* reverseDLL(DLLNode* head) {
        DLLNode* temp=head;
        DLLNode* newNode=NULL;
        while(temp!=NULL){
            newNode=temp->prev;
            temp->prev=temp->next;
            temp->next=newNode;
            newNode=temp;
            temp=temp->prev;}
      return newNode;}
  };
// TC:O(N)
// SC:O(1)
// Approach:In this we have to declare a node as temp which stores head and currNode which is assign to NULL,
// then traverse through each node in linked list and at every step swap node->prev with node->next and vice versa
// then the node created by us currNode store temp and then also store temp->prev.