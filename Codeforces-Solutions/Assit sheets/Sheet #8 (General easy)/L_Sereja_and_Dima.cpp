/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/L
 *  Problem Name : Sereja and Dima
 *  Author       : Nisan Hossain
 *	Created At   : 2025-06-29 22:32:54
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
    vector<int> cards(n);

    for (int &card : cards)
    {
        cin >> card;
    }

    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    bool serejaTurn = true;

    while (left <= right)
    {
        int pick;
        if (cards[left] > cards[right])
        {
            pick = cards[left++];
        }
        else
        {
            pick = cards[right--];
        }

        if (serejaTurn)
            sereja += pick;
        else
            dima += pick;

        serejaTurn = !serejaTurn; 
    }

    cout << sereja << " " << dima << nl;
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