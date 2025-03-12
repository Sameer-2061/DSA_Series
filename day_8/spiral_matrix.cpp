#include<bits/stdc++.h>
using namespace std;
// Problem Name:Spiral matrix
// Link:https://leetcode.com/problems/spiral-matrix/description/
// Code
class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int m=matrix.size();
            int n=matrix[0].size();
            int l=0; //left
            int t=0; //top
            int r=n-1; //right
            int b=m-1; //bottom
            vector<int> ans;
            while(t<=b && l<=r){
                for(int i=l;i<=r;i++){
                    ans.push_back(matrix[t][i]); 
                }
                t++;
                for(int i=t;i<=b;i++){
                    ans.push_back(matrix[i][r]); 
                }
                r--;
                if(t<=b){
                for(int i=r;i>=l;i--){
                    ans.push_back(matrix[b][i]); 
                }
                b--;}
                if(l<=r){
                for(int i=b;i>=t;i--){
                    ans.push_back(matrix[i][l]); 
                }
                l++;}
                
            }
            return ans;
        }
    };    
// TC:O(N^2)
// SC:O(N^2)

// Approach: Traverse from leftmost top array to right most top array , then vertically traverse from in bottom direction 
// till end, then left and do it repeatedly till it don't reaches to middle element.
