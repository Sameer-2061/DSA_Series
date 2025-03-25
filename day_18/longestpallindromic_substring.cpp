#include<bits/stdc++.h>
using namespace std;
// Problem Name:Longest Pallindromic Substring
// Link:https://leetcode.com/problems/longest-palindromic-substring/description/
// Code
class Solution {
    public:
        string longestPalindrome(string s) {
            int n=s.size();
            if(n<1){
                return "";}
            string ans=s.substr(0,1);
            int i=1;
            int j=n-1;
            while(i<n-1){
                if(s[i-1]==s[i+1]){
                    int l=i-1;
                    int r=i+1;
                    while(l>=0 && r<n && s[l]==s[r]){
                        l--;
                        r++;}
                  if((r-l-1)>ans.size()){
                    ans=s.substr(l+1,r-l-1);}}
                if(s[i]==s[i-1]){
                    int l=i-1;
                    int r=i;
                    while(l>=0 && r<n && s[l]==s[r]){
                        l--;
                        r++;}
                    if((r-l-1)>ans.size()){
                        ans=s.substr(l+1,r-l-1);}}
                i++;}
        return ans;}
    };
// TC:O(n*n)
// SC:O(1)
// Approach:Expands around possible palindrome centers (odd/even length) and keeps track of the longest one.







