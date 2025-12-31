/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/to-lower-case/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-31 22:59:34
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    string toLowerCase(string s) {
        for (char &c : s)
            c = tolower(c);
        return s;
    }
};

// Accepted