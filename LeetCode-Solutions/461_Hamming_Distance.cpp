/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/hamming-distance/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-18 22:37:43
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y, count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};

// Accepted