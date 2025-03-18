#include<bits/stdc++.h>
using namespace std;
// Problem Name:Peak Element in 2d matrix
// Link:https://leetcode.com/problems/find-a-peak-element-ii/submissions/1577918817/
// Code
class Solution {
    public:
        int findMax(vector<vector<int>>& mat,int m,int n,int col){
            int maxValue=-1;
            int index=-1;
            for(int i=0;i<m;i++){
                if(mat[i][col]>maxValue){
                    maxValue=mat[i][col];
                    index=i;
                }
            }
            return index;
        }
        vector<int> findPeakGrid(vector<vector<int>>& mat) {
            int m=mat.size();
            int n=mat[0].size();
            int low=0;
            int high=n-1;
            while(low<=high){
            int mid=(low+high)/2;
            int maxRow=findMax(mat,m,n,mid);
            int left=-1;
            int right=-1;
            if(mid-1>=0){
                left=mat[maxRow][mid-1];}
            if(mid+1<n){
                right=mat[maxRow][mid+1];}
            if(mat[maxRow][mid]>left && mat[maxRow][mid]>right){
                return {maxRow,mid};}
            else if(mat[maxRow][mid]<left){
                high=mid-1;}
            else{
                low=mid+1;}}
        return{-1,-1}; }
    };
// TC:O((m*log n)
// SC:O(1)
// Approach:We perform a binary search on columns to find a peak element in a 2D grid. For each mid-column,
// we find the maximum element's row, compare it with its left and right neighbors, and adjust the search range accordingly.