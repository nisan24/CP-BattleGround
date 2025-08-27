// /*
//  * -------------------------------------------------
//  *  Problem Link : 
//  *  Problem Name :  
//  *  Author       : Nisan Hossain
//  *	Created At   : 2025-03-28 20:48:43
//  *  Language     : C++
//  * -------------------------------------------------
//  */

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define vi vector<ll>
// #define pi pair<ll, ll>
// #define vpi vector<pi>
// #define nl "\n"
// #define nnl cout << "\n"
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define srt(v) sort(v.begin(), v.end())
// #define rsrt(v) sort(v.rbegin(), v.rend())
// #define rev(v) reverse(v.begin(), v.end())
// #define mset(ar, option) memset(ar, option, sizeof(ar))
// #define allsum(v) accumulate(v.begin(), v.end(), 0LL)
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(NULL); 			  \
//     cout.tie(NULL)

// int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}

// // ---------- Solve Function ----------
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int k;
//     cin >> k;

//     vector<int> result(n);
//     for (int i = 0; i < n; i++)
//     {
//         result[(i + k) % n] = a[i];
//     }

//     for (auto val : result)
//     {
//         cout << val << " ";
//     }
//     cout << nl;

// }

// // ---------- Main Function ----------
// int32_t main(int argc, char const *argv[])
// {
//     fast_io;

//     solve();

//     return 0;
// }

/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/rotate-array/
 *  Problem Name : Rotate Array
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-28 21:48:46
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
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};

// ---------- Solve Function ----------
void solve()
{

    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    sol.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    nnl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}
