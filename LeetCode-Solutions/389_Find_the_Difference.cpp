/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/find-the-difference/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-25 23:24:15
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        for (char c : s) result ^= c;
        for (char c : t) result ^= c;
        return result;
    }
};

// Accepted