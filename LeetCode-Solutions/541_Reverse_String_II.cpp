/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/reverse-string-ii/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-13 23:02:21
 *  Language     : C++
 * -------------------------------------------------
 */



#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        
        for (int i = 0; i < n; i += 2 * k) {
            int end = min(i + k, n);
            reverse(s.begin() + i, s.begin() + end);
        }

        return s;
    }
};

// Accepted