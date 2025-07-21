/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/M
 *  Problem Name : M - Palindromes
 *  Author       : Nisan Hossain
 *	Created At   : 2025-07-21 22:27:48
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
bool isPalindrome(const string &s)
{
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        if (s[l++] != s[r--])
            return false;
    }
    return true;
}

bool allSameChar(const string &s)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[0])
            return false;
    }
    return true;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    string x;
    cin >> x;

    if (allSameChar(x))
    {
        cout << 0;
    }
    else if (isPalindrome(x))
    {
        cout << x.size() - 1;
    }
    else
    {
        cout << x.size();
    }

    return 0;
}

// Accepted
// ---------- End of Code ----------