#include<bits/stdc++.h>
using namespace std;
// Problem Name:Substring with Kth distinct
// Link:https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-number-of-substrings
// Code
class Solution {
    public:
      int countSubstr(string& s, int k){
          return countAtMostK(s,k)-countAtMostK(s,k-1);}
      int countAtMostK(string& s, int k){
          if (k < 0) return 0;
          int left = 0, right = 0, res = 0;
          unordered_map<char, int> freq;
          while (right < s.size()) {
              freq[s[right]]++;
              while (freq.size() > k) {
                  freq[s[left]]--;
                  if (freq[s[left]] == 0) {
                      freq.erase(s[left]);
                  }
                  left++;
              }
              res += (right-left+1 );
              right++;
          }
          return res;
      }
  };  
// TC:O(n)
// SC:O(1)
// Approach:Uses a sliding window approach to count substrings with at most k distinct characters and subtracts the count for k-1.





