/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/subsets/description/
 *  Problem Name : 78. Subsets
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-24 23:27:29
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int num = pow(2, n), i = 0;
        
        while(i<num)
        {
            vector<int> temp;
            for(int j=0; j<n; j++)
            {
                if(i & 1<<j)
                    temp.push_back(nums[j]);
            }
            ans.push_back(temp);
            i++;
        }
        
        return ans;
    }
};

// Accepted