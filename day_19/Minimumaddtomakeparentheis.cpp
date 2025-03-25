#include<bits/stdc++.h>
using namespace std;
// Problem Name:Minimum add to make parenthesis valid
// Link:https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
// Code
class Solution{
    public:
        int minAddToMakeValid(string s) {
            int i=0; //i-->open_brackets
            int j=0; //j-->minimum brackets to maintain consistency
            for(int k=0;k<s.size();k++){
                char c=s[k];
                if(c=='('){
                    i++;}
                else{
                    if(i>0){
                        i--;}
                    else{
                        j++;}
                }}
        return i+j;}
    };
// TC:O(n)
// SC:O(1)
// Approach:Count unbalanced '(' and unmatched ')' to determine required additions.





