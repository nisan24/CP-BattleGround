/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/S
 *  Problem Name : S. Good Number
 *  Author       : Nisan Hossain
 *	Created At   : 2025-07-07 22:42:35
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

    int countGood = 0;

    while (n--)
    {
        string x;
        cin >> x;

        bool found[10] = {false};

        for (char ch : x)
        {
            if (ch >= '0' && ch <= '9')
            {
                found[ch - '0'] = true;
            }
        }

        bool allDigitsPresent = true;
        for (int i = 0; i <= k; i++)
        {
            if (!found[i])
            {
                allDigitsPresent = false;
                break;
            }
        }

        if (allDigitsPresent)
            countGood++;
    }

    cout << countGood << noboolalpha;
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