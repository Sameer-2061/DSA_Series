#include<bits/stdc++.h>
using namespace std;
// Problem Name:Koko Eating Banana 
// Link:https://leetcode.com/problems/koko-eating-bananas/description/
// Code
class Solution {
    public:
        int findmax(vector<int>& piles){
            int maxi=INT_MIN;
            int n=piles.size();
            for(int i=0;i<n;i++){
                maxi=max(maxi,piles[i]);
            }
        return maxi;}
        int workhours(vector<int>& piles,int hours ){
            long long Thour=0;
            int n=piles.size();
            for(int i=0;i<n;i++){
                Thour+=ceil(double(piles[i])/double(hours));
            }
        return Thour;}
        int minEatingSpeed(vector<int>& piles, int h) {
            int n=piles.size();
            int l=1;
            int high=findmax(piles);
            while(l<high){
                int mid=l+(high-l)/2;
                long long Thour=workhours(piles,mid);
                if(Thour<=h){
                    high=mid-1;} 
                else { 
                    l=mid+1;
                }}
            return l;}
    };
// TC:O(nlog(M))
// SC:O(1)
// Approach:We know that the speed of Koko ranges between the 1 till the max element(piles of bananana).
// Here,we can perform BS and it will give us find then our next work is to check whether that mid value satisfy the 
// need of eating all bananas(for checking this "workhours(piles,mid)" is used then our next work is if it value of mid satisfy 
// the need of question then we will check for whether that speed (mid) is the least speed or not by moving our high-->mid-1. 
 