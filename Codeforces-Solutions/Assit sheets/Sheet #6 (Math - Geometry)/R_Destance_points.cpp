/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/R
 *  Problem Name : R. Distance between points
 *  Author       : Nisan Hossain
 *	Created At   : 2025-05-23 20:55:12
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
#define prec(x) fixed << setprecision(x)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rev(v) reverse(v.begin(), v.end())
#define mset(ar, option) memset(ar, option, sizeof(ar))
#define allsum(v) accumulate(v.begin(), v.end(), 0LL)
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)

int isprime(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// ---------- Solve Function ----------
void solve()
{
    double X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;
    double dx = X2 - X1, dy = Y2 - Y1;
    cout << fixed << setprecision(9) << sqrt(dx * dx + dy * dy) << "\n";
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