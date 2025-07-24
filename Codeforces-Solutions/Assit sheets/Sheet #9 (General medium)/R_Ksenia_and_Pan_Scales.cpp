/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/R
 *  Problem Name : R. Ksenia and Pan Scales
 *  Author       : Nisan Hossain
 *	Created At   : 2025-07-24 22:20:00
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
    string scal, w;
    cin >> scal >> w;

    int bar_pos = scal.find('|');
    
    int left = bar_pos;
    int right = scal.size() - bar_pos - 1;

    int total = left + right + w.size();

    if (total % 2 != 0) {
        cout << "Impossible";
        return;
    }

    int target = total / 2;

    if (left > target || right > target) {
        cout << "Impossible";
        return;
    }

    int left_need = target - left;
    int right_need = target - right;

    if (left_need + right_need != w.size()) {
        cout << "Impossible";
        return;
    }

    string left_str = w.substr(0, left_need);
    string right_str = w.substr(left_need);

    cout << left_str + scal + right_str;

}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}


