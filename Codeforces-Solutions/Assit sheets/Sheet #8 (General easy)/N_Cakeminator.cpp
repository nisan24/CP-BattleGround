/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/N
 *  Problem Name : N - Cakeminator
 *  Author       : Nisan Hossain
 *	Created At   : 2025-07-08 20:05:05
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
    int row, col;
    cin >> row >> col;

    vector<bool> rowHasS(row, false);
    vector<bool> colHasS(col, false);

    for (int i = 0; i < row; i++)
    {
        string line;
        cin >> line;
        for (int j = 0; j < col; j++)
        {
            if (line[j] == 'S')
            {
                rowHasS[i] = true;
                colHasS[j] = true;
            }
        }
    }

    int cells = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (!rowHasS[i] || !colHasS[j])
            {
                cells++;
            }
        }
    }

    cout << cells << nl;
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
