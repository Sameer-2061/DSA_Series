#include<bits/stdc++.h>
using namespace std;
// Problem Name: Seach Insert Position
// Link: https://leetcode.com/problems/search-insert-position/description/
// Code
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
           int n=nums.size();
           int low=0;
           int mid;
           int ans=n;
           int high=n-1;
           while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;}
            else {
                low=mid+1;
            }
            }
        return ans;}
    };
// TC:O(log(N))
// SC:O(1)
// Approach:In this we set our first index as low,ans as size of array and the last index as high then we will 
// compare whether the element present at mid index is greater than target if so then we 
// will put high-->mid-1 and if not  then we will do low-->mid+1.
 