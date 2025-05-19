/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/J
 *  Problem Name : J. Prime Factors
 *  Author       : Nisan Hossain
 *	Created At   : 2025-05-19 21:37:23
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
    long long num;
    cin >> num;

    bool first = true;

    for (long long i = 2; i * i <= num; ++i)
    {
        int count = 0;
        while (num % i == 0)
        {
            count++;
            num /= i;
        }
        if (count > 0)
        {
            if (!first)
                cout << "*";
            cout << "(" << i << "^" << count << ")";
            first = false;
        }
    }

    if (num > 1)
    {
        if (!first)
            cout << "*";
        cout << "(" << num << "^1)";
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