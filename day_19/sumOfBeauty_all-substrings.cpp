#include<bits/stdc++.h>
using namespace std;
// Problem Name:Sum of Beauty all substrings
// Link:https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/
// Code
class Solution {
    public:
        int beautySum(string s) {
            int n=s.size();
            int ans=0; 
            for(int i=0;i<n;i++){
                unordered_map<char, int> mpp;
                for(int j=i;j<n;j++){
                    mpp[s[j]]++;
                    vector<int> freq;
                    for(auto p: mpp){
                        freq.push_back(p.second);}
                    sort(freq.begin(),freq.end());
                    ans+=(freq.back()-freq.front());}}
            return ans;
        }
    };
// TC:O(n*n)
// SC:O(1)
// Approach:Use a frequency map for substring character counts and compute beauty.