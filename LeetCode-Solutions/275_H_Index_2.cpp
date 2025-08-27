class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        int n = citations.size();
        int left = 0, right = n - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int papers = n - mid;

            if (citations[mid] == papers)
            {
                return papers;
            }
            else if (citations[mid] < papers)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return n - left;
    }
};

// Accepted