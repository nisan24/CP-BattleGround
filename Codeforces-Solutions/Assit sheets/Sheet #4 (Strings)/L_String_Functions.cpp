/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L
 *  Problem Name : L. String Functions
 *  Author       : Nisan Hossain
 *	Created At   : 2025-04-30 12:33:56
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
    int size, queries;
    string str, command;
    cin >> size >> queries >> str;

    while (queries--)
    {
        cin >> command;

        if (command == "pop_back")
        {
            if (!str.empty())
                str.pop_back();
        }
        else if (command == "front")
        {
            cout << str.front() << '\n';
        }
        else if (command == "back")
        {
            cout << str.back() << '\n';
        }
        else if (command == "sort")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            sort(str.begin() + l - 1, str.begin() + r);
        }
        else if (command == "reverse")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            reverse(str.begin() + l - 1, str.begin() + r);
        }
        else if (command == "print")
        {
            int pos;
            cin >> pos;
            cout << str[pos - 1] << '\n';
        }
        else if (command == "substr")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            cout << str.substr(l - 1, r - l + 1) << '\n';
        }
        else if (command == "push_back")
        {
            char ch;
            cin >> ch;
            str.push_back(ch);
        }
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
