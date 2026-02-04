/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/intersection-of-two-arrays/
 *  Problem Name : Intersection of Two Arrays
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-06 22:38:14
 *  Language     : C++
 */

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        vector<int> result;

        for (int num : nums2) {
            if (s1.count(num)) {
                result.push_back(num);
                s1.erase(num);
            }
        }

        return result;
    }
};

// Accepted