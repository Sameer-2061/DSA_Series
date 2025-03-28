#include<bits/stdc++.h>
using namespace std;
// Problem Name:Doubly linked list insertion at given position
// Link:https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insert-a-node-in-doubly-linked-list
// Code
class Solution {
    public:
    struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x){data=x; next=prev=NULL; }
};
    Node *addNode(Node *head, int pos, int data){
        if(pos==1){
            Node* newNode=new Node(data);
            newNode->next=head;
            if(head!=NULL){
                head->prev=newNode;}
            return newNode;
        }
        Node* temp=head;
        int cnt=1;
        while(temp!=NULL && cnt<pos-1){
            temp=temp->next;
            cnt++;
        }
        if(temp==NULL){
            return head;
        } 
        Node* newNode=new Node(data);
        newNode->next=temp->next;
        if(temp->next!=NULL){
            temp->next->prev=newNode;
        }
        temp->next=newNode;
        newNode->prev=temp;
        return head;
        }
};
// TC:O(N)[worst case]
// SC:O(1)
// Approach:We first handle the case where the new node is inserted at the beginning by updating the
// head. Otherwise, we traverse the list to reach the node just before the desired position. If the 
// position is valid, we create a new node, adjust its `next` and `prev` pointers, and update adjacent
// nodes accordingly. If the position is out of bounds, we return the original head without modification.