/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/problemset/problem/155/A
 *  Problem Name : I_Love_username
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-28 22:26:40
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
    int n;
    cin >> n;
    int min, max, count = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i == 0)
        {
            min = arr[i];
            max = arr[i];
        }
        
        if(arr[i] < min)
        {
            min = arr[i];
            count++;
        }
        if(arr[i] > max)
        {
            max = arr[i];
            count++;
        }
        
    }
    cout << count << nl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();
  
    return 0;
}


// Accepted