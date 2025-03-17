#include<bits/stdc++.h>
using namespace std;
// Problem Name:Search a 2D matrix
// Link:https://leetcode.com/problems/search-a-2d-matrix/
// Code
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int m=matrix.size();
           int n=matrix[0].size();//coloumn
           int low=0;
           int high=((m*n)-1);
           int mid;
           while(low<=high){
            mid=(low+high)/2;
            int row=mid/n;
            int col=mid%n;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }}
           return false;}
    };
// TC:O(log(m*n))
// SC:O(log(1))
// Approach:Treat the 2D matrix as a sorted 1D array (flattened). Use binary search on the flattened array by calculating the middle
// index mid. Convert mid to 2D indices using row = mid / n and col = mid % n. Compare matrix[row][col] with the target. If it is equal,
// return true. If it is smaller, search the right half. If it is larger, search the left half. If the loop ends without finding the
// target, return false. 