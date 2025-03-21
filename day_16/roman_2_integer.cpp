#include<bits/stdc++.h>
using namespace std;
// Problem Name:Roman to Integer
// Link:https://leetcode.com/problems/roman-to-integer/description/
// Code
class Solution {
    public:
        int romanToInt(string s) {
            int n=s.size();
            int res=0;
            int num=0;
            for(int i=n-1;i>=0;i--){
                switch(s[i]){
                    case 'I':
                        num=1;
                        break;
                    case 'V':
                        num=5;
                        break;
                    case 'X':
                        num=10;
                        break;
                    case 'L':
                        num=50;
                        break;
                    case 'C':
                        num=100;
                        break;
                    case 'D':
                        num=500;
                        break;
                    case 'M':
                        num=1000;
                        break;}
                    if(4*num < res){
                        res=res-num;}
                    else{
                        res=res+num;}}
        return res;}
    };   
// TC:O(n)
// SC:O(1)
// Approach:Solved this using string and itterating from the back and maintained various 
// if-else condition then write condition to add that or subtract it from your result as per 
// the condition. 



