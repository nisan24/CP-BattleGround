/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 *	Created At   : 2025-04-04 09:59:09
 *  Language     : C++
 * -------------------------------------------------
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define pi pair<ll, ll>
#define vpi vector<pi>
#define nl "\n"
#define nnl cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rev(v) reverse(v.begin(), v.end())
#define mset(ar, option) memset(ar, option, sizeof(ar))
#define allsum(v) accumulate(v.begin(), v.end(), 0LL)
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL); 			  \
    cout.tie(NULL)

int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int count1 = 0, count2 = 0, candidate1 = INT_MIN, candidate2 = INT_MIN;

        for (int num : nums)
        {
            if (num == candidate1)
            {
                count1++;
            }
            else if (num == candidate2)
            {
                count2++;
            }
            else if (count1 == 0)
            {
                candidate1 = num;
                count1 = 1;
            }
            else if (count2 == 0)
            {
                candidate2 = num;
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        count1 = count2 = 0;
        for (int num : nums)
        {
            if (num == candidate1)
                count1++;
            else if (num == candidate2)
                count2++;
        }

        vector<int> result;
        int n = nums.size();
        if (count1 > n / 3)
            result.push_back(candidate1);
        if (count2 > n / 3)
            result.push_back(candidate2);

        return result;
    }
};

// ---------- Solve Function ----------
void solve()
{
    Solution sol;

    vector<int> nums = {1, 2, 3, 2, 2, 1, 1}; // Output: 1, 2

    vector<int> result = sol.majorityElement(nums);

    cout << "Majority Elements (more than n/3 times): ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

// Accepted