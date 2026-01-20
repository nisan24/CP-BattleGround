/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/shuffle-the-array/description/
 *  Problem Name : 1470. Shuffle the Array
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-20 20:48:26
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        res.reserve(2 * n);

        for (int i = 0; i < n; i++) {
            res.push_back(nums[i]);
            res.push_back(nums[i + n]);
        }
        return res;
    }
};

// Accepted