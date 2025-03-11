#include<bits/stdc++.h>
using namespace std;
// Problem Name: Best Time to buy and sell stock
// Link:https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Code
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n=prices.size();
            int mini=prices[0];
            int maxprofit=0;
            for(int i=0;i<=n-1;i++){
                int cost=prices[i]-mini;
                maxprofit=max(maxprofit,cost);
                mini=min(prices[i],mini);   
                }
        return maxprofit;}
    };
    
// TC:O(N)
// SC:O(1)

// Approach:let assumne your first ekemenet be your minimum 
// element then iterate through for loop on array abd find cost and compare it
// with maxprofit,return the max profit. 