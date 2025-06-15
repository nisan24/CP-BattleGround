/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
 *  Problem Name : U. Knapsack
 *  Author       : Nisan Hossain
 *	Created At   : 2025-06-15 22:46:12
 *  Language     : C++
 * -------------------------------------------------
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
int dp[100][1001];

int Knapsack(int wi[], int vi[], int max_w, int n)
{
    if (n == 0 || max_w == 0)
        return 0;

    if (dp[n][max_w] != -1)
        return dp[n][max_w];

    if (wi[n - 1] > max_w)
        return dp[n][max_w] = Knapsack(wi, vi, max_w, n - 1);
    else
        return dp[n][max_w] = max(
                   vi[n - 1] + Knapsack(wi, vi, max_w - wi[n - 1], n - 1),
                   Knapsack(wi, vi, max_w, n - 1));
}

void solve()
{
    int n, w;
    int wi[100], vi[100];
    cin >> n >> w;

    for (int i = 0; i < n; i++)
        cin >> wi[i] >> vi[i];

    memset(dp, -1, sizeof(dp));

    cout << Knapsack(wi, vi, w, n);
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