/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/D
 *  Problem Name : D. Hussin and Strings
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-11 23:55:29
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
    string A, B;
    cin >> A >> B;

    if (A.size() != B.size())
    {
        no;
        return;
    }

    if (A == B)
    {
        srt(A);
        for (int i = 1; i < (int)A.size(); i++)
        {
            if (A[i] == A[i - 1])
            {
                yes;
                return;
            }
        }
        no;
        return;
    }

    vector<int> diff;
    for (int i = 0; i < (int)A.size(); i++)
    {
        if (A[i] != B[i])
            diff.push_back(i);
    }

    if (diff.size() == 2 && A[diff[0]] == B[diff[1]] && A[diff[1]] == B[diff[0]])
        yes;
    else
        no;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

