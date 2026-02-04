/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/longest-uncommon-subsequence-i/description/
 *  Problem Name : 521. Longest Uncommon Subsequence I
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-03 21:37:50
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int findLUSlength(string a, string b) {
        int result = 0;
        if (a == b) {
            result = -1;
        } else {
            result = max(a.length(), b.length());
        }
        return result;
    }
};

// Accepted