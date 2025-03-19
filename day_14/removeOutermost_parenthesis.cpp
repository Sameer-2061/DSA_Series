#include<bits/stdc++.h>
using namespace std;
// Problem Name:Remove Outermost Parenthesis
// Link:https://leetcode.com/problems/remove-outermost-parentheses/
// Code
class Solution {
    public:
        string removeOuterParentheses(string s) {
            string ans="";
            int count=0;
            int n=s.length();
            for(int i=0;i<n;i++){
                if(s[i]=='('){
                    if(count>0){
                    ans=ans+s[i];}
                    count++;}
                else if(s[i]==')'){
                    count--;
                    if(count>0){
                        ans=ans+s[i];}}}
        return ans;}
    };  
// TC:O(n)
// SC:O(n)
// Approach:In this code we are converting a parenthesis to good parenthesis by removing outer brackets,Simply we have to do
// cnt=0 then iterate through string when ever char comes to be  '(' then increase cnt and for every ')' decrease cnt add it 
// to your answer,one important this  addition and deletion of the bracket is only possible when cnt>0. at cnt=0 no need to add
//  any of the chaarcter in our answer.






