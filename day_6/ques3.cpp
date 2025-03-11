#include<bits/stdc++.h>
using namespace std;
// Problem Name: Max sum in subarray
// Link:https://leetcode.com/problems/two-sum/description/
// Code
class Solution {
    public:
      int pairWithMaxSum(vector<int> &arr) {
          int n=arr.size();
          int maxi=INT_MIN;
          int sum=0;
          for(int i=0;i<n;i++){
              for(int j=i;j<n;j++){
                  sum=sum+arr[j];}
                  maxi=max(sum,maxi);}
      return maxi;}
  };
// TC:O(N^2)
// SC:O(1)

// Approach:Traverse through the array two times for index i and for index j finding max sum with adjacent.