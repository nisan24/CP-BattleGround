/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/Z
 *  Problem Name : Z_Fraction
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-03 20:29:59
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

int GCD(int a, int b)
{
    return b == 0 ? a : GCD(b, a % b);
}

int LCM(int a, int b)
{
    return (a / GCD(a, b)) * b;
}

// ---------- Solve Function ----------
void solve()
{
    string f1, f2;
    cin >> f1 >> f2;

    int pos1 = f1.find('/');
    int num1 = stoi(f1.substr(0, pos1));  
    int den1 = stoi(f1.substr(pos1 + 1)); 

    int pos2 = f2.find('/');
    int num2 = stoi(f2.substr(0, pos2));
    int den2 = stoi(f2.substr(pos2 + 1));

    cout << LCM(num1, num2) << '/' << GCD(den1, den2) << nl;
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