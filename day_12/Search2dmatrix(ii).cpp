#include<bits/stdc++.h>
using namespace std;
// Problem Name:Search a 2D matrix (ii)
// Link:https://leetcode.com/problems/search-a-2d-matrix-ii/description/
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row=0;
        int col=n-1;
        while(row<m && col>=0){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                row++;
            }
            else{
                col--;
            }}
            return false;}
};
// TC:O(m+n)
// SC:O(1)
// Approach:In this checks for the element,Element is present in the top right most index, if it matches target then true,
// if it is less than target then increase row (go down), else decrease column(move left)