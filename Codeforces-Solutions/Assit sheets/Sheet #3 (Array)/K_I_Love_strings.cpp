/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
 *  Problem Name : K. I Love strings
 *  Author       : Nisan Hossain
 *	Created At   : 2025-04-25 22:50:09
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

// ---------- Solve Function ----------
void solve()
{
    string x, y;
    cin >> x >> y;
    int n = x.size();
    int m = y.size();

    for (int i = 0; i < max(n, m); i++)
    {
        if (i < n) 
        {
            cout << x[i];
        }
        if (i < m) 
        {
            cout << y[i];
        }
    }
    nnl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    ll TC;
    cin >> TC;
    while (TC--)
    {
        solve();
    }

    return 0;
}

// Accepted
// ---------- End of Code ----------