class Solution
{
public:
    vector<int> processQueries(vector<int> &queries, int m)
    {
        vector<int> arr(m);
        for (int i = 0; i < m; i++)
        {
            arr[i] = i + 1;
        }

        vector<int> result;
        for (int q : queries)
        {
            int idx = 0;
            while (arr[idx] != q)
                idx++;

            result.push_back(idx);

            for (int i = idx; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = q;
        }
        return result;
    }
};

// Accepted
