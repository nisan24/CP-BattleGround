/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/next-greater-element-i/description/
 *  Problem Name : Next Greater Element I
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-14 23:11:31
 *  Language     : C++
 * -------------------------------------------------
 */

 
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> st;

        for (int i = nums2.size() - 1; i >= 0; i--) {
            int current = nums2[i];

            while (!st.empty() && st.top() <= current) {
                st.pop();
            }

            nextGreater[current] = st.empty() ? -1 : st.top();

            st.push(current);
        }

        vector<int> result;
        result.reserve(nums1.size());

        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }

        return result;
    }
};

// Accepted