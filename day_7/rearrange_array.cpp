#include<bits/stdc++.h>
using namespace std;
// Problem Name: Rearrange Elements by Sign
// Link:https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
// Code
class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            int n=nums.size();
            vector<int> ans(n,0);
            int posIndex=0;
            int negIndex=1;
            for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex=negIndex+2;
            }
            else{
                ans[posIndex]=nums[i];
                posIndex=posIndex+2;
            }}
            return ans;}};
// TC:O(N)
// SC:O(N)

// Approach:First of all generate an vector aname as ans and then one posIndex 
// and then one negindex at two consecutive statring index then iterate through
// an for loop and check whether the element is less than or greater then 0,
//  if less then put that element to neg index and do increment of neg index by 2
// or if greater then out that element to pos index and do increment of pos index by 2.