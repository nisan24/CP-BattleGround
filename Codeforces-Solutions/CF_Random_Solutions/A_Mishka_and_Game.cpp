/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/contest/703/problem/A
 *  Problem Name : A. Mishka and Game
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-26 22:46:29
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
    int n, a, b, sum1 = 0, sum2 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        if (a > b)
            sum1++;
        else if (a < b)
            sum2++;
    }
    if (sum1 > sum2)
        cout << "Mishka" << nl;
    else if (sum1 < sum2)
        cout << "Chris" << nl;
    else
        cout << "Friendship is magic!^^" << nl;

}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

// Accepted
