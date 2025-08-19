/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/O
 *  Problem Name :
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-19 21:41:57
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

bool isPrime(int x)
{
    if (x < 2)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;
    for (int i = 3; 1LL * i * i <= x; i += 2)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

// ---------- Solve Function ----------
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> vec(n), op(n);

    for (int &v : vec) cin >> v;
    for (int &o : op) cin >> o;

    for (int i = 0; i < n; i++) {
        if (op[i] == 1) {
            if (isPrime(vec[i])) {
                cout << (vec[i] % 2 == 0 ? 0 : 5) << " ";
            } else {
                cout << -1 << " ";
            }
        } else {
            cout << 0 << " ";
        }
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
