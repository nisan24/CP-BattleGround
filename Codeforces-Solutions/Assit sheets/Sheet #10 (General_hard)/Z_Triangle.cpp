/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/Z
 *  Problem Name : Z. Triangle
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-23 22:35:23
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

bool isRight(int x1, int y1, int x2, int y2, int x3, int y3)
{
    if ((x1 == x2 && y1 == y2) ||
        (x1 == x3 && y1 == y3) ||
        (x2 == x3 && y2 == y3))
        return false;

    int d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    int d2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    int d3 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);

    vector<int> v = {d1, d2, d3};
    srt(v);

    return v[2] == v[0] + v[1];
}

// ---------- Solve Function ----------
void solve()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (isRight(x1, y1, x2, y2, x3, y3))
    {
        cout << "RIGHT" << nl;
        return;
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int k = 0; k < 4; k++)
    {
        if (isRight(x1 + dx[k], y1 + dy[k], x2, y2, x3, y3) ||
            isRight(x1, y1, x2 + dx[k], y2 + dy[k], x3, y3) ||
            isRight(x1, y1, x2, y2, x3 + dx[k], y3 + dy[k]))
        {
            cout << "ALMOST" << nl;
                return;
        }
    }

    cout << "NEITHER" << nl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

