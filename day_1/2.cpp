#include<bits/stdc++.h>
using namespace std;
//Problem Name: Number of equivalent pairs
// Given a list of dominoes, dominoes[i] = [a, b] is equivalent to dominoes[j] = [c, d] if and only if either (a == c and b == d), or (a == d and b == c) - that is, one domino can be rotated to be equal to another domino.Return the number of pairs (i, j) for which 0 <= i < j < dominoes.length, and dominoes[i] is equivalent to dominoes[j].

//Problem Link: https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/?envType=problem-list-v2&envId=2030iluv
   

//Code
class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            int n=dominoes.size();
            int cnt=0;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(((dominoes[i][0]==dominoes[j][0]) && (dominoes[i][1]==dominoes[j][1])) || ((dominoes[i][0]==dominoes[j][1]) && (dominoes[i][1]==dominoes[j][0]))){
                        cnt++;}}}
        return cnt;}
    };
//Complexity O(n^2)

//Approach
// The approach is very easy we will take for loop for matching that whether the number at that particular index matching with the same or adjacent index number in another list if it does then we will simply count the number of time it occurs and return it.

