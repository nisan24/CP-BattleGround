/*
 * -------------------------------------------------
 *  Problem Link : http://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/E
 *  Problem Name : E. Construct The Sum
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-14 23:50:32
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
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, sum;
        cin >> n >> sum;

        if (n >= sum)
        {
            cout << 1 << " " << sum;
        }
        else
        {
            ll maxSum = n * (n + 1) / 2;

           if (maxSum < sum)
            {
                cout << -1;
            }
            else
            {
                vector<ll> ans;
                for (ll i = n; i >= 1 && sum > 0; i--)
                {
                    if (sum >= i)
                    {
                        ans.push_back(i);
                        sum -= i;
                    }
                }

                cout << ans.size() << " ";
                for (int i = 0; i < ans.size(); i++)
                {
                    if (i)
                        cout << " ";
                    cout << ans[i];
                }
            }
        }

        if (t)
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


// Accepted
// ---------- End of Code ----------