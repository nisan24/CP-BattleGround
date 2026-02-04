/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/reverse-bits/description/
 *  Problem Name : Reverse Bits
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-11 23:01:42
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int reverseBits(int n) {
        uint32_t ans = 0;

        for (int i = 0; i < 32; i++) {
            ans <<= 1;
            ans |= (n & 1);
            n >>= 1;
        }

        return ans;
    }
};

// Accepted