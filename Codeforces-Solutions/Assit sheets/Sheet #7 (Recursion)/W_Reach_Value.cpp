/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
 *  Problem Name : W. Reach Value
 *  Author       : Nisan Hossain
 *	Created At   : 2025-06-16 22:39:13
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
bool canReach(ll current, ll target)
{
    if (current > target)
        return false;
    if (current == target)
        return true;

    return canReach(current * 10, target) || canReach(current * 20, target);
}

void solve()
{

    ll target;
    cin >> target;

    if (canReach(1, target))
        yes;
    else
        no;    

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

// Accepted
// ---------- End of Code ----------