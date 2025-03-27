#include<bits/stdc++.h>
using namespace std;
// Problem Name:Partition Label
// Link:https://leetcode.com/problems/partition-labels/description/?envType=problem-list-v2&envId=string
// Code
class Solution {
    public:
    vector<int> partitionLabels(string s) {
        vector<int> lastIndex(26, 0);
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            lastIndex[s[i] - 'a'] = i;
        }
        vector<int> result;
        int start = 0, end = 0;
        for (int i = 0; i < n; ++i) {
            end = max(end, lastIndex[s[i] - 'a']);
            if (i == end) {
                result.push_back(end - start + 1);
                start = i + 1;
            }
        }
        return result;
    }
}; 
// TC:O(n)
// SC:O(n)
// Approach:Store last occurrence of each character in lastIndex array.
// Iterate through the string, updating end to the farthest last occurrence,
// and when i == end, push partition size into result.
