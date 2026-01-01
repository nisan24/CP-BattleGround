/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/spiral-matrix-ii/description/
 *  Problem Name : 59. Spiral Matrix II
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-01 22:35:57
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> v(n, vector<int>(n));

        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;
        int val = 1;

        while (top <= bottom && left <= right) {

            // left → right
            for (int i = left; i <= right; i++)
                v[top][i] = val++;

            // top moves down
            top++;

            // top → bottom
            for (int i = top; i <= bottom; i++)
                v[i][right] = val++;

            // right moves left
            right--;

            if (top <= bottom) {
                // right → left
                for (int i = right; i >= left; i--)
                    v[bottom][i] = val++;
                bottom--;
            }

            if (left <= right) {
                // bottom → top
                for (int i = bottom; i >= top; i--)
                    v[i][left] = val++;
                left++;
            }
        }

        return v;
    }
};

// Accepted