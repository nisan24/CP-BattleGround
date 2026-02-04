class Solution
{
public:
    int hIndex(vector<int> &arr)
    {
        sort(arr.begin(), arr.end(), greater<int>());
        int count;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] >= i + 1)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};

// Accepted