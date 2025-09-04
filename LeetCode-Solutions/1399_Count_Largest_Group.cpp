class Solution
{
public:
    int countLargestGroup(int n)
    {
        vector<int> count(37);

        for (int i = 1; i <= n; ++i)
        {
            int sum = 0, x = i;
            while (x)
            {
                sum += x % 10;
                x /= 10;
            }
            count[sum]++;
        }

        int maxFreq = *max_element(count.begin(), count.end());
        return count_if(count.begin(), count.end(), [maxFreq](int x)
                        { return x == maxFreq; });
    }
};

// Accepted

