// /*
//  * -------------------------------------------------
//  *  Problem Link : https://leetcode.com/problems/longest-common-prefix/description/?source=vscode
//  *  Problem Name : Longest Common Prefix
//  *  Author       : Nisan Hossain
//  *	Created At   : 2025-03-26 17:50:08
//  *  Language     : C++
//  * -------------------------------------------------
//  */

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define vi vector<ll>
// #define pi pair<ll, ll>
// #define vpi vector<pi>
// #define nl "\n"
// #define nnl cout << "\n"
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define srt(v) sort(v.begin(), v.end())
// #define rsrt(v) sort(v.rbegin(), v.rend())
// #define rev(v) reverse(v.begin(), v.end())
// #define mset(ar, option) memset(ar, option, sizeof(ar))
// #define allsum(v) accumulate(v.begin(), v.end(), 0LL)
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(NULL); 			  \
//     cout.tie(NULL)

// int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}

// // ---------- Solve Function ----------
// void solve(){
//     vector<string> v = {"flower", "flow", "flight"};
//     // vector<string> v = {"dog", "racecar", "car"};

//     string ans = "";
//     for (int i = 0; i < v[0].size(); i++)
//     {
//         char c = v[0][i];
//         cout << "c -> " << c << nl;

//         for (int j = 0; j < v.size(); j++)
//         {
//             cout << "v[j][i] -> " << v[j][i] << nl;

//             if (v[j][i] != c)
//             {
//                 cout << "final: " <<  ans << nl;
//                 // cout << ans << nl;
//                 return;
//             }
//         }
//         ans += c;
//         cout << "ans -> " << ans << nl;
//     }

    
// }

// // ---------- Main Function ----------
// int32_t main(int argc, char const *argv[])
// {
//     fast_io;

//     solve();

//     return 0;
// }


// Accepted


// ==============

/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/longest-common-prefix/description/?source=vscode
 *  Problem Name : Longest Common Prefix
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-26 18:51:06
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
    vector<string> v = {"flower", "flow", "flight"};
    srt(v);
    // for(auto x: v) cout << x << nl;

    string first = v[0], last = v[v.size() - 1];

    string res = "";
    for (int i = 0; i < v[0].size(); i++)
    {
        if (first[i] == last[i])
        {
            res += first[i];
        }
        else
        {
            break;
        }
    }
    cout << res << nl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}

// Accepted

// --------------------------------------

// ==== Leetcode ====
// class Solution
// {
// public:
//     string longestCommonPrefix(vector<string> &strs)
//     {
//         sort(strs.begin(), strs.end());

//         string res = "";
//         for (int i = 0; i < strs[0].size(); i++)
//         {
//             if (strs[0][i] == strs[strs.size() - 1][i])
//             {
//                 res += strs[0][i];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         return res;
//     }
// };

// Accepted

// ==== Leetcode ====