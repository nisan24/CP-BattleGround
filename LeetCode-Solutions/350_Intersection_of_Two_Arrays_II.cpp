/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-31 20:39:06
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        vector<int> ans;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        return ans;
    }
};

// Accepted