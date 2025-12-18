class Solution
{
public:
    vector<int> minSubsequence(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());

        vector<int> res;
        int total = accumulate(nums.begin(), nums.end(), 0);
        int curr = 0;

        for (int n : nums)
        {
            curr += n;
            res.push_back(n);
            if (curr > total - curr)
                break;
        }

        return res;
    }
};

// Accepted