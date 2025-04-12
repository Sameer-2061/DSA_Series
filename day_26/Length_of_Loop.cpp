#include<bits/stdc++.h>
using namespace std;
// Problem Name:Length of loop in LL
// Link:https://www.geeksforgeeks.org/problems/find-length-of-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-length-of-loop
// Code
class Solution {
    public:
     int findlen(Node* slow, Node* fast){
         fast=fast->next;
         int cnt=1;
         while(slow!=fast){
             fast=fast->next;
             cnt++;
         }
     return cnt;}
      // Function to find the length of a loop in the linked list.
      int countNodesinLoop(Node *head) {
          Node* slow=head;
          Node* fast=head;
          while(fast!=NULL && fast->next!=NULL){
              slow=slow->next;
              fast=fast->next->next;
              if(slow==fast){
                  return findlen(slow,fast);
              }
          }
      return 0;}
  };
// TC:O(N)
// SC:O(1)
// Approach:Use Floyd’s cycle detection to find the meeting point. Once a cycle is detected, move one pointer
//  inside the loop until it meets the other again to count the number of nodes in the loop.

