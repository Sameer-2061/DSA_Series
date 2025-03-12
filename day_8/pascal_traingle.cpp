#include<bits/stdc++.h>
using namespace std;
// Problem Name: Pascal triangle
// Link:https://leetcode.com/problems/pascals-triangle/
// Code
class Solution {
    public:
        vector<int> generateRows(int Rows){
            long long ans=1;
            vector<int> ansrow;
            ansrow.push_back(1);
            for(int i=1;i<Rows;i++){
                ans=ans*(Rows-i);
                ans=ans/i;
                ansrow.push_back(ans);
            }
        return ansrow;}
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> ans;
            for(int i=1;i<=numRows;i++){
                ans.push_back(generateRows(i));}
        return ans;}
    };
    
// TC:O(N^2)
// SC:O(N^2)

// Approach:In this problem simply just generate  and then do it for all return the answer
 