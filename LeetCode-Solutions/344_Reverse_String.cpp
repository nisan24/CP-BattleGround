/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/reverse-string/description/
 *  Problem Name : Reverse String
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-05 21:17:10
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

// Accepted