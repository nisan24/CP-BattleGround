/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/rotate-image/description/
 *  Problem Name : 48. Rotate Image
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-19 22:57:10
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

// Accepted