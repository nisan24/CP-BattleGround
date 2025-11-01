/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/teemo-attacking/description/
 *  Problem Name : 495. Teemo Attacking
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-01 23:38:28
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.empty()) return 0;
        
        int total = 0;
        int n = timeSeries.size();

        for (int i = 0; i < n - 1; i++) {
            total += min(duration, timeSeries[i + 1] - timeSeries[i]);
        }

        return total + duration;
    }
};

// Accepted