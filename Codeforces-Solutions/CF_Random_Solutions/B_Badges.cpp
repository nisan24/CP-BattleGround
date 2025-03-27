/*
 * -------------------------------------------------
 *  Problem Link :
 *  Problem Name :
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-27 17:31:17
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
    cin.tie(NULL);               \
    cout.tie(NULL)

    
// ---------- Solve Function ----------
void solve()
{
    int B, G, N, count = 0;
    cin >> B >> G >> N;
    for (int i = 0; i <= G; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            if (i + j == N)
            {
                count++;
            }
        }
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
