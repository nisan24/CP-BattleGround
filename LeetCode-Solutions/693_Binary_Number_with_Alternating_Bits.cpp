/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/binary-number-with-alternating-bits/description/
 *  Problem Name : 693. Binary Number with Alternating Bits
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-11 23:25:26
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long x = (long long)n ^ (long long)(n >> 1);
        return (x & (x + 1)) == 0;
    }
};

// Accepted