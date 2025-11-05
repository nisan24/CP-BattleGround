/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/
 *  Problem Name : 448. Find All Numbers Disappeared in an Array
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-05 23:45:58
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0)
                nums[index] = -nums[index];
        }

        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                result.push_back(i + 1);
        }

        return result;
    }
};

// Accepted