/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/
 *  Problem Name : Minimum Number of Operations to Move All Balls to Each Box
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-29 22:02:14
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
    vector<int> minOperations(string boxes)
    {
        int n = boxes.size();
        vector<int> ans(n, 0);

        int count = 0, moves = 0;

        // Left to Right pass
        for (int i = 0; i < n; i++)
        {
            ans[i] += moves;
            count += (boxes[i] == '1');
            moves += count;
        }

        count = 0, moves = 0;

        // Right to Left pass
        for (int i = n - 1; i >= 0; i--)
        {
            ans[i] += moves;
            count += (boxes[i] == '1');
            moves += count;
        }

        return ans;
    }
};


// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    Solution sol;
    string boxes = "110";
    vector<int> result = sol.minOperations(boxes);

    cout << "Result: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    nnl;

    return 0;
}
