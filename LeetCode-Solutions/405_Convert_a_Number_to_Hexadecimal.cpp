/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/convert-a-number-to-hexadecimal/description/
 *  Problem Name : 405. Convert a Number to Hexadecimal
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-10 21:32:40
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        const string hex = "0123456789abcdef";
        string ans;
        unsigned int n = num;

        for (int i = 0; i < 8 && n > 0; i++) {
            ans.push_back(hex[n & 15]);
            n >>= 4;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Accepted 
// f