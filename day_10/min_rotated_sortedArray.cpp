#include<bits/stdc++.h>
using namespace std;
// Problem Name: Find minimum rotated sorted array
// Link:https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Code
class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n=nums.size();
            int low=0;
            int mid;
            int high=n-1;
            int ans=INT_MAX;
            while(low<=high){
                mid=(low+high)/2;
                if(nums[low] <= nums[high]){
                    ans=min(ans,nums[low]);
                    break;
                }
                else if(nums[low] <= nums[mid]){
                    ans=min(ans,nums[low]);
                    low=mid+1;
                }
                else{
                    ans=min(ans,nums[mid]);
                    high=mid-1;
                }
            }
        return ans;}
    };
// TC:O(log(N))
// SC:O(1)
// Approach:Solved using BS
 