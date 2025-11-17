/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/construct-the-rectangle/description/
 *  Problem Name : 492. Construct the Rectangle
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-17 14:11:22
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = sqrt(area);

        while (area % w != 0) {
            w--;
        }

        int l = area / w;
        return {l, w};
    }
};

// Accepted