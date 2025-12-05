/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/distribute-candies/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-05 23:15:22
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueTypes(candyType.begin(), candyType.end());
        return min((int)uniqueTypes.size(), (int)candyType.size() / 2);
    }
};

// Accepted
