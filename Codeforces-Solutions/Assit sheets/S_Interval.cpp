/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S
 *  Problem Name : S_Interval
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-30 22:06:57
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
    double x;
    cin >> x;
    if(x >= 0 && x <= 25){
        cout << "Interval [0,25]" << nl;
    }
    else if(x > 25 && x <= 50){
        cout << "Interval (25,50]" << nl;
    }
    else if(x > 50 && x <= 75){
        cout << "Interval (50,75]" << nl;
    }
    else if(x > 75 && x <= 100){
        cout << "Interval (75,100]" << nl;
    }
    else{
        cout << "Out of Intervals" << nl;
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