class Solution
{
public:
    bool canChoose(vector<vector<int>> &groups, vector<int> &nums)
    {
        int i = 0;
        for (auto &group : groups)
        {
            bool found = false;
            while (i + group.size() <= nums.size())
            {
                if (equal(group.begin(), group.end(), nums.begin() + i))
                {
                    i += group.size();
                    found = true;
                    break;
                }
                i++;
            }
            if (!found)
                return false;
        }
        return true;
    }
};

// Accepted