/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/I
 *  Problem Name : I. Divisibility
 *  Author       : Nisan Hossain
 *	Created At   : 2025-06-02 21:59:36
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


ll sum_of_multiples(ll x, ll n)
{
    ll k = n / x;
    return x * k * (k + 1) / 2;
}

// ---------- Solve Function ----------
void solve()
{
    ll a, b, x;
    cin >> a >> b >> x;

    if (a > b)
        swap(a, b);

    ll sum_b = sum_of_multiples(x, b);
    ll sum_a = sum_of_multiples(x, a - 1);

    cout << (sum_b - sum_a) << nl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

// Accepted
// ---------- End of File ----------