class Solution
{
public:
    vector<int> minSubsequence(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());

        int total = accumulate(nums.begin(), nums.end(), 0);
        int curr = 0;
        vector<int> result;

        for (int num : nums)
        {
            curr += num;
            result.push_back(num);
            if (curr > total - curr)
                break;
        }

        return result;
    }
};

// Accepted

