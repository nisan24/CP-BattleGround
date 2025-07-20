/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/I
 *  Problem Name : I. Lineland Mail
 *  Author       : Nisan Hossain
 *	Created At   : 2025-07-20 23:27:10
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
    vector<int> vect(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }

    for (int i = 0; i < n; i++)
    {
        int minDiff, maxDiff;

        if (i == 0)
        {
            minDiff = abs(vect[i] - vect[i + 1]);
        }
        else if (i == n - 1)
        {
            minDiff = abs(vect[i] - vect[i - 1]);
        }
        else
        {
            int leftDiff = abs(vect[i] - vect[i - 1]);
            int rightDiff = abs(vect[i] - vect[i + 1]);
            minDiff = min(leftDiff, rightDiff);
        }

        maxDiff = max(abs(vect[i] - vect[0]), abs(vect[i] - vect[n - 1]));

        cout << minDiff << " " << maxDiff << nl;
    }
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