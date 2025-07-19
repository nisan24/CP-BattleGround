/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/J
 *  Problem Name : J. Shaass and Oskols
 *  Author       : Nisan Hossain
 *	Created At   : 2025-07-19 21:35:06
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

    vector<int> birds(n); // tar e thaka pakhir shongkha
    for (int i = 0; i < n; i++)
    {
        cin >> birds[i];
    }

    int shots;
    cin >> shots;

    while (shots--)
    {
        int x, y;
        cin >> x >> y;
        x--; // 0-based index

        // jodi bam pase tar theke abong sekhane pakhira jay
        if (x > 0)
            birds[x - 1] += y - 1;

        // jodi dan pashe tar thake abong sekhane pakhira jay
        if (x < n - 1)
            birds[x + 1] += birds[x] - y;

        // jei tare guli lage, seta faka hoye jay
        birds[x] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << birds[i] << nl;
    }
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}
