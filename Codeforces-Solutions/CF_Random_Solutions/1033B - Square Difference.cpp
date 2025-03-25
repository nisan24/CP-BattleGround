/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/problemset/problem/1033/B
 *  Problem Name : B. Square Difference
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-25 22:48:25
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

ll isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}

// ---------- Solve Function ----------
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (abs(a - b == 1))
    {
        isprime((a + b) * (a - b)) ? yes : no;
    }
    else{
        no;
    }
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


// /*
//  * ---------------------------------------------------
//  *  Status         : Not Accepted (Wrong Answer)
//  *  Problem Link   : https://codeforces.com/problemset/problem/1033/B
//  *  Author         : Nisan Hossain
//  * ---------------------------------------------------
//  */
// // ---------- END ----------
