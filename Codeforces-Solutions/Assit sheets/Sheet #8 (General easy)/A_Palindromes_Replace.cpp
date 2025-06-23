/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A
 *  Problem Name : A. Palindromes Replace
 *  Author       : Nisan Hossain
 *	Created At   : 2025-06-21 22:50:08
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
string makePalindrome(string str)
{
    int left = 0;
    int right = str.size() - 1;

    while (left <= right)
    {
        if (str[left] == '?' && str[right] == '?')
        {
            str[left] = str[right] = 'a';
        }
        else if (str[left] == '?')
        {
            str[left] = str[right];
        }
        else if (str[right] == '?')
        {
            str[right] = str[left];
        }
        else if (str[left] != str[right])
        {
            return "-1";
        }
        left++;
        right--;
    }

    return str;
}

void solve()
{
        string str;
        cin >> str;

        string result = makePalindrome(str);
        cout << result << nl;

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

