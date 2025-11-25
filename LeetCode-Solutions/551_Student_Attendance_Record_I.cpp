/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/student-attendance-record-i/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-25 21:58:18
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    bool checkRecord(string s) {
        int A = 0;
        int L = 0;

        for (char c : s) {
            if (c == 'A') {
                A++;
                if (A == 2) return false;
                L = 0;
            }
            else if (c == 'L') {
                L++;
                if (L == 3) return false;
            }
            else {
                L = 0;
            }
        }

        return true;
    }
};

// Accepted