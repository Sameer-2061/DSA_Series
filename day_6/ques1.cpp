#include<bits/stdc++.h>
using namespace std;
// Problem Name: Two Sum
// Link:https://leetcode.com/problems/two-sum/description/
// Code
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(nums[i]+nums[j]==target){
                        return {i,j};}}}
                return {};}
            };
// TC:O(N^2)
// SC:O(1)

// Approach:Traverse through the array two times for index i and for index i+1 whenever two numbers 
// sum up to get the target then simply return the index values of those respective elements.