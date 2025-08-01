/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/X
 *  Problem Name : X. Mountain Scenery
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-01 22:57:11
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
    int n, k;
    cin >> n >> k;

    int sz = 2 * n + 1;
    vector<int> height(sz);

    for (int i = 0; i < sz; ++i)
    {
        cin >> height[i];
    }

    int count = 0;

    for (int i = 1; i < sz - 1; ++i)
    {
        if (height[i] > height[i - 1] + 1 && height[i] > height[i + 1] + 1)
        {
            height[i]--; 
            count++;

            if (count == k)
                break; 
        }
    }

    for (int val : height)
    {
        cout << val << " ";
    }
    nnl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}
