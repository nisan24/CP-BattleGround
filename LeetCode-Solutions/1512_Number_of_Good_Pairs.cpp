/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/number-of-good-pairs/
 *  Problem Name : 1512. Number of Good Pairs
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-23 20:58:37
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans = 0;

        for (int x : nums) {
            ans += freq[x];
            freq[x]++;
        }
        return ans;
    }
};

// Accepted