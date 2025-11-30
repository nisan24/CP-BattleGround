/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/largest-triangle-area/description/
 *  Problem Name : 812. Largest Triangle Area
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-30 22:29:56
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0.0;
        int n = points.size();
        
        for (int i = 0; i < n; i++) {
            int x1 = points[i][0], y1 = points[i][1];
            for (int j = i + 1; j < n; j++) {
                int x2 = points[j][0], y2 = points[j][1];
                for (int k = j + 1; k < n; k++) {
                    int x3 = points[k][0], y3 = points[k][1];
                    
                    double area = fabs(
                        x1 * (y2 - y3) +
                        x2 * (y3 - y1) +
                        x3 * (y1 - y2)
                    ) * 0.5;
                    
                    maxArea = max(maxArea, area);
                }
            }
        }
        
        return maxArea;
    }
};


// Accepted