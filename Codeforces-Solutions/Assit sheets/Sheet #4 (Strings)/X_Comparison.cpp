/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/X
 *  Problem Name : X. Comparison
 *  Author       : Nisan Hossain
 *	Created At   : 2025-05-07 21:04:02
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
    string x;
    cin >> x;

    string smallstr = x;

    string sub1 = "", sub2;

    for (int i = 0; i < x.size() - 1; i++)
    {
        sub1 += x[i];
        sub2 = x.substr(i + 1);

        string sorted1 = sub1;
        string sorted2 = sub2;

        sort(sorted1.begin(), sorted1.end());
        sort(sorted2.begin(), sorted2.end());

        smallstr = min(smallstr, sorted1 + sorted2);
    }

    cout << smallstr;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

// Accepted