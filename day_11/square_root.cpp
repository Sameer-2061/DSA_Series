#include<bits/stdc++.h>
using namespace std;
// Problem Name:Square root
// Link:https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root
// Code
class Solution {
    public:
      int floorSqrt(int n){
          int ans=1;
          int low=1;
          int high=n;
          while(low<=high){
              int mid=(low+high)/2;
              if(mid*mid<=n){
                  low=mid+1;}
              else{
                  high=mid-1;}}
      return high;}
  };
// TC:O(log(N))
// SC:O(1)
// Approach:Here we have taken as our low equals to 1, and high-->n itself.will calculate mid 
// and checks whether mid*mid is less than or equals to n if so we increase our low-->mid+1
// and if not then we move high-->mid-1; 
 