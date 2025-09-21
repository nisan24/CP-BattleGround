// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         int result = 0;
//         for(auto num : nums){
//             result += (int)log10(num) & 1;
//         }
//         return result;
//     }
// };

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int result = 0;
        for (auto num : nums)
        {
            result += to_string(num).length() % 2 == 0;
        }
        return result;
    }
};

// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         int count = 0;
//         for(int i = 0; i < nums.size(); i++){
//             if(10 <= nums[i] && nums[i] <= 99){
//                 count++;
//             }
//             if(1000 <= nums[i] && nums[i] <= 9999){
//                 count++;
//             }
//             if(nums[i] == 100000){
//                 count++;
//             }
//         }
//         return count;
//     }
// };
