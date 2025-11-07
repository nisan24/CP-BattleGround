/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/range-addition-ii/description/
 *  Problem Name : 598. Range Addition II
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-07 22:09:33
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.empty()) 
            return m * n;

        int minRow = m, minCol = n;

        for (const auto& op : ops) {
            minRow = min(minRow, op[0]);
            minCol = min(minCol, op[1]);
        }

        return minRow * minCol;
    }
};

// Accepted