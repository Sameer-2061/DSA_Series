#include<bits/stdc++.h>
using namespace std;
// Problem Name: Next Permutation
// Link:https://leetcode.com/problems/next-permutation/description/
// Code
class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int n=nums.size();
            int indx=-1;
            if(nums.empty()){ return;}
            for(int i=n-2;i>=0;i--){
                if(nums[i]<nums[i+1]){
                    indx=i;
                    break;}}
            if(indx==-1){
                reverse(nums.begin(),nums.end());
                return;}
            for(int i=n-1;i>indx;i--){
                if(nums[indx]<nums[i]){
                    swap(nums[indx],nums[i]);
                    break;}}
            reverse(nums.begin()+indx+1,nums.end());
        }
    };
// TC:O(N)
// SC:O(N)

// Approach:Find the first decreasing element from the right and swap it with the next 
// larger element. Reverse the right part to get the next permutation.