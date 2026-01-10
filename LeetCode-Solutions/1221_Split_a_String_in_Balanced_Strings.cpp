/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/split-a-string-in-balanced-strings/
 *  Problem Name : 1221. Split a String in Balanced Strings
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-10 21:59:58
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0, splits = 0;

        for (char c : s) {
            balance += (c == 'R' ? 1 : -1);
            if (balance == 0)
                splits++;
        }
        return splits;
    }
};

// Accepted