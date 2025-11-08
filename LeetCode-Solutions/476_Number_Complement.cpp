/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/number-complement/description/
 *  Problem Name : Number Complement
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-19 22:10:21
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int findComplement(int num) {
        long long power = 1, result = 0;
        while (num > 0) {
            int bit = num % 2;
            int flipped = (bit == 0) ? 1 : 0;
            result += flipped * power;
            power *= 2;
            num /= 2;
        }
        return result;
    }
};

// Accepted

