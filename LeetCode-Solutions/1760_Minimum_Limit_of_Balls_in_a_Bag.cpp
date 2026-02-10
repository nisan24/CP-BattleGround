class Solution
{
public:
    int minimumSize(vector<int> &nums, int maxOperations)
    {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int answer = high;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            int opera = 0;

            for (int num : nums)
            {
                opera += (num - 1) / mid;
                if (opera > maxOperations)
                    break;
            }

            if (opera <= maxOperations)
            {
                answer = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return answer;
    }
};

// Accepted
//&*
//-৳