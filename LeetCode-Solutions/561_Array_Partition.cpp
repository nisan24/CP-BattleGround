/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/array-partition/description/
 *  Problem Name : Array Partition
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-20 23:29:07
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;

        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }

        return sum;
    }
};

// Accepted
