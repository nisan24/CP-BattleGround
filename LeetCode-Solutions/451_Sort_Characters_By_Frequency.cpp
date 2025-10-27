/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/sort-characters-by-frequency/description/
 *  Problem Name : Sort Characters By Frequency
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-09 15:32:40
 *  Language     : C++
 * -------------------------------------------------
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s)
            freq[c]++;

        priority_queue<pair<int, char>> maxHeap;
        for (auto &[ch, count] : freq)
            maxHeap.push({count, ch});

        string result;
        while (!maxHeap.empty()) {
            auto [count, ch] = maxHeap.top();
            maxHeap.pop();
            result.append(count, ch);
        }

        return result;
    }
};

// Accepted
