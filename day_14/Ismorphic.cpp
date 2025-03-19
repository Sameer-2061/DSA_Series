#include<bits/stdc++.h>
using namespace std;
// Problem Name:Isomorphic Strings
// Link:https://leetcode.com/problems/isomorphic-strings/description/
// Code
class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            int m=s.length();
            int n=t.length();
            if(m!=n){
                return false;}
            int mapS[256]={0};
            int mapT[256]={0};
            for(int i=0;i<m;i++){
                if(mapS[s[i]]==0 && mapT[t[i]]==0){
                    mapS[s[i]]=t[i];
                    mapT[t[i]]=s[i];}
                else if(mapS[s[i]]!=t[i] || mapT[t[i]]!=s[i]){
                    return false;
                }
            }
        return true;}
    };   
// TC:O(n)
// SC:O(1)
// Approach:If the size of two strings are unequal,then they can't be isomorphic.
// create two array to store all elemeents of respective strings and compare them with another string respectively.






