/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/J
 *  Problem Name : J_Help_Vasilisa_the_Wise_2
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-21 22:32:50
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
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    for (int a = 1; a <= 9; a++)
    {
        for (int b = 1; b <= 9; b++)
        {
            for (int c = 1; c <= 9; c++)
            {
                for (int d = 1; d <= 9; d++)
                {
                    if (a == b || a == c || a == d || b == c || b == d || c == d)
                        continue;

                    if (a + b == r1 &&
                        c + d == r2 &&
                        a + c == c1 &&
                        b + d == c2 &&
                        a + d == d1 &&
                        b + c == d2)
                    {
                        cout << a << " " << b << nl;
                        cout << c << " " << d << nl;
                        return;
                    }
                }
            }
        }
    }

    cout << -1 << nl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}
