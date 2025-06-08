/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H
 *  Problem Name : H. Inverted Pyramid
 *  Author       : Nisan Hossain
 *	Created At   : 2025-06-08 22:18:19
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
void printLine(int spaces, int stars)
{
    if (spaces > 0)
    {
        cout << " ";
        printLine(spaces - 1, stars);
    }
    else if (stars > 0)
    {
        cout << "*";
        printLine(0, stars - 1);
    }
}

void invertedPyramid(int spaces, int stars)
{
    if (stars <= 0)
        return;

    printLine(spaces, stars);
    cout << endl;

    invertedPyramid(spaces + 1, stars - 2);
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    int n;
    cin >> n;

    int stars = 2 * n - 1;
    invertedPyramid(0, stars);
    
    return 0;
}



// Accepted
// ---------- End of Code ----------