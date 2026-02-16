/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 *  Problem Name : 1431. Kids With the Greatest Number of Candies
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-13 21:43:31
 *  Language     : C++
 * -------------------------------------------------
 */
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = *max_element(candies.begin(), candies.end());
        vector<bool> res;
        res.reserve(candies.size());

        for (int c : candies)
            res.push_back(c + extraCandies >= mx);

        return res;
    }
};

// Accepted

// --------------------------------
//---c
//---vv