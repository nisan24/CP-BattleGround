class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

// ===

// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         vector<int> sum;
//         int a = 0;
//         for(int val : nums){
//             a += val;
//             sum.push_back(a);
//         }
//         return sum;
//     }
// };


