/*
 * -------------------------------------------------
 *  Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G
 *  Problem Name : G. Pyramid
 *  Problem Type : Recursion
 *  Author       : Nisan Hossain
 *	Created At   : 2025-06-07 22:05:34
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

void printPyramid(int level, int total)
{
    if (level == total)
        return;

    int spaces = total - level - 1;
    int stars = 2 * level + 1;

    printLine(spaces, stars);
    cout << endl;

    printPyramid(level + 1, total);
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    int n;
    cin >> n;
    printPyramid(0, n);

    return 0;
}


// Accepted
// ---------- End of Code ----------