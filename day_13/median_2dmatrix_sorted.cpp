#include<bits/stdc++.h>
using namespace std;
// Problem Name: Median of rowwise sorted matrix.
// Link: https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
// Code
class Solution {
    public:
    int upperBound(vector<int> &arr, int x, int n) {
        int low=0;
        int high=n-1;
        int ans=n;    
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>x){
                ans=mid;
                high=mid-1;}
            else{
                low=mid+1;}}
        return ans;}
    int countSmallEqual(vector<vector<int>> &matrix, int m, int n, int x){
        int cnt=0;
        for(int i=0;i<m;i++){
            cnt+=upperBound(matrix[i],x,n);}
        return cnt;}
    int median(vector<vector<int>> &matrix){
        int low=INT_MAX;
        int high=INT_MIN;
        int m=matrix.size();
        int n=matrix[0].size();
        for (int i=0;i<m;i++){
            low=min(low, matrix[i][0]);
            high=max(high, matrix[i][n - 1]);}
        int req =(n * m) / 2;
        while (low <= high) {
            int mid = (low + high) / 2;
            int smallEqual = countSmallEqual(matrix, m, n, mid);
            if (smallEqual <= req) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};
// TC:O(mlognlog(max−min))
// SC:O(1)
// Approach:WWe use binary search on the median 
// value range and count elements ≤ mid using upper bound in each row. We adjust the search range until we find the median.