/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/custom-sort-string/description/
 *  Problem Name : 791. Custom Sort String
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-18 18:57:56
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        string result;

        for (char c : order) {
            if (freq.count(c)) {
                result.append(freq[c], c);
                freq.erase(c);
            }
        }

        for (auto &p : freq) {
            result.append(p.second, p.first);
        }

        return result;
    }
};

// Accepted
