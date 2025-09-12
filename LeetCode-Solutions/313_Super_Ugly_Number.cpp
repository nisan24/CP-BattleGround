class Solution
{
public:
    int nthSuperUglyNumber(int n, vector<int> &primes)
    {
        vector<int> ugly(n, 1);
        int k = primes.size();
        vector<int> indices(k, 0);
        vector<long long> next(k);

        for (int i = 1; i < n; ++i)
        {
            long long min_val = LLONG_MAX;

            for (int j = 0; j < k; ++j)
            {
                next[j] = 1LL * primes[j] * ugly[indices[j]];
                min_val = min(min_val, next[j]);
            }

            ugly[i] = min_val;

            for (int j = 0; j < k; ++j)
            {
                if (next[j] == min_val)
                {
                    indices[j]++;
                }
            }
        }

        return ugly[n - 1];
    }
};

// Accepted
