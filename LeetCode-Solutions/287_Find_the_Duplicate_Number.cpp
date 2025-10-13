/*
 * -------------------------------------------------
 *  Problem Link :
 *  Problem Name :
 *  Author       : Nisan Hossain
 *	Created At   : 2025-04-03 20:17:05
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
    cin.tie(NULL);               \
    cout.tie(NULL)

int isprime(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// ---------- Solve Function ----------
void solve()
{
    vector<int> nums;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int n = nums.size();
    unordered_set<int> seen;
    for (int i = 0; i < n; i++)
    {
        if (seen.find(nums[i]) != seen.end())
        {
            cout << nums[i] << nl;
            return;
        }
        seen.insert(nums[i]);
    }
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}


// /*


// =======================
// =======================

//  * -------------------------------------------------
//  *  Problem Link : 
//  *  Problem Name :  
//  *  Author       : Nisan Hossain
//  *	Created At   : 2025-04-03 20:17:05
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
// void solve()
// {
//     vector<int> nums;
//     for (int i = 0; i < 5; i++)
//     {
//         int x;
//         cin >> x;
//         nums.push_back(x);
//     }
    
//     int n = nums.size();
//     srt(nums);
//     for (int i = 0; i < n; i++)
//     {
//         if(nums[i] == nums[i + 1])
//         {
//             cout << nums[i] << " ";
//             return;
//         }
//     }
    


// }

// // ---------- Main Function ----------
// int32_t main(int argc, char const *argv[])
// {
//     fast_io;

//     solve();

//     return 0;
// }

