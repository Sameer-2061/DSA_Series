#include<bits/stdc++.h>
using namespace std;
// Problem Name:Longest Common Prefix
// Link:https://leetcode.com/problems/longest-common-prefix/description/
// Code
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int n=strs.size();
            if(n==0){
                return "";}
            string prefix=strs[0];
            for(int i=1;i<n;i++){
                int mini=min(prefix.length(),strs[i].length());
                int j;
                for(j=0;j<mini;j++){
                    if(prefix[j]!=strs[i][j]){
                        break;}}
                   prefix=prefix.substr(0,j);
                   if(prefix==""){
                    return "";
                   }}
        return prefix;}
    };   
// TC:O(N.M) N is number of strings,M is length of longest string.
// SC:O(1)
// Approach:If the size of two strings are unequal,then they can't be isomorphic.
// create two array to store all elemeents of respective strings and compare them with another string respectively.






