#include<bits/stdc++.h>
using namespace std;
// Problem Name:Copy list with random pointers
// Link: https://leetcode.com/problems/copy-list-with-random-pointer/description/
// Code
class Solution {
    public:
        Node* copyRandomList(Node* head) {
            if(!head) return head;
            Node* temp=head;
            map<Node*,Node*> mpp;
            Node* head1=new Node(head->val);
            mpp[head]=head1;
            Node* temp1=head1;
            while(temp->next){
                temp1->next=new Node(temp->next->val);
                temp1=temp1->next;
                temp=temp->next;
                mpp[temp]=temp1;
            }
            temp=head;
            temp1=head1;
            while(temp){
                if(temp->random){
                    temp1->random=mpp[temp->random];
                }
                temp=temp->next;
                temp1=temp1->next;
            }
            return head1;
        }
    };
// TC:O(N)
// SC:O(N)
// Approach:Create a deep copy of the list using a hashmap to store the mapping from original nodes 
// to copied nodes. First, copy the next pointers, then set the random pointers using the map.