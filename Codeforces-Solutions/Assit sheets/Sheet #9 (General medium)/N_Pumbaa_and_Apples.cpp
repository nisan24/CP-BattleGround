/*
 * -------------------------------------------------
 *  Problem Link : http://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/N
 *  Problem Name : N_Pumbaa_and_Apples
 *  Author       : Nisan Hossain
 *	Created At   : 2025-07-26 22:32:46
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

const int N = 1005;

int farm[N][N];
int rowMap[N];
int colMap[N]; 

// ---------- Solve Function ----------
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> farm[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
        rowMap[i] = i;

    for (int i = 1; i <= m; i++)
        colMap[i] = i;


    while (q--)
    {
        char type;
        int x, y;
        cin >> type >> x >> y;

        if (type == 'g')
        {
            cout << farm[rowMap[x]][colMap[y]] << nl;
        }
        else if (type == 'r')
        {
            swap(rowMap[x], rowMap[y]);
        }
        else if (type == 'c')
        {
            swap(colMap[x], colMap[y]);
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
