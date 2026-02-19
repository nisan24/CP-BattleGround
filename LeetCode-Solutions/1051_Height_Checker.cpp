/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/height-checker/description/
 *  Problem Name : 1051. Height Checker
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-26 19:54:04
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted = heights;
        sort(sorted.begin(), sorted.end());

        int cnt = 0;
        for (int i = 0; i < heights.size(); i++)
            if (heights[i] != sorted[i]) cnt++;

        return cnt;
    }
};

// Accepted 
// 

