#include<bits/stdc++.h>
using namespace std;
// Problem Name: Binary Search
// Link:https://leetcode.com/problems/binary-search/
// Code
class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n=nums.size();
            int low=0;
            int high=n-1;
            int mid;
            while(low<=high){
              mid=(low+high)/2;
              if(target<nums[mid]){
                high=mid-1;}
              else if(target>nums[mid]){
                low=mid+1;}
              else if(target==nums[mid]){
                return mid;}
            }
        return -1;}
    };
// TC:O(log(N))
// SC:O(1)
// Approach:Set the first index of your ascending order array as low and the last index with high,
// then find mid ,and at every step you find mid you have to do one important step check for the mid
// If the target is lower than mid then shift your high pointer to high-->mid-1 and if target is higher then mid
// then shift the low-->mid+1.
 