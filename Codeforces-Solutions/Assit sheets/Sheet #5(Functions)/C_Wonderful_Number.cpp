/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
 *  Problem Name : C. Wonderful Number
 *  Author       : Nisan Hossain
 *	Created At   : 2025-05-10 22:03:35
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
bool is_palindrome_binary(int x)
{
    int rev = 0, temp = x;

    while (temp > 0)
    {
        rev = (rev << 1) | (temp & 1);
        temp >>= 1;
    }

    return rev == x;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    int n;
    cin >> n;

    if ((n % 2 == 1) && is_palindrome_binary(n))
    {
        yes;
    }
    else
    {
        no;
    }

    return 0;
}

// Accepted
// ---------- End of Code ----------