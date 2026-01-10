/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-10 21:59:58
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0, splits = 0;

        for (char c : s) {
            balance += (c == 'R' ? 1 : -1);
            if (balance == 0)
                splits++;
        }
        return splits;
    }
};

// Accepted