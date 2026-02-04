/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/number-of-1-bits/description/
 *  Problem Name : 191. Number of 1 Bits
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-26 23:16:29
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};

// Accepted