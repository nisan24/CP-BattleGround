/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/counting-bits/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-04 22:40:11
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i >> 1] + (i & 1);
        }

        return dp;
    }
};

// Accepted