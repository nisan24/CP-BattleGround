/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
 *  Problem Name : 1365. How Many Numbers Are Smaller Than the Current Number
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-11 21:56:13
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> freq(101, 0);

        // Count frequency
        for (int x : nums)
            freq[x]++;

        // Prefix sum
        for (int i = 1; i <= 100; i++)
            freq[i] += freq[i - 1];

        // Build answer
        vector<int> ans;
        ans.reserve(nums.size());

        for (int x : nums)
            ans.push_back(x == 0 ? 0 : freq[x - 1]);

        return ans;
    }
};

// Accepted