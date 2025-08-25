/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/F
 *  Problem Name :
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-25 21:51:54
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
    int n, m;
    cin >> n >> m;
    vector<string> stud(n);

    for (int i = 0; i < n; i++)
    {
        cin >> stud[i];
    }

    vector<bool> successful(n, false);

    for (int col = 0; col < m; col++)
    {
        char best = '0';
        for (int row = 0; row < n; row++)
        {
            best = max(best, stud[row][col]);
        }
        for (int row = 0; row < n; row++)
        {
            if (stud[row][col] == best)
            {
                successful[row] = true;
            }
        }
    }

    int count = 0;
    for (bool ok : successful)
    {
        if (ok)
            count++;
    }

    cout << count << nl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}
