/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/longest-harmonious-subsequence/description/
 *  Problem Name : 594. Longest Harmonious Subsequence
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-26 21:26:06
 *  Language     : C++
 * -------------------------------------------------
 */
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        for (int x : nums) freq[x]++;

        int longest = 0;

        for (auto& [num, cnt] : freq) {
            if (freq.count(num + 1)) {
                longest = max(longest, cnt + freq[num + 1]);
            }
        }

        return longest;
    }
};


// Accepted