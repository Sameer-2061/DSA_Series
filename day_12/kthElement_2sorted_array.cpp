#include<bits/stdc++.h>
using namespace std;
// Problem Name:Kth Element of two array 
// Link:https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=k-th-element-of-two-sorted-array
// Code
class Solution {
    public:
      int kthElement(vector<int>& a, vector<int>& b, int k) {
          int n1=a.size();
          int n2=b.size();
          vector<int> c;
          int i=0;
          int j=0;
          while(i<n1 && j<n2){
              if(a[i]<=b[j]){
                  c.push_back(a[i++]);}
              else{
                  c.push_back(b[j++]);}}
          while(i<n1){
              c.push_back(a[i++]);
          }
          while(j<n2){
              c.push_back(b[j++]);
          }
          return c[k-1];}
  };
// TC:O(n1+n2)
// SC:O(n1+n2)
// Approach:In this problem make another vector c which takes element from vector a and vector b 
// by checking the condition always that in vector c all elements are in sorted order,Then simply
// return the kth element from that array. 