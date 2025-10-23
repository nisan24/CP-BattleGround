/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/reverse-vowels-of-a-string/description/
 *  Problem Name : Reverse Vowels of a String
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-23 13:22:33
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    string reverseVowels(string s) {
        const string vowels = "aeiouAEIOU";
        int left = 0, right = s.size() - 1;

        while (left < right) {
            while (left < right && vowels.find(s[left]) == string::npos)
                left++;

            while (left < right && vowels.find(s[right]) == string::npos)
                right--;
            
            swap(s[left++], s[right--]);
        }
        return s;
    }
};

// Accepted