/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/K
 *  Problem Name : K. Snacktower
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-10 23:20:34
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
    int n;
    cin >> n;
    vector<int> snack(n);
    vector<bool> served(n + 1, false);

    int currentMax = n;

    for (int i = 0; i < n; i++)
        cin >> snack[i];


    for (int i = 0; i < n; i++)
    {
        served[snack[i]] = true;

        while (currentMax > 0 && served[currentMax])
        {
            cout << currentMax << " ";
            currentMax--;
        }
        nnl;
    }
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}
