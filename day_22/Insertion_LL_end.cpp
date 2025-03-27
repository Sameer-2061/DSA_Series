#include<bits/stdc++.h>
using namespace std;
// Problem Name:Linked list Insertion at end
// Link:https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=linked-list-insertion
// Code
class Solution {
    public:
    struct Node {
        int data;
        struct Node * next;
        Node(int x) {
          data = x;
          next = NULL;
        }
      Node *insertAtEnd(Node *head, int x) {
          if(head==NULL){
              Node* ans=new Node(x);
              return ans;}
          Node* temp=head;
          while(temp->next!=NULL){
              temp=temp->next;}
          Node* newNode= new Node(x);
          temp->next=newNode;
          return head;}
}
};
// TC:O(N)
// SC:O(1)
// Approach:In this first we will check that whether the linked list is empty or not,if it is empty just create new node.
// if it is not empty traverse through the last node just assigning head as temp and shifting temp to temp->next until
// temp->next is not null,At reaching there then just create new node and make sure to connect temp's next node to new node.