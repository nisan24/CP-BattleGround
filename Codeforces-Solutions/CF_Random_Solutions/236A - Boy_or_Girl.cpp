/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/problemset/problem/236/A
 *  Problem Name : A. Boy or Girl
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-29 22:16:28
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
    cin.tie(NULL); 			  \
    cout.tie(NULL)

int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}

// ---------- Solve Function ----------
void solve()
{
    string s;
    cin >> s;
    set<char> unique_chars(s.begin(), s.end());
    
    if (unique_chars.size() % 2 == 0)
        cout << "CHAT WITH HER!" << nl;
    else
        cout << "IGNORE HIM!" << nl;

}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}
