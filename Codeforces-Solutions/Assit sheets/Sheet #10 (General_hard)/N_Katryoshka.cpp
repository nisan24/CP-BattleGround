/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/N
 *  Problem Name : N. Katryoshka
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-24 22:42:33
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
    ll eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;

    if (eyes == 0 || bodies == 0)
    {
        cout << 0;
    }
    else if (mouths == 0)
    {
        cout << min(eyes / 2, bodies);
    }
    else if (eyes > mouths)
    {
        if (bodies > (eyes - mouths) / 2)
        {
            cout << min(bodies - (eyes - mouths) / 2, mouths) + (eyes - mouths) / 2;
        }
        else
        {
            cout << min(bodies, mouths);
        }
    }
    else
    {
        cout << min(min(eyes, mouths), bodies);
    }
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

