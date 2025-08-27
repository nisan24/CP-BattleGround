class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        int validIndex = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[validIndex] != nums[j])
            {
                validIndex++;
                nums[validIndex] = nums[j];
            }
        }
        return validIndex + 1;
    }
};

// 26_Remove_Duplicates_from_Sorted_Array.cpp:

/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 *  Problem Name : Remove Duplicates from Sorted Array
 *  Author       : Nisan Hossain
 *	Created At   : 2025-03-26 19:46:34
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
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

    if(arr.empty()) return;
    int validIndex = 0;
    for (int j = 1; j < arr.size(); j++){
        if (arr[validIndex] != arr[j]){
            validIndex++;
            arr[validIndex] = arr[j];
        }
       
    }
    cout << validIndex + 1 << nl;
}

// ---------- Main Function ----------
int32_t main(int argc, char const *argv[])
{
    fast_io;

    solve();

    return 0;
}
