/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/X
 *  Problem Name : X. Rectangle
 *  Author       : Nisan Hossain
 *	Created At   : 2025-05-26 22:20:57
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

bool isInside(double x, double y, double minX, double maxX, double minY, double maxY)
{
    const double EPS = 1e-9;
    return (x >= minX - EPS && x <= maxX + EPS && y >= minY - EPS && y <= maxY + EPS);
}

// ---------- Solve Function ----------
void solve()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    double minX = min({x1, x2, x3, x4});
    double maxX = max({x1, x2, x3, x4});
    double minY = min({y1, y2, y3, y4});
    double maxY = max({y1, y2, y3, y4});

    int n;
    cin >> n;

    while (n--)
    {
        double x, y;
        cin >> x >> y;

        if (isInside(x, y, minX, maxX, minY, maxY))
        {
            yes;
        }
        else
        {
            no;
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
