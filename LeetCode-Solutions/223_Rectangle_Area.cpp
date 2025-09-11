/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 *	Created At   : 2025-04-01 22:15:21
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

class Solution
{
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
    {

        int area1 = (ax2 - ax1) * (ay2 - ay1);
        int area2 = (bx2 - bx1) * (by2 - by1);

        int overlap_width = max(0, min(ax2, bx2) - max(ax1, bx1));
        int overlap_height = max(0, min(ay2, by2) - max(ay1, by1));

        return area1 + area2 - (overlap_width * overlap_height);
    }
};


// ---------- Solve Function ----------
void solve()
{
    Solution sol;

    cout << "Test 1: " << sol.computeArea(-3, 0, 3, 4, 0, -1, 9, 2) << "\n";

    cout << "Test 2: " << sol.computeArea(-2, -2, 2, 2, -3, -3, 3, 3) << "\n"; 

    cout << "Test 3: " << sol.computeArea(0, 0, 1, 1, 1, 1, 2, 2) << "\n"; 

    cout << "Test 4: " << sol.computeArea(-3, -3, -1, -1, 1, 1, 3, 3) << "\n";
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}


