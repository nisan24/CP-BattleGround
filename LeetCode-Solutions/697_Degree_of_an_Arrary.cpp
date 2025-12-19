/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/degree-of-an-array/description/
 *  Problem Name : 697. Degree of an Array
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-19 22:15:07
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> first_index;
        unordered_map<int, int> counts;

        int degree = 0;
        int min_length = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];

            if (first_index.find(num) == first_index.end()) {
                first_index[num] = i;
            }

            int current_count = ++counts[num];
            int current_length = i - first_index[num] + 1;

            if (current_count > degree) {
                degree = current_count;
                min_length = current_length;
            }

            else if (current_count == degree) {
                min_length = min(min_length, current_length);
            }
        }

        return min_length;
    }
};

// Accepted