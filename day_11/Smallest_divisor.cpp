#include<bits/stdc++.h>
using namespace std;
// Problem Name:Find the Smallest Divisor Given a Threshold
// Link:https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
// Code
class Solution {
    public:
        int divfun(vector<int> &nums, int divs){
            int n=nums.size();
            int sum=0;
            for(int i=0;i<n;i++){
                sum=sum+ceil((double)(nums[i])/(double)(divs));}
            return sum;}
        int smallestDivisor(vector<int>& nums, int threshold) {
            int low=1;
            int n=nums.size();
            int high=*max_element(nums.begin(),nums.end());
            while(low<=high){
                int mid=(low+high)/2;
                if(divfun(nums,mid)<=threshold){
                    high=mid-1;}
                else{
                    low=mid+1;
                }}
                return low;
            }
    };
// TC:O(nlog(M)) where M is max element
// SC:O(1)
// Approach:This approach is similar to Koko eating banana,the only difference is there we were checking 
// minimum speed and here we are chcking min divsior which gives  sum less than or equal to threshold.
 