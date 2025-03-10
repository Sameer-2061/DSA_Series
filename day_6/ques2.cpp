// Problem Name: Sort Colors
// Link:https://leetcode.com/problems/sort-colors/description/
// Code
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int n=nums.size();
            int low=0;
            int middle=0;
            int high=n-1;
            while(middle<=high){
                if(nums[middle]==0){
                    swap(nums[low],nums[middle]);
                    low++;
                    middle++;}
                else if(nums[middle]==1){
                    middle++;}
                else{
                    swap(nums[middle],nums[high]);
                    high--;}}
        }
    };
// TC:O(N)
// SC:O(1)

// Approach: Dutch National flag approach
