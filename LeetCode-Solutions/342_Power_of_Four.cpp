/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/power-of-four/description/
 *  Problem Name : 342. Power of Four
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-29 22:42:05
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;

        if (n & (n - 1))
            return false;

        return (n - 1) % 3 == 0;
    }
};

// Accepted