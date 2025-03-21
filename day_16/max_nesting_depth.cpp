#include<bits/stdc++.h>
using namespace std;
// Problem Name:Maximum nesting depth of parenthesis
// Link:https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/
// Code
class Solution {
    public:
        int maxDepth(string s) {
            int n=s.size();
            int maxi=0;
            int i=0;
            int cnt=0;
            while(i<n){
                if(s[i]=='('){
                    cnt++;
                maxi=max(maxi,cnt);}
                if(s[i]==')'){
                    cnt--;}
            i++;}
        return maxi;}
    };  
// TC:O(n)
// SC:O(1)
// Approach:If we find this '(' character in the string,we will increase the count and if we
// encounter with this ')' character then we will decrement the value of cnt we will track the record of 
// maximum cnt value in maxi. 





