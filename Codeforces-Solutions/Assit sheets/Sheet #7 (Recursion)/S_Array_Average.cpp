/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S
 *  Problem Name : S_Array_Average
 *  Author       : Nisan Hossain
 *	Created At   : 2025-06-14 20:35:53
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
double sumArray(vi x, int size, int indx)
{
    if (indx == size)
        return 0.0;

    return x[indx] + sumArray(x, size, indx + 1);
}

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // double sum = accumulate(arr.begin(), arr.end(), 0LL);
    // double average = sum / n;
    double average = sumArray(arr, n, 0) / n;

    cout << setPrec(6) << average << nl;

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