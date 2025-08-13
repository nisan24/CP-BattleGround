/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-13 22:39:56
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
void solve()
{
    int n;
    cin >> n;
    vector<array<int, 3>> v(n);

    for (int i = 0; i < n; i++)
    {
        int s, k;
        cin >> s >> k;
        v[i] = {abs(s - k), s, k};
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b)
         {
             return a[0] > b[0];
         });

    ll total = v[0][1];
    int sol = v[0][0];

    for (int i = 1; i < n; i++)
    {
        if (sol < v[i][1])
        {
            total += v[i][1] - sol;
            sol = v[i][0];
        }
        else
        {
            sol -= v[i][2];
        }
    }

    cout << total;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}
