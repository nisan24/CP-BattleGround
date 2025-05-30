/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/T
 *  Problem Name : Circle Task
 *  Author       : Nisan Hossain
 *	Created At   : 2025-05-30 17:15:46
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
    double x, y, r;
    int n;
    cin >> x >> y >> r >> n;

    double rSquared = r * r;

    while (n--)
    {
        double x2, y2;
        cin >> x2 >> y2;

        double dx = x2 - x;
        double dy = y2 - y;

        if ((dx * dx + dy * dy) <= rSquared)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
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


// Accepted
// ---------- End of Code ----------