/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/minimum-absolute-difference/description/
 *  Problem Name : 1200. Minimum Absolute Difference
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-27 21:12:51
 *  Language     : C++
 * -------------------------------------------------
 */





class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int minDiff = INT_MAX;
        vector<vector<int>> ans;

        for (int i = 0; i < arr.size() - 1; i++) {
            int diff = arr[i + 1] - arr[i];

            if (diff < minDiff) {
                minDiff = diff;
                ans = {{arr[i], arr[i + 1]}};
            } 
            else if (diff == minDiff) {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }

        return ans;
    }
};

// Accepted