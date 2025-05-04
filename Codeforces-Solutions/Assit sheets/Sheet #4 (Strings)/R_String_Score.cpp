/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
 *  Problem Name : R String Score
 *  Author       : Nisan Hossain
 *	Created At   : 2025-05-04 23:00:50
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
    int n, score = 0;
    string x;
    cin >> n >> x;

    vector<bool> used(n, false);

    for (int i = 0; i < n; i++)
    {
        if (used[i])
            continue;

        char ch = x[i];
        switch (ch)
        {
        case 'V':
            score += 5;
            break;

        case 'W':
            score += 2;
            break;

        case 'X':
            if (i + 1 < n)
                used[i + 1] = true;
            break;

        case 'Y':
            if (i + 1 < n && !used[i + 1])
            {
                x += x[i + 1];
                used.push_back(false);
                n++;
                used[i + 1] = true;
            }
            break;

        case 'Z':
            if (i + 1 < n && !used[i + 1])
            {
                if (x[i + 1] == 'V')
                {
                    score /= 5;
                    used[i + 1] = true;
                }
                else if (x[i + 1] == 'W')
                {
                    score /= 2;
                    used[i + 1] = true;
                }
            }
            break;
        }
    }

    cout << score << "\n";
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

// Accepted