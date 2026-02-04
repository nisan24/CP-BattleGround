class Solution
{
public:
    int addedInteger(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int n = nums1.size();
        return nums2[n - 1] - nums1[n - 1];
    }
};

// Accepted

// -------------------------------------------------------

// class Solution {
// public:
//     int addedInteger(vector<int>& nums1, vector<int>& nums2) {
//       return *min_element(nums2.begin(), nums2.end()) -
//       *min_element(nums1.begin(), nums1.end());
//     }
// };

// // Accepted

// ----------------------------------------------------

// class Solution {
// public:
//     int addedInteger(vector<int>& nums1, vector<int>& nums2) {
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
//         int x = nums2[0] - nums1[0];

//         for (int i = 0; i < nums1.size(); i++) {
//             if (nums1[i] + x != nums2[i]) {
//                 return x;
//                 break;
//             }
//         }
//         return x;
//     }
// };

// Accepted
