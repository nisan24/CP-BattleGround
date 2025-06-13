/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T
 *  Problem Name : Combination
 *  Problem Type : Recursion
 *  Author       : Nisan Hossain
 *	Created At   : 2025-06-13 22:00:27
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
#define setPrec(x) fixed << setprecision(x)
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

// ---------- Solve Function ----------

const int N = 1e3 + 5;
ll dp[N][N];

ll nCr(int n, int r)
{
    if (r > n)
        return 0;

    if (r == 0 || r == n)
        return 1;

    if (dp[n][r] != -1)
        return dp[n][r];

    // Recursive formula: C(n, r) = C(n-1, r-1) + C(n-1, r)
    return dp[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);
}


void solve()
{
    int n, r;
    cin >> n >> r;

    memset(dp, -1, sizeof(dp));

    ll result = nCr(n, r);

    cout << result << nl;

}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

// Accepted
// ---------- End of Code ----------