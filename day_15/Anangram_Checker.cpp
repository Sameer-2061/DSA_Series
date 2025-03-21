#include<bits/stdc++.h>
using namespace std;
// Problem Name: Valid Anagarm
// Link:https://leetcode.com/problems/valid-anagram/
// Code
class Solution {
    public:
        bool isAnagram(string s, string t) {
            int n=s.size();
            int m=t.size();
            if(n!=m){
                return false;}
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            if(s==t){
                return true;}
            return false;
        }
    };   
// TC:O(n*log(n))
// SC:O(1)
// Approach:First of all check the length of strings to be equal for further checking that they
// are valid anagrams or not.Then sort both the strings now compare every element of string with 
// one another if they are equal they are valid anagrams.





