/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/problemset/problem/263/A
 *  Problem Name : A. Beautiful Matrix
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-24 00:21:44
 *  Language     : C++
 * -------------------------------------------------
 * time complexity : O(1)
 * space complexity : O(1)
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
    cin.tie(NULL)
#define int int64_t
#define ll int64_t

// ---------- Solve Function ----------
void solve()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                cout << abs(i - 2) + abs(j - 2) << nl;
                return;
            }
        }
    }
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

/*
 * ---------------------------------------------------
 *  Status         : Accepted
 *  Author         : Nisan Hossain
 * ---------------------------------------------------
 */
// ---------- END ----------
