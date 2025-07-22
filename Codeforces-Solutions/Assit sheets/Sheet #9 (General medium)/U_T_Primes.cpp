/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/U
 *  Problem Name : U - T Primes
 *  Author       : Nisan Hossain
 *	Created At   : 2025-07-22 22:05:11
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

const int MAX = 1e6 + 5;

vector<bool> is_prime(MAX, true);
unordered_set<ll> t_primes;

void sieve()
{
    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i * i < MAX; i++)
    {
        if (is_prime[i])
        {
            for (ll j = i * i; j < MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (ll i = 2; i < MAX; i++)
    {
        if (is_prime[i])
        {
            t_primes.insert(i * 1LL * i);
        }
    }
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    sieve();

    int t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;

        if (t_primes.count(x))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
