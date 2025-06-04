/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/F
 *  Problem Name : F. Multiplication of Matrices
 *  Author       : Nisan Hossain
 *	Created At   : 2025-06-04 20:24:20
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
    int rowA, colA, rowB, colB;

    cin >> rowA >> colA;
    vector<vector<int>> A(rowA, vector<int>(colA));

    for (int i = 0; i < rowA; i++){
        for (int j = 0; j < colA; j++){
            cin >> A[i][j];
        }
    }

    cin >> rowB >> colB;
    vector<vector<int>> B(rowB, vector<int>(colB));

    for (int i = 0; i < rowB; i++){
        for (int j = 0; j < colB; j++){
            cin >> B[i][j];
        }
    }

    if (colA != rowB)
    {
        cout << "Matrix multiplication not possible!" << endl;
        return;
    }

    vector<vector<int>> C(rowA, vector<int>(colB, 0));

    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            for (int k = 0; k < colA; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << nl;
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