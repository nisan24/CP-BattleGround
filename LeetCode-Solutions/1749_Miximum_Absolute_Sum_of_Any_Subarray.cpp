class Solution
{
public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        int max_ending = 0, min_ending = 0, max_sum = 0;

        for (int val : nums)
        {
            max_ending = max(val, max_ending + val);
            min_ending = min(val, min_ending + val);
            max_sum = max({max_sum, abs(max_ending), abs(min_ending)});
        }

        return max_sum;
    }
};

// Accepted

