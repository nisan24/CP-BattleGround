/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
 *  Problem Name : U - Is B a Subsequence of A?
 *  Problem Tags : Array, Implementation
 *  Author       : Nisan Hossain
 *	Created At   : 2025-04-24 23:24:36
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
    int n, m;
    cin >> n >> m;

    int A[10000], B[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (A[i] == B[j])
        {
            j++;
        }
        i++;
    }

    if (j == m)
    {
        yes;
    }   
    else
    {
        no;
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
