/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/single-number-iii/description/
 *  Problem Name : Single_Number_III
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-30 21:09:12
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    vector<int> singleNumber(vector<int> &nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        vector<int> ans;
        for (auto &[num, f] : freq) {
            if (f == 1) {
                ans.push_back(num);
            }
        }
        return ans;
    }

};

// Accepted