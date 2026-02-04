/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/range-sum-query-immutable/description/
 *  Problem Name : Range Sum Query - Immutable
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-26 19:39:53
 *  Language     : C++
 * -------------------------------------------------
 */

class NumArray {
private:
    vector<int> prefix;

public:
    NumArray(const vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left];
    }
};

// Accepted

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */