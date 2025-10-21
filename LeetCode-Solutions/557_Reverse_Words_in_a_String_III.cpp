/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/reverse-words-in-a-string-iii/description/
 *  Problem Name : Reverse Words in a String III
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-21 23:07:12
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, result;

        bool first = true;
        while (ss >> word) {
            reverse(word.begin(), word.end());
            if (!first) result += ' ';
            result += word;
            first = false;
        }
        return result;
    }
};

// Accepted 