/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
 *  Problem Name : Find All Duplicates in an Array
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-08 22:11:33
 *  Language     : C++
 * -------------------------------------------------
 */

 
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;

        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;

            if (nums[index] < 0) {
                duplicates.push_back(index + 1);
            } 
            else {
                nums[index] = -nums[index];
            }
        }
        return duplicates;
    }
};

// Accepted
