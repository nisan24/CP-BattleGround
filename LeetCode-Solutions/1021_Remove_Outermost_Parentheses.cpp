/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/remove-outermost-parentheses/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-09 21:39:36
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int depth = 0;

        for (char c : s) {
            if (c == '(') {
                if (depth > 0)
                    res.push_back(c);
                depth++;
            } else { // ')'
                depth--;
                if (depth > 0)
                    res.push_back(c);
            }
        }
        return res;
    }
};

// Accepted 