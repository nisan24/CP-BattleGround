/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/Y
 *  Problem Name : Y. Spiral
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-16 22:11:41
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
    int n, m;
    cin >> n >> m;

    vector<vector<ll>> matrix(n, vector<ll>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    vector<ll> spiral;

    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
            spiral.push_back(matrix[top][j]);
        top++;

        for (int i = top; i <= bottom; i++)
            spiral.push_back(matrix[i][right]);
        right--;

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                spiral.push_back(matrix[bottom][j]);
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                spiral.push_back(matrix[i][left]);
            left++;
        }
    }

    for (int i = 0; i < (int)spiral.size(); i++)
    {
        cout << spiral[i] << (i + 1 == (int)spiral.size() ? '\n' : ' ');
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
// ---------- End of Code ----------