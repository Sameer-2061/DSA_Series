#include<bits/stdc++.h>
using namespace std;
// Problem Name:Shortest Pallindrome
// Link:https://leetcode.com/problems/shortest-palindrome/description/
// Code
class Solution{
    public:
        string shortestPalindrome(string s){
            int n=s.size();
            if(n==0){
                return "";}
            stack<int> st;
            for(char c:s){
            st.push(c);
            }
            string rev="";
            while(!st.empty()){
                rev+=st.top();
                st.pop();} 
            int i=0;
            while(i<n && s.substr(0,n-i)!=rev.substr(i)){
                i++;}
            string validate=rev.substr(0,i); 
            return validate+s;}
};
// TC: O(n*n)
// SC: O(n)
// Approach: Reverse `s`, find longest palindromic prefix, and prepend remaining characters.