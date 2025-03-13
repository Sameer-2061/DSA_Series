#include<bits/stdc++.h>
using namespace std;
// Problem Name: Find First and Last Position of Element in Sorted Array
// Link:https:https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
// Code
class Solution {
    public:
        int lowerbound(vector<int>& nums, int target){
            int n=nums.size();
            int low=0;
            int high=n-1;
            int ans=n;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid] >= target){
                    ans=mid;
                    high=mid-1;}
                else{
                    low=mid+1;}}
        return ans;}
        int Upperbound(vector<int>& nums, int target){
            int n=nums.size();
            int low=0;
            int high=n-1;
            int ans=n;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid] > target){
                    ans=mid;
                    high=mid-1;}
                else{
                    low=mid+1;}}
        return ans;}
        vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=lowerbound(nums,target);
        if(lb==n || nums[lb]!=target){
            return {-1,-1};
        }
        return {lb,Upperbound(nums,target)-1};
     }  };
// TC:O(log(N))
// SC:O(1)
// Approach:The lowerbound() function finds the first position where target appears,
// and Upperbound() finds the first position where an element greater than target appears.
// return {-1,-1} if not found
 