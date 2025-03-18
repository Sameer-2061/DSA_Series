#include<bits/stdc++.h>
using namespace std;
// Problem Name:Unique Characters
// Link:https://leetcode.com/problems/first-unique-character-in-a-string/
// Code
class Solution {
    public:
        int firstUniqChar(string s) {
            int n=s.size();
            unordered_map<char,int> mpp;
            for(char c:s){
                mpp[c]++;
            }
            for(int i=0;i<n;i++){
                if(mpp[s[i]]==1){
                    return i;}
            }
        return -1;}
    };
    
// TC:O(n)
// SC:O(1)
// Approach:Count character occurrences using unordered_map. Then, iterate over the original string and return the index 
// of the first character with a frequency of 1.







