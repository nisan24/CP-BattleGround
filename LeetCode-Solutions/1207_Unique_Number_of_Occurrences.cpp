/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/unique-number-of-occurrences/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-05 22:40:56
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int x : arr)
            freq[x]++;

        unordered_set<int> seen;
        for (auto& p : freq) {
            if (!seen.insert(p.second).second)
                return false;
        }

        return true;
    }
};

// Accepted