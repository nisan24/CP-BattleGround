/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/lexicographical-numbers/description/
 *  Problem Name : Lexicographical_Numbers
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-29 23:25:21
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    void dfs(int curr, int n, vector<int> &result) {
        if (curr > n) return;
        result.push_back(curr);
        for (int i = 0; i <= 9; i++) {
            int next = curr * 10 + i;
            if (next > n) return;
            dfs(next, n, result);
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> result;
        for (int i = 1; i <= 9; i++) {
            if (i > n) break;
            dfs(i, n, result);
        }

        return result;
    }
};

// Accepted