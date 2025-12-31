/*
 * -------------------------------------------------
 *  Problem Link : 
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