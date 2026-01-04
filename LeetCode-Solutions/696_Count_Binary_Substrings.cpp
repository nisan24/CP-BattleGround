/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/count-binary-substrings/description/
 *  Problem Name : 696. Count Binary Substrings
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-16 23:11:32
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevCount = 0;
        int currCount = 1;
        int result = 0;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currCount++;
            } else {
                result += min(prevCount, currCount);
                prevCount = currCount;
                currCount = 1;
            }
        }

        result += min(prevCount, currCount);

        return result;
    }
};

// Accepted
