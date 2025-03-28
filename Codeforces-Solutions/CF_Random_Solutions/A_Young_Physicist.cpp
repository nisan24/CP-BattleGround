/*
 * -------------------------------------------------
 *  Problem Link : http://codeforces.com/problemset/problem/69/A
 *  Problem Name : A. Young Physicist
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-24 00:26:46
 *  Language     : C++
 * -------------------------------------------------
 * time complexity : O(N)
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
    int n;
    cin >> n;

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }

    if (a == 0 && b == 0 && c == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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