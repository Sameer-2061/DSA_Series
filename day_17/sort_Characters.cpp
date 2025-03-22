#include<bits/stdc++.h>
using namespace std;
// Problem Name:Sort Characters by Frequency
// Link:https://leetcode.com/problems/sort-characters-by-frequency/description/
// Code
class Solution {
    public:
        string frequencySort(string s){
            int n=s.size();
            if(n==0){
                return "";}
            string ans="";
            unordered_map<char,int> mpp;
            for(char c:s){
                mpp[c]++;}
            vector<pair<int,char>> mapToArray;
            for(auto it:mpp){
                mapToArray.push_back({it.second,it.first});}
            sort(mapToArray.rbegin(),mapToArray.rend());//rbegin,rend-->used for reversing the string
            for(auto it:mapToArray){
                ans.append(it.first,it.second);}
        return ans;}
    };  
// TC:O(n*log(m)) 
// SC:O(n)
// Approach:First of all check the base condition that if the size of string is zero(that means if it is empty ) then 
// return "" otherwise use map to store frequency of characters per element.Then store those elements in vector to sort
// because in map sorting is not allowed. 





