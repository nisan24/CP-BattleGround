/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/max-consecutive-ones/description/
 *  Problem Name : 485. Max Consecutive Ones
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-23 22:14:57
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, current = 0;
        
        for (int x : nums) {
            if (x == 1) {
                current++;
                maxCount = max(maxCount, current);
            } else {
                current = 0;
            }
        }
        
        return maxCount;
    }
};

// Accepted
