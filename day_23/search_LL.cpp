#include<bits/stdc++.h>
using namespace std;
// Problem Name:Search in Linked list
// Link:https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-linked-list-1664434326
// Code
class Solution {
  public:
  struct Node{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; 
    bool searchKey(int n, Node* head, int key) {
        if(n<0 || head==NULL){
            return false;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;}
    return false;}
};
// TC:O(N)
// SC:O(1)
// Approach:In this we will check whether the linked list is empty if yes then we will directly assign false,
// if not then we make node as temp (temp=head) will go upto end till the temp->next is not null 
// inside which we will check that whether temp->data==key if yes we return trueif not we will move temp=temp->next
// in all other cases return false.