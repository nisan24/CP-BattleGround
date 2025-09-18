/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-18 23:03:21
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    bool isSubsequence(const string& s, const string& t) {
        int i = 0, j = 0;
        int n = s.size(), m = t.size();

        while (i < n && j < m) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == n;
    }
};

// Accepted