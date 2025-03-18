#include<bits/stdc++.h>
using namespace std;
// Problem Name:Rotatate Array
// Link:https://leetcode.com/problems/rotate-array/description/
// Code
class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n=nums.size();
            k=k % n;
            //Right Shift
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end());
            //Left Shift
            // reverse(nums.begin(),nums.begin()+k);
            // reverse(nums.begin()+k,nums.end());
            // reverse(nums.begin(),nums.end());
            }
    };
// TC:O(n)
// SC:O(1)
// Approach:We first reverse the entire array, then reverse the first 𝑘 elements and the remaining elements separately
// to achieve a right rotation. For left rotation, we reverse the first k elements, the remaining elements, and then
//  the entire array.