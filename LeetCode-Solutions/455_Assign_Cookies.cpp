/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/assign-cookies/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-02 20:37:50
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0;
        int count = 0;

        while (i < g.size() && j < s.size()) {
            if (g[i] <= s[j]) {
                count++;
                i++;
            }
            j++;
        }

        return count;
    }
};

// Accepted