class Solution
{
public:
    string longestDiverseString(int a, int b, int c)
    {
        priority_queue<pair<int, char>> pq;
        if (a > 0)
            pq.push({a, 'a'});
        if (b > 0)
            pq.push({b, 'b'});
        if (c > 0)
            pq.push({c, 'c'});

        string result;

        while (!pq.empty())
        {
            auto [cnt1, ch1] = pq.top();
            pq.pop();

            int len = result.size();
            if (len >= 2 && result[len - 1] == ch1 && result[len - 2] == ch1)
            {
                if (pq.empty())
                {
                    break;
                }
                auto [cnt2, ch2] = pq.top();
                pq.pop();

                result += ch2;
                if (--cnt2 > 0)
                {
                    pq.push({cnt2, ch2});
                }
                pq.push({cnt1, ch1});
            }
            else
            {
                result += ch1;
                if (--cnt1 > 0)
                {
                    pq.push({cnt1, ch1});
                }
            }
        }

        return result;
    }
};

// Accepted