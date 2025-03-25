#include<bits/stdc++.h>
using namespace std;
// Problem Name:Repeated String match
// Link:https://leetcode.com/problems/repeated-string-match/description/
// Code
class Solution {
    public:
        int repeatedStringMatch(string a, string b){
            string temp=a;
            int cnt=1;
            while(temp.size()<b.size()){
                temp+=a;
                cnt++;}
            if(temp.find(b)!=string::npos){
                return cnt;}
            temp+=a;
            cnt++;
            if(temp.find(b)!=string::npos){
                return cnt;}
            return -1;
        }
};
// TC:O(a.size*b.size)
// SC:O(1)
// Approach: Append `a` until `b` fits and check substring presence.
