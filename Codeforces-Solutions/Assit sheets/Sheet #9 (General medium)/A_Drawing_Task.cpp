/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/A
 *  Problem Name : A. Drawing Task
 *  Author       : Nisan Hossain
 *	Created At   : 2025-07-31 22:05:12
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
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<char>> grid(n, vector<char>(m, '.'));

    while (q--)
    {
        int r1, c1, r2, c2;
        char ch;
        cin >> r1 >> c1 >> r2 >> c2 >> ch;

        int row_start = min(r1, r2) - 1;
        int row_end = max(r1, r2);
        int col_start = min(c1, c2) - 1;
        int col_end = max(c1, c2);

        for (int i = row_start; i < row_end; i++)
        {
            for (int j = col_start; j < col_end; j++)
            {
                grid[i][j] = ch;
            }
        }
    }

    for (const auto &row : grid)
    {
        for (char ch : row)
            cout << ch;
        nnl;
    }
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

