/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/U
 *  Problem Name :
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-20 21:29:27
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

bool isSubsequence(const string &x, const string &y)
{
    int i = 0;
    for (char ch : y)
    {
        if (i < (int)x.size() && x[i] == ch)
            i++;
    }
    return i == (int)x.size();
}

// ---------- Solve Function ----------
void solve()
{
    string s, t, p;
    cin >> s >> t >> p;

    if (!isSubsequence(s, t))
    {
        no;
        return;
    }

    vector<int> freq(26, 0), need(26, 0);

    for (char c : s)
        freq[c - 'a']++;
    for (char c : p)
        freq[c - 'a']++;
    for (char c : t)
        need[c - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] < need[i])
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

    ll TC;
    cin >> TC;
    while (TC--)
    {
        solve();
    }

    return 0;
}
