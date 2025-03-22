#include<bits/stdc++.h>
using namespace std;
// Problem Name:String to Integer (ATOI)
// Link:https://leetcode.com/problems/string-to-integer-atoi/description/
// Code
class Solution {
    public:
        int myAtoi(string s) {
            int n=s.size();
            int sign=1;
            int ans=0;
            int i=0;
            while(i<n && s[i]==' '){
                i++;
                }
                if(i<n){
                    if(s[i]=='-'){
                        sign=-1;
                        i++;
                    }
                    else if(s[i]=='+'){
                        sign=1;
                        i++;
                    }}
            while(i<n && isdigit(s[i])){
                if(ans>(INT_MAX-(s[i]-'0'))/10){
                    if(sign == 1){
                        return INT_MAX;}
                    else{
                        return INT_MIN;}}
                ans=ans*10+(s[i]-'0');
                i++;}
        return ans*sign;}
    };
// TC:O(n)
// SC:O(1)
// Approach:Convert digits to an integer while handling overflow using (INT_MAX - digit) / 10 condition.




