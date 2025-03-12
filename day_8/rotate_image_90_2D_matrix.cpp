#include<bits/stdc++.h>
using namespace std;
// Problem Name: Rotate Image by 90 (2D matrix with size n*n)
// Link:https://leetcode.com/problems/rotate-image/description/
// Code
class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n=matrix.size();
            vector<vector<int>> ans(n,vector<int>(n));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    ans[j][i]=matrix[i][j];}}
        for(int i=0;i<n;i++){
        reverse(ans[i].begin(),ans[i].end());}
        matrix=ans;}
    };
    
// TC:O(N^2)
// SC:O(N^2)

// Approach:Rotating an matrix is simple first make an ans vector of same size as matrix ,then
//  1st step is to transpose the matrix and store in ans then reverse the rows only in ans vector.
