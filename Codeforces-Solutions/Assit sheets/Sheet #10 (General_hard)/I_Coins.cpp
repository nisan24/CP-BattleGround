/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/I
 *  Problem Name : I. Coins
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-22 22:52:05
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
    int score[3] = {0};
    char c1, op, c2;

    for (int i = 0; i < 3; i++)
    {
        cin >> c1 >> op >> c2;
        int a = c1 - 'A';
        int b = c2 - 'A';

        if (op == '>')
            score[a]++;
        else
            score[b]++;
    }

    vector<pair<int, char>> coins = {
        {score[0], 'A'},
        {score[1], 'B'},
        {score[2], 'C'}
    };

    srt(coins);

    if (coins[0].first == coins[1].first || coins[1].first == coins[2].first)
    {
        cout << "Impossible" << nl;
    }
    else
    {
        for (auto &p : coins)
            cout << p.second;
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

// Accepted
// ---------- End of Code ----------