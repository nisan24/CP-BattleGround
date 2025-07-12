/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/C
 *  Problem Name : C. Dragons
 *  Description  : Codeforces - 223207 - C. Dragons
 *  Difficulty   : Medium
 *  Tags         : Codeforces, C++, Implementation, Sorting
 *  Author       : Nisan Hossain
 *	Created At   : 2025-07-12 22:29:18
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
    int strength, n;
    cin >> strength >> n;

    vector<pair<int, int>> dragons(n);
    for (auto &d : dragons)
    {
        cin >> d.first >> d.second;
    }

    srt(dragons);

    for (auto [dragonPower, bonus] : dragons)
    {
        if (strength > dragonPower)
        {
            strength += bonus;
        }
        else
        {
            no;
            return;
        }
    }
    yes;
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